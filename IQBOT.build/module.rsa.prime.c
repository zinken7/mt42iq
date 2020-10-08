/* Generated code for Python module 'rsa.prime'
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

/* The "_module_rsa$prime" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$prime;
PyDictObject *moduledict_rsa$prime;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_22130f787e2416907883a8c1326e37b7;
extern PyObject *const_str_plain_integer;
static PyObject *const_str_plain_miller_rabin_primality_testing;
static PyObject *const_str_digest_7654f750f269b6470d539da073632188;
extern PyObject *const_str_digest_865e7095d477d90f1eead964158b0a6f;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_k;
static PyObject *const_str_digest_fea6f936344b29c785cbc1e3ef13b1df;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_number_str_plain_bitsize_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_plain_getprime_str_plain_are_relatively_prime_list;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_pow;
extern PyObject *const_str_plain_bitsize;
extern PyObject *const_int_0;
static PyObject *const_int_pos_1536;
extern PyObject *const_str_plain_p;
static PyObject *const_str_digest_6e303417bc0ca7734d7ad588f9400e6e;
extern PyObject *const_str_digest_6b3d394b801be02bbc23994592501dc9;
static PyObject *const_tuple_str_plain_a_str_plain_b_str_plain_d_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_randnum;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_f73a0b8adc7cc331ca199821401b4d0c;
extern PyObject *const_tuple_str_plain_range_tuple;
extern PyObject *const_str_digest_eae335f7395ee2b175bb07ef24fa2bea;
static PyObject *const_str_plain_gcd;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_nbits;
extern PyObject *const_str_plain_getprime;
static PyObject *const_str_plain_are_relatively_prime;
static PyObject *const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_rsa;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_is_prime;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_512;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_read_random_odd_int;
extern PyObject *const_str_plain_bit_size;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_get_primality_testing_rounds;
extern PyObject *const_tuple_str_plain_p_str_plain_q_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_1024;
static PyObject *const_tuple_str_plain_nbits_str_plain_integer_tuple;
static PyObject *const_str_digest_dd3b4864e31c58ed9c0c340f6047f553;
static PyObject *const_tuple_str_plain_number_str_plain_k_tuple;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_common;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_defb0f06cfb3a4c43a6562f176fa76b5;
extern PyObject *const_str_digest_38ae76d41c37a561fb493fd3359762a3;
extern PyObject *const_str_plain_randint;
extern PyObject *const_str_plain_number;
static PyObject *const_str_digest_d325934cfb06c3f1d4c050906f5abeff;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_f460d88f835722cf71be23eccd2f5326;
extern PyObject *const_str_plain___debug__;
static PyObject *const_set_a4a0c129232eb401850c21deefbe9a61;
extern PyObject *const_str_plain__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_22130f787e2416907883a8c1326e37b7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2742572 ], 171, 0 );
    const_str_plain_miller_rabin_primality_testing = UNSTREAM_STRING_ASCII( &constant_bin[ 2742743 ], 30, 1 );
    const_str_digest_7654f750f269b6470d539da073632188 = UNSTREAM_STRING_ASCII( &constant_bin[ 2742773 ], 153, 0 );
    const_str_digest_fea6f936344b29c785cbc1e3ef13b1df = UNSTREAM_STRING_ASCII( &constant_bin[ 2742926 ], 466, 0 );
    const_tuple_str_plain_number_str_plain_bitsize_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_number_str_plain_bitsize_tuple, 0, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_str_plain_number_str_plain_bitsize_tuple, 1, const_str_plain_bitsize ); Py_INCREF( const_str_plain_bitsize );
    const_list_str_plain_getprime_str_plain_are_relatively_prime_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_getprime_str_plain_are_relatively_prime_list, 0, const_str_plain_getprime ); Py_INCREF( const_str_plain_getprime );
    const_str_plain_are_relatively_prime = UNSTREAM_STRING_ASCII( &constant_bin[ 2742658 ], 20, 1 );
    PyList_SET_ITEM( const_list_str_plain_getprime_str_plain_are_relatively_prime_list, 1, const_str_plain_are_relatively_prime ); Py_INCREF( const_str_plain_are_relatively_prime );
    const_int_pos_1536 = PyLong_FromUnsignedLong( 1536ul );
    const_str_digest_6e303417bc0ca7734d7ad588f9400e6e = UNSTREAM_STRING_ASCII( &constant_bin[ 2743392 ], 258, 0 );
    const_tuple_str_plain_a_str_plain_b_str_plain_d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_d_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_d_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_d_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_f73a0b8adc7cc331ca199821401b4d0c = UNSTREAM_STRING_ASCII( &constant_bin[ 2743650 ], 18, 0 );
    const_str_plain_gcd = UNSTREAM_STRING_ASCII( &constant_bin[ 935857 ], 3, 1 );
    const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple, 3, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple, 4, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple, 5, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple, 6, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_get_primality_testing_rounds = UNSTREAM_STRING_ASCII( &constant_bin[ 2743668 ], 28, 1 );
    const_tuple_str_plain_nbits_str_plain_integer_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_integer_tuple, 0, const_str_plain_nbits ); Py_INCREF( const_str_plain_nbits );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_integer_tuple, 1, const_str_plain_integer ); Py_INCREF( const_str_plain_integer );
    const_str_digest_dd3b4864e31c58ed9c0c340f6047f553 = UNSTREAM_STRING_ASCII( &constant_bin[ 2743696 ], 558, 0 );
    const_tuple_str_plain_number_str_plain_k_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_number_str_plain_k_tuple, 0, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_str_plain_number_str_plain_k_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_digest_defb0f06cfb3a4c43a6562f176fa76b5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2744254 ], 141, 0 );
    const_str_digest_d325934cfb06c3f1d4c050906f5abeff = UNSTREAM_STRING_ASCII( &constant_bin[ 2744395 ], 80, 0 );
    const_str_digest_f460d88f835722cf71be23eccd2f5326 = UNSTREAM_STRING_ASCII( &constant_bin[ 2744475 ], 40, 0 );
    const_set_a4a0c129232eb401850c21deefbe9a61 = PySet_New( NULL );
    PySet_Add( const_set_a4a0c129232eb401850c21deefbe9a61, const_int_pos_2 );
    PySet_Add( const_set_a4a0c129232eb401850c21deefbe9a61, const_int_pos_3 );
    PySet_Add( const_set_a4a0c129232eb401850c21deefbe9a61, const_int_pos_5 );
    PySet_Add( const_set_a4a0c129232eb401850c21deefbe9a61, const_int_pos_7 );
    assert( PySet_Size( const_set_a4a0c129232eb401850c21deefbe9a61 ) == 4 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$prime( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b35f4b4e6aec3f6277785f0ff6e31953;
static PyCodeObject *codeobj_7b1c0a37b31c27fbc7f7849dbf85d500;
static PyCodeObject *codeobj_155bcbc69117325e545dc77ae3f7231c;
static PyCodeObject *codeobj_c9140a527390e95583f120e4f5661f1b;
static PyCodeObject *codeobj_478318fcac5c8f2bd67df3f98f112778;
static PyCodeObject *codeobj_e51fb5e7d6c528933f479d8307d88df7;
static PyCodeObject *codeobj_6cfd94b83cff329aa23bbf085ca7545d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f460d88f835722cf71be23eccd2f5326;
    codeobj_b35f4b4e6aec3f6277785f0ff6e31953 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f73a0b8adc7cc331ca199821401b4d0c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_7b1c0a37b31c27fbc7f7849dbf85d500 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_are_relatively_prime, 175, const_tuple_str_plain_a_str_plain_b_str_plain_d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_155bcbc69117325e545dc77ae3f7231c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gcd, 30, const_tuple_str_plain_p_str_plain_q_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c9140a527390e95583f120e4f5661f1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_primality_testing_rounds, 42, const_tuple_str_plain_number_str_plain_bitsize_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_478318fcac5c8f2bd67df3f98f112778 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getprime, 147, const_tuple_str_plain_nbits_str_plain_integer_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e51fb5e7d6c528933f479d8307d88df7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_prime, 121, const_tuple_str_plain_number_str_plain_k_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6cfd94b83cff329aa23bbf085ca7545d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_miller_rabin_primality_testing, 68, const_tuple_a12efe14ca34ffb093867bbd94e40876_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$prime$$$function_1_gcd(  );


static PyObject *MAKE_FUNCTION_rsa$prime$$$function_2_get_primality_testing_rounds(  );


static PyObject *MAKE_FUNCTION_rsa$prime$$$function_3_miller_rabin_primality_testing(  );


static PyObject *MAKE_FUNCTION_rsa$prime$$$function_4_is_prime(  );


static PyObject *MAKE_FUNCTION_rsa$prime$$$function_5_getprime(  );


static PyObject *MAKE_FUNCTION_rsa$prime$$$function_6_are_relatively_prime(  );


// The module function definitions.
static PyObject *impl_rsa$prime$$$function_1_gcd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_155bcbc69117325e545dc77ae3f7231c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_155bcbc69117325e545dc77ae3f7231c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_155bcbc69117325e545dc77ae3f7231c, codeobj_155bcbc69117325e545dc77ae3f7231c, module_rsa$prime, sizeof(void *)+sizeof(void *) );
    frame_155bcbc69117325e545dc77ae3f7231c = cache_frame_155bcbc69117325e545dc77ae3f7231c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_155bcbc69117325e545dc77ae3f7231c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_155bcbc69117325e545dc77ae3f7231c ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_q );
        tmp_compexpr_left_1 = par_q;
        tmp_compexpr_right_1 = const_int_0;
        tmp_operand_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oo";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_q );
        tmp_tuple_element_1 = par_q;
        tmp_iter_arg_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_p );
        tmp_left_name_1 = par_p;
        CHECK_OBJECT( par_q );
        tmp_right_name_1 = par_q;
        tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 38;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
            Py_XDECREF( old );
        }

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


            type_description_1 = "oo";
            exception_lineno = 38;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
            Py_XDECREF( old );
        }

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


            type_description_1 = "oo";
            exception_lineno = 38;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
            Py_XDECREF( old );
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
        {
            PyObject *old = par_p;
            assert( old != NULL );
            par_p = tmp_assign_source_4;
            Py_INCREF( par_p );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_5;
            Py_INCREF( par_q );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_155bcbc69117325e545dc77ae3f7231c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_155bcbc69117325e545dc77ae3f7231c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_155bcbc69117325e545dc77ae3f7231c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_155bcbc69117325e545dc77ae3f7231c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_155bcbc69117325e545dc77ae3f7231c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_155bcbc69117325e545dc77ae3f7231c,
        type_description_1,
        par_p,
        par_q
    );


    // Release cached frame.
    if ( frame_155bcbc69117325e545dc77ae3f7231c == cache_frame_155bcbc69117325e545dc77ae3f7231c )
    {
        Py_DECREF( frame_155bcbc69117325e545dc77ae3f7231c );
    }
    cache_frame_155bcbc69117325e545dc77ae3f7231c = NULL;

    assertFrameObject( frame_155bcbc69117325e545dc77ae3f7231c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_p );
    tmp_return_value = par_p;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_1_gcd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_1_gcd );
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


static PyObject *impl_rsa$prime$$$function_2_get_primality_testing_rounds( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_number = python_pars[ 0 ];
    PyObject *var_bitsize = NULL;
    struct Nuitka_FrameObject *frame_c9140a527390e95583f120e4f5661f1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c9140a527390e95583f120e4f5661f1b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c9140a527390e95583f120e4f5661f1b, codeobj_c9140a527390e95583f120e4f5661f1b, module_rsa$prime, sizeof(void *)+sizeof(void *) );
    frame_c9140a527390e95583f120e4f5661f1b = cache_frame_c9140a527390e95583f120e4f5661f1b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c9140a527390e95583f120e4f5661f1b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c9140a527390e95583f120e4f5661f1b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_rsa );

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

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_common );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_number );
        tmp_args_element_name_1 = par_number;
        frame_c9140a527390e95583f120e4f5661f1b->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_bit_size, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_bitsize == NULL );
        var_bitsize = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_bitsize );
        tmp_compexpr_left_1 = var_bitsize;
        tmp_compexpr_right_1 = const_int_pos_1536;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oo";
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
        tmp_return_value = const_int_pos_3;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_bitsize );
        tmp_compexpr_left_2 = var_bitsize;
        tmp_compexpr_right_2 = const_int_pos_1024;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
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
        tmp_return_value = const_int_pos_4;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_bitsize );
        tmp_compexpr_left_3 = var_bitsize;
        tmp_compexpr_right_3 = const_int_pos_512;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "oo";
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
        tmp_return_value = const_int_pos_7;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9140a527390e95583f120e4f5661f1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9140a527390e95583f120e4f5661f1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9140a527390e95583f120e4f5661f1b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c9140a527390e95583f120e4f5661f1b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c9140a527390e95583f120e4f5661f1b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c9140a527390e95583f120e4f5661f1b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c9140a527390e95583f120e4f5661f1b,
        type_description_1,
        par_number,
        var_bitsize
    );


    // Release cached frame.
    if ( frame_c9140a527390e95583f120e4f5661f1b == cache_frame_c9140a527390e95583f120e4f5661f1b )
    {
        Py_DECREF( frame_c9140a527390e95583f120e4f5661f1b );
    }
    cache_frame_c9140a527390e95583f120e4f5661f1b = NULL;

    assertFrameObject( frame_c9140a527390e95583f120e4f5661f1b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = const_int_pos_10;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_2_get_primality_testing_rounds );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_number );
    Py_DECREF( par_number );
    par_number = NULL;

    CHECK_OBJECT( (PyObject *)var_bitsize );
    Py_DECREF( var_bitsize );
    var_bitsize = NULL;

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

    CHECK_OBJECT( (PyObject *)par_number );
    Py_DECREF( par_number );
    par_number = NULL;

    Py_XDECREF( var_bitsize );
    var_bitsize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_2_get_primality_testing_rounds );
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


static PyObject *impl_rsa$prime$$$function_3_miller_rabin_primality_testing( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *var_d = NULL;
    PyObject *var_r = NULL;
    PyObject *var__ = NULL;
    PyObject *var_a = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__break_indicator = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6cfd94b83cff329aa23bbf085ca7545d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_6cfd94b83cff329aa23bbf085ca7545d = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6cfd94b83cff329aa23bbf085ca7545d, codeobj_6cfd94b83cff329aa23bbf085ca7545d, module_rsa$prime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6cfd94b83cff329aa23bbf085ca7545d = cache_frame_6cfd94b83cff329aa23bbf085ca7545d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6cfd94b83cff329aa23bbf085ca7545d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6cfd94b83cff329aa23bbf085ca7545d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooooo";
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_n );
        tmp_left_name_1 = par_n;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_r == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_r = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_d );
        tmp_left_name_2 = var_d;
        tmp_right_name_2 = const_int_pos_1;
        tmp_operand_name_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        goto loop_end_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_r );
        tmp_left_name_3 = var_r;
        tmp_right_name_3 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_3;
        var_r = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_d );
        tmp_left_name_4 = var_d;
        tmp_right_name_4 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceRshift, &tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_4;
        var_d = tmp_assign_source_4;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_range );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_k );
        tmp_args_element_name_1 = par_k;
        frame_6cfd94b83cff329aa23bbf085ca7545d->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                exception_lineno = 98;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_7;
            Py_INCREF( var__ );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_rsa );

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

            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_randnum );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_randint );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_n );
        tmp_left_name_6 = par_n;
        tmp_right_name_5 = const_int_pos_3;
        tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_6cfd94b83cff329aa23bbf085ca7545d->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_6 = const_int_pos_1;
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_pow );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( var_a );
        tmp_args_element_name_3 = var_a;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_4 = var_d;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        frame_6cfd94b83cff329aa23bbf085ca7545d->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_2 = var_x;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_3 = var_x;
        CHECK_OBJECT( par_n );
        tmp_left_name_7 = par_n;
        tmp_right_name_7 = const_int_pos_1;
        tmp_compexpr_right_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        goto loop_start_2;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_False;
        {
            PyObject *old = tmp_for_loop_2__break_indicator;
            tmp_for_loop_2__break_indicator = tmp_assign_source_10;
            Py_INCREF( tmp_for_loop_2__break_indicator );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_range );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_4 = tmp_mvar_value_3;
        CHECK_OBJECT( var_r );
        tmp_left_name_8 = var_r;
        tmp_right_name_8 = const_int_pos_1;
        tmp_args_element_name_6 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_6cfd94b83cff329aa23bbf085ca7545d->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_value_name_1 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_assign_source_12 == NULL )
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
            exception_lineno = 106;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = exception_keeper_type_1;
        tmp_compexpr_right_4 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = Py_True;
            {
                PyObject *old = tmp_for_loop_2__break_indicator;
                assert( old != NULL );
                tmp_for_loop_2__break_indicator = tmp_assign_source_13;
                Py_INCREF( tmp_for_loop_2__break_indicator );
                Py_DECREF( old );
            }

        }
        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        goto loop_end_3;
        goto branch_end_4;
        branch_no_4:;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        branch_end_4:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_14 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_14;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_pow );
        assert( tmp_called_name_5 != NULL );
        CHECK_OBJECT( var_x );
        tmp_args_element_name_7 = var_x;
        tmp_args_element_name_8 = const_int_pos_2;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_9 = par_n;
        frame_6cfd94b83cff329aa23bbf085ca7545d->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_15;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_5 = var_x;
        tmp_compexpr_right_5 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_4;
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_6 = var_x;
        CHECK_OBJECT( par_n );
        tmp_left_name_9 = par_n;
        tmp_right_name_9 = const_int_pos_1;
        tmp_compexpr_right_6 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
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
        goto loop_end_3;
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__iter_value );
    Py_DECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        int tmp_truth_name_1;
        CHECK_OBJECT( tmp_for_loop_2__break_indicator );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_for_loop_2__break_indicator );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_left_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        branch_no_7:;
    }
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( tmp_for_loop_2__break_indicator );
    tmp_for_loop_2__break_indicator = NULL;

    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__break_indicator );
    tmp_for_loop_2__break_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__break_indicator );
    Py_DECREF( tmp_for_loop_2__break_indicator );
    tmp_for_loop_2__break_indicator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cfd94b83cff329aa23bbf085ca7545d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cfd94b83cff329aa23bbf085ca7545d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cfd94b83cff329aa23bbf085ca7545d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6cfd94b83cff329aa23bbf085ca7545d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6cfd94b83cff329aa23bbf085ca7545d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6cfd94b83cff329aa23bbf085ca7545d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6cfd94b83cff329aa23bbf085ca7545d,
        type_description_1,
        par_n,
        par_k,
        var_d,
        var_r,
        var__,
        var_a,
        var_x
    );


    // Release cached frame.
    if ( frame_6cfd94b83cff329aa23bbf085ca7545d == cache_frame_6cfd94b83cff329aa23bbf085ca7545d )
    {
        Py_DECREF( frame_6cfd94b83cff329aa23bbf085ca7545d );
    }
    cache_frame_6cfd94b83cff329aa23bbf085ca7545d = NULL;

    assertFrameObject( frame_6cfd94b83cff329aa23bbf085ca7545d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_3_miller_rabin_primality_testing );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_3_miller_rabin_primality_testing );
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


static PyObject *impl_rsa$prime$$$function_4_is_prime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_number = python_pars[ 0 ];
    PyObject *var_k = NULL;
    struct Nuitka_FrameObject *frame_e51fb5e7d6c528933f479d8307d88df7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e51fb5e7d6c528933f479d8307d88df7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e51fb5e7d6c528933f479d8307d88df7, codeobj_e51fb5e7d6c528933f479d8307d88df7, module_rsa$prime, sizeof(void *)+sizeof(void *) );
    frame_e51fb5e7d6c528933f479d8307d88df7 = cache_frame_e51fb5e7d6c528933f479d8307d88df7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e51fb5e7d6c528933f479d8307d88df7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e51fb5e7d6c528933f479d8307d88df7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_number );
        tmp_compexpr_left_1 = par_number;
        tmp_compexpr_right_1 = const_int_pos_10;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oo";
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
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_number );
            tmp_compexpr_left_2 = par_number;
            tmp_compexpr_right_2 = PySet_New( const_set_a4a0c129232eb401850c21deefbe9a61 );
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = ( tmp_res == 1 ) ? Py_True : Py_False;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_number );
        tmp_left_name_1 = par_number;
        tmp_right_name_1 = const_int_pos_1;
        tmp_operand_name_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_get_primality_testing_rounds );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_primality_testing_rounds );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_primality_testing_rounds" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_number );
        tmp_args_element_name_1 = par_number;
        frame_e51fb5e7d6c528933f479d8307d88df7->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_k == NULL );
        var_k = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_miller_rabin_primality_testing );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_miller_rabin_primality_testing );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "miller_rabin_primality_testing" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_number );
        tmp_args_element_name_2 = par_number;
        CHECK_OBJECT( var_k );
        tmp_left_name_2 = var_k;
        tmp_right_name_2 = const_int_pos_1;
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e51fb5e7d6c528933f479d8307d88df7->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e51fb5e7d6c528933f479d8307d88df7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e51fb5e7d6c528933f479d8307d88df7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e51fb5e7d6c528933f479d8307d88df7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e51fb5e7d6c528933f479d8307d88df7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e51fb5e7d6c528933f479d8307d88df7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e51fb5e7d6c528933f479d8307d88df7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e51fb5e7d6c528933f479d8307d88df7,
        type_description_1,
        par_number,
        var_k
    );


    // Release cached frame.
    if ( frame_e51fb5e7d6c528933f479d8307d88df7 == cache_frame_e51fb5e7d6c528933f479d8307d88df7 )
    {
        Py_DECREF( frame_e51fb5e7d6c528933f479d8307d88df7 );
    }
    cache_frame_e51fb5e7d6c528933f479d8307d88df7 = NULL;

    assertFrameObject( frame_e51fb5e7d6c528933f479d8307d88df7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_4_is_prime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_number );
    Py_DECREF( par_number );
    par_number = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_number );
    Py_DECREF( par_number );
    par_number = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_4_is_prime );
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


static PyObject *impl_rsa$prime$$$function_5_getprime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nbits = python_pars[ 0 ];
    PyObject *var_integer = NULL;
    struct Nuitka_FrameObject *frame_478318fcac5c8f2bd67df3f98f112778;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_478318fcac5c8f2bd67df3f98f112778 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_478318fcac5c8f2bd67df3f98f112778, codeobj_478318fcac5c8f2bd67df3f98f112778, module_rsa$prime, sizeof(void *)+sizeof(void *) );
    frame_478318fcac5c8f2bd67df3f98f112778 = cache_frame_478318fcac5c8f2bd67df3f98f112778;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_478318fcac5c8f2bd67df3f98f112778 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_478318fcac5c8f2bd67df3f98f112778 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_nbits );
        tmp_compexpr_left_1 = par_nbits;
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_operand_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oo";
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
        {
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 163;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_rsa );

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

            exception_lineno = 166;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_randnum );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_nbits );
        tmp_args_element_name_1 = par_nbits;
        frame_478318fcac5c8f2bd67df3f98f112778->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read_random_odd_int, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_integer;
            var_integer = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_is_prime );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_prime );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_prime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_integer );
        tmp_args_element_name_2 = var_integer;
        frame_478318fcac5c8f2bd67df3f98f112778->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( var_integer );
        tmp_return_value = var_integer;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_478318fcac5c8f2bd67df3f98f112778 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_478318fcac5c8f2bd67df3f98f112778 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_478318fcac5c8f2bd67df3f98f112778 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_478318fcac5c8f2bd67df3f98f112778, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_478318fcac5c8f2bd67df3f98f112778->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_478318fcac5c8f2bd67df3f98f112778, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_478318fcac5c8f2bd67df3f98f112778,
        type_description_1,
        par_nbits,
        var_integer
    );


    // Release cached frame.
    if ( frame_478318fcac5c8f2bd67df3f98f112778 == cache_frame_478318fcac5c8f2bd67df3f98f112778 )
    {
        Py_DECREF( frame_478318fcac5c8f2bd67df3f98f112778 );
    }
    cache_frame_478318fcac5c8f2bd67df3f98f112778 = NULL;

    assertFrameObject( frame_478318fcac5c8f2bd67df3f98f112778 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_5_getprime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

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
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_5_getprime );
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


static PyObject *impl_rsa$prime$$$function_6_are_relatively_prime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_7b1c0a37b31c27fbc7f7849dbf85d500;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7b1c0a37b31c27fbc7f7849dbf85d500 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b1c0a37b31c27fbc7f7849dbf85d500, codeobj_7b1c0a37b31c27fbc7f7849dbf85d500, module_rsa$prime, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b1c0a37b31c27fbc7f7849dbf85d500 = cache_frame_7b1c0a37b31c27fbc7f7849dbf85d500;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b1c0a37b31c27fbc7f7849dbf85d500 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b1c0a37b31c27fbc7f7849dbf85d500 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_gcd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gcd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gcd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 185;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        frame_7b1c0a37b31c27fbc7f7849dbf85d500->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_d );
        tmp_compexpr_left_1 = var_d;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b1c0a37b31c27fbc7f7849dbf85d500 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b1c0a37b31c27fbc7f7849dbf85d500 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b1c0a37b31c27fbc7f7849dbf85d500 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b1c0a37b31c27fbc7f7849dbf85d500, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b1c0a37b31c27fbc7f7849dbf85d500->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b1c0a37b31c27fbc7f7849dbf85d500, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b1c0a37b31c27fbc7f7849dbf85d500,
        type_description_1,
        par_a,
        par_b,
        var_d
    );


    // Release cached frame.
    if ( frame_7b1c0a37b31c27fbc7f7849dbf85d500 == cache_frame_7b1c0a37b31c27fbc7f7849dbf85d500 )
    {
        Py_DECREF( frame_7b1c0a37b31c27fbc7f7849dbf85d500 );
    }
    cache_frame_7b1c0a37b31c27fbc7f7849dbf85d500 = NULL;

    assertFrameObject( frame_7b1c0a37b31c27fbc7f7849dbf85d500 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_6_are_relatively_prime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$prime$$$function_6_are_relatively_prime );
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



static PyObject *MAKE_FUNCTION_rsa$prime$$$function_1_gcd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$prime$$$function_1_gcd,
        const_str_plain_gcd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_155bcbc69117325e545dc77ae3f7231c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$prime,
        const_str_digest_d325934cfb06c3f1d4c050906f5abeff,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$prime$$$function_2_get_primality_testing_rounds(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$prime$$$function_2_get_primality_testing_rounds,
        const_str_plain_get_primality_testing_rounds,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c9140a527390e95583f120e4f5661f1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$prime,
        const_str_digest_fea6f936344b29c785cbc1e3ef13b1df,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$prime$$$function_3_miller_rabin_primality_testing(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$prime$$$function_3_miller_rabin_primality_testing,
        const_str_plain_miller_rabin_primality_testing,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6cfd94b83cff329aa23bbf085ca7545d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$prime,
        const_str_digest_dd3b4864e31c58ed9c0c340f6047f553,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$prime$$$function_4_is_prime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$prime$$$function_4_is_prime,
        const_str_plain_is_prime,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e51fb5e7d6c528933f479d8307d88df7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$prime,
        const_str_digest_7654f750f269b6470d539da073632188,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$prime$$$function_5_getprime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$prime$$$function_5_getprime,
        const_str_plain_getprime,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_478318fcac5c8f2bd67df3f98f112778,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$prime,
        const_str_digest_6e303417bc0ca7734d7ad588f9400e6e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$prime$$$function_6_are_relatively_prime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$prime$$$function_6_are_relatively_prime,
        const_str_plain_are_relatively_prime,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7b1c0a37b31c27fbc7f7849dbf85d500,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$prime,
        const_str_digest_22130f787e2416907883a8c1326e37b7,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$prime =
{
    PyModuleDef_HEAD_INIT,
    "rsa.prime",
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
MOD_ENTRY_DECL(rsa$prime)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$prime)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$prime );
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
    puts("rsa.prime: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.prime: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.prime: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$prime" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$prime = Py_InitModule4(
        "rsa.prime",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$prime = PyModule_Create( &mdef_rsa$prime );
#endif

    moduledict_rsa$prime = MODULE_DICT( module_rsa$prime );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$prime,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$prime,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$prime,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$prime,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$prime );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_eae335f7395ee2b175bb07ef24fa2bea, module_rsa$prime );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b35f4b4e6aec3f6277785f0ff6e31953;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_defb0f06cfb3a4c43a6562f176fa76b5;
        UPDATE_STRING_DICT0( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_f460d88f835722cf71be23eccd2f5326;
        UPDATE_STRING_DICT0( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b35f4b4e6aec3f6277785f0ff6e31953 = MAKE_MODULE_FRAME( codeobj_b35f4b4e6aec3f6277785f0ff6e31953, module_rsa$prime );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b35f4b4e6aec3f6277785f0ff6e31953 );
    assert( Py_REFCNT( frame_b35f4b4e6aec3f6277785f0ff6e31953 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_f460d88f835722cf71be23eccd2f5326;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$prime;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_range_tuple;
        tmp_level_name_1 = const_int_0;
        frame_b35f4b4e6aec3f6277785f0ff6e31953->m_frame.f_lineno = 23;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_range );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_6b3d394b801be02bbc23994592501dc9;
        tmp_globals_name_2 = (PyObject *)moduledict_rsa$prime;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_b35f4b4e6aec3f6277785f0ff6e31953->m_frame.f_lineno = 24;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_rsa, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_38ae76d41c37a561fb493fd3359762a3;
        tmp_globals_name_3 = (PyObject *)moduledict_rsa$prime;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_b35f4b4e6aec3f6277785f0ff6e31953->m_frame.f_lineno = 25;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_rsa, tmp_assign_source_6 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b35f4b4e6aec3f6277785f0ff6e31953 );
#endif
    popFrameStack();

    assertFrameObject( frame_b35f4b4e6aec3f6277785f0ff6e31953 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b35f4b4e6aec3f6277785f0ff6e31953 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b35f4b4e6aec3f6277785f0ff6e31953, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b35f4b4e6aec3f6277785f0ff6e31953->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b35f4b4e6aec3f6277785f0ff6e31953, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = LIST_COPY( const_list_str_plain_getprime_str_plain_are_relatively_prime_list );
        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_rsa$prime$$$function_1_gcd(  );



        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_gcd, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_rsa$prime$$$function_2_get_primality_testing_rounds(  );



        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_get_primality_testing_rounds, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_rsa$prime$$$function_3_miller_rabin_primality_testing(  );



        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_miller_rabin_primality_testing, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_rsa$prime$$$function_4_is_prime(  );



        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_is_prime, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_rsa$prime$$$function_5_getprime(  );



        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_getprime, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_rsa$prime$$$function_6_are_relatively_prime(  );



        UPDATE_STRING_DICT1( moduledict_rsa$prime, (Nuitka_StringObject *)const_str_plain_are_relatively_prime, tmp_assign_source_13 );
    }

    return MOD_RETURN_VALUE( module_rsa$prime );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
