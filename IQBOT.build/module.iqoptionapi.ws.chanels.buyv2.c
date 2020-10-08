/* Generated code for Python module 'iqoptionapi.ws.chanels.buyv2'
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

/* The "_module_iqoptionapi$ws$chanels$buyv2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_iqoptionapi$ws$chanels$buyv2;
PyDictObject *moduledict_iqoptionapi$ws$chanels$buyv2;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_balance_id;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_api;
static PyObject *const_str_digest_57df2be8172a8f07c06b6931b4ce2077;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain_Base_tuple;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_act;
extern PyObject *const_str_plain_timedelta;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_digest_325780f0cf9297388fe79b4f2c7021aa;
static PyObject *const_str_plain_buyV2;
extern PyObject *const_str_plain_turbo;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_487eceb77cd20fdec569ead95b6cf5a5;
extern PyObject *const_int_0;
static PyObject *const_str_digest_9c5ccb041221e95445e800cde32e7a72;
extern PyObject *const_str_plain_direction;
extern PyObject *const_tuple_str_plain_get_expiration_time_tuple;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_4d9c3ed0cddd65fb2e62bdb891d4c6f9;
extern PyObject *const_str_plain_Base;
extern PyObject *const_str_plain_option;
extern PyObject *const_str_plain_send_websocket_request;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_digest_681127b0040c32c62f05144eaaa6930f;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_binary;
extern PyObject *const_str_plain_active;
extern PyObject *const_str_plain_Buyv2;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_c2c057c5e061476beeeff4cc7228a509;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_timesync;
extern PyObject *const_str_plain_profile;
static PyObject *const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_b3f83e8f11e8f27ef577a9e19990f876;
extern PyObject *const_tuple_str_plain_datetime_str_plain_timedelta_tuple;
extern PyObject *const_str_plain_price;
extern PyObject *const_str_plain_duration;
extern PyObject *const_str_digest_56a3cb7c8ab2c404fd4c5feae2340154;
extern PyObject *const_str_plain_server_timestamp;
extern PyObject *const_str_plain_get_expiration_time;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_user_balance_id;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_lower;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_57df2be8172a8f07c06b6931b4ce2077 = UNSTREAM_STRING_ASCII( &constant_bin[ 657894 ], 189, 0 );
    const_str_plain_act = UNSTREAM_STRING_ASCII( &constant_bin[ 1159 ], 3, 1 );
    const_str_plain_buyV2 = UNSTREAM_STRING_ASCII( &constant_bin[ 658083 ], 5, 1 );
    const_str_digest_9c5ccb041221e95445e800cde32e7a72 = UNSTREAM_STRING_ASCII( &constant_bin[ 658088 ], 14, 0 );
    const_str_digest_4d9c3ed0cddd65fb2e62bdb891d4c6f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 658102 ], 37, 0 );
    const_str_digest_c2c057c5e061476beeeff4cc7228a509 = UNSTREAM_STRING_ASCII( &constant_bin[ 658139 ], 59, 0 );
    const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 1, const_str_plain_price ); Py_INCREF( const_str_plain_price );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 2, const_str_plain_active ); Py_INCREF( const_str_plain_active );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 3, const_str_plain_direction ); Py_INCREF( const_str_plain_direction );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 4, const_str_plain_duration ); Py_INCREF( const_str_plain_duration );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 5, const_str_plain_exp ); Py_INCREF( const_str_plain_exp );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 6, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 7, const_str_plain_option ); Py_INCREF( const_str_plain_option );
    PyTuple_SET_ITEM( const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 8, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_b3f83e8f11e8f27ef577a9e19990f876 = UNSTREAM_STRING_ASCII( &constant_bin[ 658198 ], 44, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_iqoptionapi$ws$chanels$buyv2( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_16813a43b75e88f8dda76d39f96c1df3;
static PyCodeObject *codeobj_6eb09e19007d2fa5d5ebb3cbd9ef1264;
static PyCodeObject *codeobj_5b22f468489fe9be2962c7221ec01bf6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c2c057c5e061476beeeff4cc7228a509;
    codeobj_16813a43b75e88f8dda76d39f96c1df3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4d9c3ed0cddd65fb2e62bdb891d4c6f9, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_6eb09e19007d2fa5d5ebb3cbd9ef1264 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Buyv2, 9, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_5b22f468489fe9be2962c7221ec01bf6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 15, const_tuple_9de9e3cf6a8cecdf15d20a7acb680308_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_iqoptionapi$ws$chanels$buyv2$$$function_1___call__(  );


// The module function definitions.
static PyObject *impl_iqoptionapi$ws$chanels$buyv2$$$function_1___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_price = python_pars[ 1 ];
    PyObject *par_active = python_pars[ 2 ];
    PyObject *par_direction = python_pars[ 3 ];
    PyObject *par_duration = python_pars[ 4 ];
    PyObject *var_exp = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_option = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5b22f468489fe9be2962c7221ec01bf6;
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
    static struct Nuitka_FrameObject *cache_frame_5b22f468489fe9be2962c7221ec01bf6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5b22f468489fe9be2962c7221ec01bf6, codeobj_5b22f468489fe9be2962c7221ec01bf6, module_iqoptionapi$ws$chanels$buyv2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5b22f468489fe9be2962c7221ec01bf6 = cache_frame_5b22f468489fe9be2962c7221ec01bf6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5b22f468489fe9be2962c7221ec01bf6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5b22f468489fe9be2962c7221ec01bf6 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_get_expiration_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_expiration_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_expiration_time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_api );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_timesync );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_server_timestamp );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_duration );
        tmp_args_element_name_2 = par_duration;
        frame_5b22f468489fe9be2962c7221ec01bf6->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
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


            type_description_1 = "ooooooooo";
            exception_lineno = 25;
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


            type_description_1 = "ooooooooo";
            exception_lineno = 25;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 25;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 25;
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
        assert( var_exp == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_exp = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_idx == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_idx = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_idx );
        tmp_compexpr_left_1 = var_idx;
        tmp_compexpr_right_1 = const_int_pos_5;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = const_str_plain_turbo;
            assert( var_option == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_option = tmp_assign_source_6;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_plain_binary;
            assert( var_option == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_option = tmp_assign_source_7;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        tmp_dict_key_1 = const_str_plain_price;
        CHECK_OBJECT( par_price );
        tmp_dict_value_1 = par_price;
        tmp_assign_source_8 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_act;
        CHECK_OBJECT( par_active );
        tmp_dict_value_2 = par_active;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_exp;
        CHECK_OBJECT( var_exp );
        tmp_int_arg_2 = var_exp;
        tmp_dict_value_3 = PyNumber_Int( tmp_int_arg_2 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_type;
        CHECK_OBJECT( var_option );
        tmp_dict_value_4 = var_option;
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_direction;
        CHECK_OBJECT( par_direction );
        tmp_called_instance_1 = par_direction;
        frame_5b22f468489fe9be2962c7221ec01bf6->m_frame.f_lineno = 39;
        tmp_dict_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 39;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_user_balance_id;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_api );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_profile );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_balance_id );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_int_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = PyNumber_Int( tmp_int_arg_3 );
        Py_DECREF( tmp_int_arg_3 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_time;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_api );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_timesync );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_server_timestamp );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        assert( var_data == NULL );
        var_data = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_send_websocket_request );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_name );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 44;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_data );
        tmp_args_element_name_4 = var_data;
        frame_5b22f468489fe9be2962c7221ec01bf6->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b22f468489fe9be2962c7221ec01bf6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b22f468489fe9be2962c7221ec01bf6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5b22f468489fe9be2962c7221ec01bf6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5b22f468489fe9be2962c7221ec01bf6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5b22f468489fe9be2962c7221ec01bf6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b22f468489fe9be2962c7221ec01bf6,
        type_description_1,
        par_self,
        par_price,
        par_active,
        par_direction,
        par_duration,
        var_exp,
        var_idx,
        var_option,
        var_data
    );


    // Release cached frame.
    if ( frame_5b22f468489fe9be2962c7221ec01bf6 == cache_frame_5b22f468489fe9be2962c7221ec01bf6 )
    {
        Py_DECREF( frame_5b22f468489fe9be2962c7221ec01bf6 );
    }
    cache_frame_5b22f468489fe9be2962c7221ec01bf6 = NULL;

    assertFrameObject( frame_5b22f468489fe9be2962c7221ec01bf6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buyv2$$$function_1___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_price );
    Py_DECREF( par_price );
    par_price = NULL;

    CHECK_OBJECT( (PyObject *)par_active );
    Py_DECREF( par_active );
    par_active = NULL;

    CHECK_OBJECT( (PyObject *)par_direction );
    Py_DECREF( par_direction );
    par_direction = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    CHECK_OBJECT( (PyObject *)var_exp );
    Py_DECREF( var_exp );
    var_exp = NULL;

    CHECK_OBJECT( (PyObject *)var_idx );
    Py_DECREF( var_idx );
    var_idx = NULL;

    CHECK_OBJECT( (PyObject *)var_option );
    Py_DECREF( var_option );
    var_option = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_price );
    Py_DECREF( par_price );
    par_price = NULL;

    CHECK_OBJECT( (PyObject *)par_active );
    Py_DECREF( par_active );
    par_active = NULL;

    CHECK_OBJECT( (PyObject *)par_direction );
    Py_DECREF( par_direction );
    par_direction = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    Py_XDECREF( var_exp );
    var_exp = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_option );
    var_option = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buyv2$$$function_1___call__ );
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



static PyObject *MAKE_FUNCTION_iqoptionapi$ws$chanels$buyv2$$$function_1___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$ws$chanels$buyv2$$$function_1___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_9c5ccb041221e95445e800cde32e7a72,
#endif
        codeobj_5b22f468489fe9be2962c7221ec01bf6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$ws$chanels$buyv2,
        const_str_digest_57df2be8172a8f07c06b6931b4ce2077,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_iqoptionapi$ws$chanels$buyv2 =
{
    PyModuleDef_HEAD_INIT,
    "iqoptionapi.ws.chanels.buyv2",
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
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$buyv2)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(iqoptionapi$ws$chanels$buyv2)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_iqoptionapi$ws$chanels$buyv2 );
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
    puts("iqoptionapi.ws.chanels.buyv2: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.ws.chanels.buyv2: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.ws.chanels.buyv2: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initiqoptionapi$ws$chanels$buyv2" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_iqoptionapi$ws$chanels$buyv2 = Py_InitModule4(
        "iqoptionapi.ws.chanels.buyv2",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_iqoptionapi$ws$chanels$buyv2 = PyModule_Create( &mdef_iqoptionapi$ws$chanels$buyv2 );
#endif

    moduledict_iqoptionapi$ws$chanels$buyv2 = MODULE_DICT( module_iqoptionapi$ws$chanels$buyv2 );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_iqoptionapi$ws$chanels$buyv2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_iqoptionapi$ws$chanels$buyv2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$ws$chanels$buyv2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$ws$chanels$buyv2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_iqoptionapi$ws$chanels$buyv2 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_56a3cb7c8ab2c404fd4c5feae2340154, module_iqoptionapi$ws$chanels$buyv2 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_16813a43b75e88f8dda76d39f96c1df3;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_iqoptionapi$ws$chanels$buyv2_9 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_b3f83e8f11e8f27ef577a9e19990f876;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_c2c057c5e061476beeeff4cc7228a509;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_16813a43b75e88f8dda76d39f96c1df3 = MAKE_MODULE_FRAME( codeobj_16813a43b75e88f8dda76d39f96c1df3, module_iqoptionapi$ws$chanels$buyv2 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_16813a43b75e88f8dda76d39f96c1df3 );
    assert( Py_REFCNT( frame_16813a43b75e88f8dda76d39f96c1df3 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_c2c057c5e061476beeeff4cc7228a509;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_datetime;
        tmp_globals_name_1 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buyv2;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_16813a43b75e88f8dda76d39f96c1df3->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buyv2;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_16813a43b75e88f8dda76d39f96c1df3->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_487eceb77cd20fdec569ead95b6cf5a5;
        tmp_globals_name_3 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buyv2;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_Base_tuple;
        tmp_level_name_3 = const_int_0;
        frame_16813a43b75e88f8dda76d39f96c1df3->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Base );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_Base, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_logging;
        tmp_globals_name_4 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buyv2;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_16813a43b75e88f8dda76d39f96c1df3->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_681127b0040c32c62f05144eaaa6930f;
        tmp_globals_name_5 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buyv2;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_get_expiration_time_tuple;
        tmp_level_name_5 = const_int_0;
        frame_16813a43b75e88f8dda76d39f96c1df3->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_get_expiration_time );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_get_expiration_time, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_datetime;
        tmp_globals_name_6 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buyv2;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_datetime_str_plain_timedelta_tuple;
        tmp_level_name_6 = const_int_0;
        frame_16813a43b75e88f8dda76d39f96c1df3->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_datetime );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_timedelta );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_11 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_Base );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Base );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Base" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 9;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_12 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 9;

            goto try_except_handler_2;
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


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
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


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
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


            exception_lineno = 9;

            goto try_except_handler_2;
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


            exception_lineno = 9;

            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain_Buyv2;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_16813a43b75e88f8dda76d39f96c1df3->m_frame.f_lineno = 9;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
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


                exception_lineno = 9;

                goto try_except_handler_2;
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
                PyObject *tmp_tuple_element_3;
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
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 9;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 9;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 9;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 9;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_iqoptionapi$ws$chanels$buyv2_9 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_56a3cb7c8ab2c404fd4c5feae2340154;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buyv2_9, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_325780f0cf9297388fe79b4f2c7021aa;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buyv2_9, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_Buyv2;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buyv2_9, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2, codeobj_6eb09e19007d2fa5d5ebb3cbd9ef1264, module_iqoptionapi$ws$chanels$buyv2, sizeof(void *) );
        frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 = cache_frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_buyV2;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buyv2_9, const_str_plain_name, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_iqoptionapi$ws$chanels$buyv2$$$function_1___call__(  );



        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buyv2_9, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 == cache_frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 )
        {
            Py_DECREF( frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 );
        }
        cache_frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 = NULL;

        assertFrameObject( frame_6eb09e19007d2fa5d5ebb3cbd9ef1264_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto try_except_handler_4;
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
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buyv2_9, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Buyv2;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_iqoptionapi$ws$chanels$buyv2_9;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_16813a43b75e88f8dda76d39f96c1df3->m_frame.f_lineno = 9;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_18 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buyv2 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_iqoptionapi$ws$chanels$buyv2_9 );
        locals_iqoptionapi$ws$chanels$buyv2_9 = NULL;
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

        Py_DECREF( locals_iqoptionapi$ws$chanels$buyv2_9 );
        locals_iqoptionapi$ws$chanels$buyv2_9 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buyv2 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buyv2 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 9;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buyv2, (Nuitka_StringObject *)const_str_plain_Buyv2, tmp_assign_source_18 );
    }
    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_1__bases_orig );
    tmp_class_creation_1__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16813a43b75e88f8dda76d39f96c1df3 );
#endif
    popFrameStack();

    assertFrameObject( frame_16813a43b75e88f8dda76d39f96c1df3 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16813a43b75e88f8dda76d39f96c1df3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_16813a43b75e88f8dda76d39f96c1df3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_16813a43b75e88f8dda76d39f96c1df3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_16813a43b75e88f8dda76d39f96c1df3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases_orig );
    Py_DECREF( tmp_class_creation_1__bases_orig );
    tmp_class_creation_1__bases_orig = NULL;

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


    return MOD_RETURN_VALUE( module_iqoptionapi$ws$chanels$buyv2 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
