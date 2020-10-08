/* Generated code for Python module 'iqoptionapi.ws.chanels.buy_place_order_temp'
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

/* The "_module_iqoptionapi$ws$chanels$buy_place_order_temp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_iqoptionapi$ws$chanels$buy_place_order_temp;
PyDictObject *moduledict_iqoptionapi$ws$chanels$buy_place_order_temp;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_balance_id;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_use_token_for_commission;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_instrument_id;
extern PyObject *const_str_digest_7745ba7448e16edaf7df759cb7f3e5e4;
static PyObject *const_str_digest_c4c7deadc3681f6b624ca73034108941;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_sendMessage;
extern PyObject *const_tuple_str_plain_Base_tuple;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_limit_price;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_487eceb77cd20fdec569ead95b6cf5a5;
static PyObject *const_str_digest_593dd31029ad23a666ebb986d8545c73;
extern PyObject *const_str_plain_auto_margin_call;
static PyObject *const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple;
extern PyObject *const_str_plain_take_profit_value;
extern PyObject *const_int_0;
static PyObject *const_str_plain_client_platform_id;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_Base;
extern PyObject *const_str_plain_send_websocket_request;
extern PyObject *const_str_plain_stop_lose_kind;
extern PyObject *const_str_plain_stop_lose_value;
extern PyObject *const_str_plain_Buy_place_order_temp;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_ec008b11def3fee25602c86081895340;
extern PyObject *const_str_plain_stop_price;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_instrument_type;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_amount;
extern PyObject *const_str_plain_take_profit_kind;
static PyObject *const_str_digest_3fa55c32b6ec96c758fc809489b94bfe;
extern PyObject *const_str_plain_version;
static PyObject *const_str_digest_fa934bb616abc422253c699b2fa63420;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_profile;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_9;
extern PyObject *const_str_plain_side;
extern PyObject *const_str_plain_use_trail_stop;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_user_balance_id;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_leverage;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_c4c7deadc3681f6b624ca73034108941 = UNSTREAM_STRING_ASCII( &constant_bin[ 657705 ], 29, 0 );
    const_str_digest_593dd31029ad23a666ebb986d8545c73 = UNSTREAM_STRING_ASCII( &constant_bin[ 657734 ], 52, 0 );
    const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 1, const_str_plain_instrument_type ); Py_INCREF( const_str_plain_instrument_type );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 2, const_str_plain_instrument_id ); Py_INCREF( const_str_plain_instrument_id );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 3, const_str_plain_side ); Py_INCREF( const_str_plain_side );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 4, const_str_plain_amount ); Py_INCREF( const_str_plain_amount );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 5, const_str_plain_leverage ); Py_INCREF( const_str_plain_leverage );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 6, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 7, const_str_plain_limit_price ); Py_INCREF( const_str_plain_limit_price );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 8, const_str_plain_stop_price ); Py_INCREF( const_str_plain_stop_price );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 9, const_str_plain_stop_lose_kind ); Py_INCREF( const_str_plain_stop_lose_kind );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 10, const_str_plain_stop_lose_value ); Py_INCREF( const_str_plain_stop_lose_value );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 11, const_str_plain_take_profit_kind ); Py_INCREF( const_str_plain_take_profit_kind );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 12, const_str_plain_take_profit_value ); Py_INCREF( const_str_plain_take_profit_value );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 13, const_str_plain_use_trail_stop ); Py_INCREF( const_str_plain_use_trail_stop );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 14, const_str_plain_auto_margin_call ); Py_INCREF( const_str_plain_auto_margin_call );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 15, const_str_plain_use_token_for_commission ); Py_INCREF( const_str_plain_use_token_for_commission );
    PyTuple_SET_ITEM( const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 16, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_plain_client_platform_id = UNSTREAM_STRING_ASCII( &constant_bin[ 657786 ], 18, 1 );
    const_str_digest_3fa55c32b6ec96c758fc809489b94bfe = UNSTREAM_STRING_ASCII( &constant_bin[ 657804 ], 16, 0 );
    const_str_digest_fa934bb616abc422253c699b2fa63420 = UNSTREAM_STRING_ASCII( &constant_bin[ 657820 ], 74, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_iqoptionapi$ws$chanels$buy_place_order_temp( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_67a1a4c5df6a86a7ccb1bf20e9aed384;
static PyCodeObject *codeobj_875dc1f639e722068e33bf0b810170b3;
static PyCodeObject *codeobj_2d2494a9dac8dc7678472b26079d182e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_fa934bb616abc422253c699b2fa63420;
    codeobj_67a1a4c5df6a86a7ccb1bf20e9aed384 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_593dd31029ad23a666ebb986d8545c73, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_875dc1f639e722068e33bf0b810170b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Buy_place_order_temp, 7, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2d2494a9dac8dc7678472b26079d182e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 9, const_tuple_bcf9774a1633e0cd62ccf14ce998b2ae_tuple, 16, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_iqoptionapi$ws$chanels$buy_place_order_temp$$$function_1___call__(  );


// The module function definitions.
static PyObject *impl_iqoptionapi$ws$chanels$buy_place_order_temp$$$function_1___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_instrument_type = python_pars[ 1 ];
    PyObject *par_instrument_id = python_pars[ 2 ];
    PyObject *par_side = python_pars[ 3 ];
    PyObject *par_amount = python_pars[ 4 ];
    PyObject *par_leverage = python_pars[ 5 ];
    PyObject *par_type = python_pars[ 6 ];
    PyObject *par_limit_price = python_pars[ 7 ];
    PyObject *par_stop_price = python_pars[ 8 ];
    PyObject *par_stop_lose_kind = python_pars[ 9 ];
    PyObject *par_stop_lose_value = python_pars[ 10 ];
    PyObject *par_take_profit_kind = python_pars[ 11 ];
    PyObject *par_take_profit_value = python_pars[ 12 ];
    PyObject *par_use_trail_stop = python_pars[ 13 ];
    PyObject *par_auto_margin_call = python_pars[ 14 ];
    PyObject *par_use_token_for_commission = python_pars[ 15 ];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_2d2494a9dac8dc7678472b26079d182e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d2494a9dac8dc7678472b26079d182e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d2494a9dac8dc7678472b26079d182e, codeobj_2d2494a9dac8dc7678472b26079d182e, module_iqoptionapi$ws$chanels$buy_place_order_temp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d2494a9dac8dc7678472b26079d182e = cache_frame_2d2494a9dac8dc7678472b26079d182e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d2494a9dac8dc7678472b26079d182e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d2494a9dac8dc7678472b26079d182e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_value_name_1;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_value_name_2;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_value_name_3;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_dict_key_1 = const_str_plain_name;
        tmp_dict_value_1 = const_str_digest_3fa55c32b6ec96c758fc809489b94bfe;
        tmp_assign_source_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_version;
        tmp_dict_value_2 = const_str_digest_ec008b11def3fee25602c86081895340;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_body;
        tmp_dict_key_4 = const_str_plain_instrument_type;
        CHECK_OBJECT( par_instrument_type );
        tmp_unicode_arg_1 = par_instrument_type;
        tmp_dict_value_4 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 23;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = _PyDict_NewPresized( 17 );
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_instrument_id;
        CHECK_OBJECT( par_instrument_id );
        tmp_unicode_arg_2 = par_instrument_id;
        tmp_dict_value_5 = PyObject_Unicode( tmp_unicode_arg_2 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 24;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_side;
        CHECK_OBJECT( par_side );
        tmp_unicode_arg_3 = par_side;
        tmp_dict_value_6 = PyObject_Unicode( tmp_unicode_arg_3 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 25;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_amount;
        CHECK_OBJECT( par_amount );
        tmp_float_arg_1 = par_amount;
        tmp_dict_value_7 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_leverage;
        CHECK_OBJECT( par_leverage );
        tmp_int_arg_1 = par_leverage;
        tmp_dict_value_8 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_type;
        CHECK_OBJECT( par_type );
        tmp_dict_value_9 = par_type;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_limit_price;
        CHECK_OBJECT( par_limit_price );
        tmp_dict_value_10 = par_limit_price;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_stop_price;
        CHECK_OBJECT( par_stop_price );
        tmp_dict_value_11 = par_stop_price;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_stop_lose_kind;
        CHECK_OBJECT( par_stop_lose_kind );
        tmp_dict_value_12 = par_stop_lose_kind;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_13 = const_str_plain_stop_lose_value;
        CHECK_OBJECT( par_stop_lose_value );
        tmp_dict_value_13 = par_stop_lose_value;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_14 = const_str_plain_take_profit_kind;
        CHECK_OBJECT( par_take_profit_kind );
        tmp_dict_value_14 = par_take_profit_kind;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_14, tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_15 = const_str_plain_take_profit_value;
        CHECK_OBJECT( par_take_profit_value );
        tmp_dict_value_15 = par_take_profit_value;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_15, tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_16 = const_str_plain_use_trail_stop;
        CHECK_OBJECT( par_use_trail_stop );
        tmp_value_name_1 = par_use_trail_stop;
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_16 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_16, tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_17 = const_str_plain_auto_margin_call;
        CHECK_OBJECT( par_auto_margin_call );
        tmp_value_name_2 = par_auto_margin_call;
        tmp_res = CHECK_IF_TRUE( tmp_value_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_17 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_17, tmp_dict_value_17 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_18 = const_str_plain_use_token_for_commission;
        CHECK_OBJECT( par_use_token_for_commission );
        tmp_value_name_3 = par_use_token_for_commission;
        tmp_res = CHECK_IF_TRUE( tmp_value_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_18 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_18, tmp_dict_value_18 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_19 = const_str_plain_user_balance_id;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_api );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_profile );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_balance_id );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_int_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_19 = PyNumber_Int( tmp_int_arg_2 );
        Py_DECREF( tmp_int_arg_2 );
        if ( tmp_dict_value_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_19, tmp_dict_value_19 );
        Py_DECREF( tmp_dict_value_19 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_20 = const_str_plain_client_platform_id;
        tmp_dict_value_20 = const_str_plain_9;
        tmp_res = PyDict_SetItem( tmp_dict_value_3, tmp_dict_key_20, tmp_dict_value_20 );
        assert( !(tmp_res != 0) );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        assert( var_data == NULL );
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_send_websocket_request );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_data );
        tmp_args_element_name_2 = var_data;
        frame_2d2494a9dac8dc7678472b26079d182e->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d2494a9dac8dc7678472b26079d182e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d2494a9dac8dc7678472b26079d182e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d2494a9dac8dc7678472b26079d182e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d2494a9dac8dc7678472b26079d182e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d2494a9dac8dc7678472b26079d182e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d2494a9dac8dc7678472b26079d182e,
        type_description_1,
        par_self,
        par_instrument_type,
        par_instrument_id,
        par_side,
        par_amount,
        par_leverage,
        par_type,
        par_limit_price,
        par_stop_price,
        par_stop_lose_kind,
        par_stop_lose_value,
        par_take_profit_kind,
        par_take_profit_value,
        par_use_trail_stop,
        par_auto_margin_call,
        par_use_token_for_commission,
        var_data
    );


    // Release cached frame.
    if ( frame_2d2494a9dac8dc7678472b26079d182e == cache_frame_2d2494a9dac8dc7678472b26079d182e )
    {
        Py_DECREF( frame_2d2494a9dac8dc7678472b26079d182e );
    }
    cache_frame_2d2494a9dac8dc7678472b26079d182e = NULL;

    assertFrameObject( frame_2d2494a9dac8dc7678472b26079d182e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buy_place_order_temp$$$function_1___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_instrument_type );
    Py_DECREF( par_instrument_type );
    par_instrument_type = NULL;

    CHECK_OBJECT( (PyObject *)par_instrument_id );
    Py_DECREF( par_instrument_id );
    par_instrument_id = NULL;

    CHECK_OBJECT( (PyObject *)par_side );
    Py_DECREF( par_side );
    par_side = NULL;

    CHECK_OBJECT( (PyObject *)par_amount );
    Py_DECREF( par_amount );
    par_amount = NULL;

    CHECK_OBJECT( (PyObject *)par_leverage );
    Py_DECREF( par_leverage );
    par_leverage = NULL;

    CHECK_OBJECT( (PyObject *)par_type );
    Py_DECREF( par_type );
    par_type = NULL;

    CHECK_OBJECT( (PyObject *)par_limit_price );
    Py_DECREF( par_limit_price );
    par_limit_price = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_price );
    Py_DECREF( par_stop_price );
    par_stop_price = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_lose_kind );
    Py_DECREF( par_stop_lose_kind );
    par_stop_lose_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_lose_value );
    Py_DECREF( par_stop_lose_value );
    par_stop_lose_value = NULL;

    CHECK_OBJECT( (PyObject *)par_take_profit_kind );
    Py_DECREF( par_take_profit_kind );
    par_take_profit_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_take_profit_value );
    Py_DECREF( par_take_profit_value );
    par_take_profit_value = NULL;

    CHECK_OBJECT( (PyObject *)par_use_trail_stop );
    Py_DECREF( par_use_trail_stop );
    par_use_trail_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_auto_margin_call );
    Py_DECREF( par_auto_margin_call );
    par_auto_margin_call = NULL;

    CHECK_OBJECT( (PyObject *)par_use_token_for_commission );
    Py_DECREF( par_use_token_for_commission );
    par_use_token_for_commission = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_instrument_type );
    Py_DECREF( par_instrument_type );
    par_instrument_type = NULL;

    CHECK_OBJECT( (PyObject *)par_instrument_id );
    Py_DECREF( par_instrument_id );
    par_instrument_id = NULL;

    CHECK_OBJECT( (PyObject *)par_side );
    Py_DECREF( par_side );
    par_side = NULL;

    CHECK_OBJECT( (PyObject *)par_amount );
    Py_DECREF( par_amount );
    par_amount = NULL;

    CHECK_OBJECT( (PyObject *)par_leverage );
    Py_DECREF( par_leverage );
    par_leverage = NULL;

    CHECK_OBJECT( (PyObject *)par_type );
    Py_DECREF( par_type );
    par_type = NULL;

    CHECK_OBJECT( (PyObject *)par_limit_price );
    Py_DECREF( par_limit_price );
    par_limit_price = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_price );
    Py_DECREF( par_stop_price );
    par_stop_price = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_lose_kind );
    Py_DECREF( par_stop_lose_kind );
    par_stop_lose_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_stop_lose_value );
    Py_DECREF( par_stop_lose_value );
    par_stop_lose_value = NULL;

    CHECK_OBJECT( (PyObject *)par_take_profit_kind );
    Py_DECREF( par_take_profit_kind );
    par_take_profit_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_take_profit_value );
    Py_DECREF( par_take_profit_value );
    par_take_profit_value = NULL;

    CHECK_OBJECT( (PyObject *)par_use_trail_stop );
    Py_DECREF( par_use_trail_stop );
    par_use_trail_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_auto_margin_call );
    Py_DECREF( par_auto_margin_call );
    par_auto_margin_call = NULL;

    CHECK_OBJECT( (PyObject *)par_use_token_for_commission );
    Py_DECREF( par_use_token_for_commission );
    par_use_token_for_commission = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buy_place_order_temp$$$function_1___call__ );
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



static PyObject *MAKE_FUNCTION_iqoptionapi$ws$chanels$buy_place_order_temp$$$function_1___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$ws$chanels$buy_place_order_temp$$$function_1___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_c4c7deadc3681f6b624ca73034108941,
#endif
        codeobj_2d2494a9dac8dc7678472b26079d182e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$ws$chanels$buy_place_order_temp,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_iqoptionapi$ws$chanels$buy_place_order_temp =
{
    PyModuleDef_HEAD_INIT,
    "iqoptionapi.ws.chanels.buy_place_order_temp",
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
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$buy_place_order_temp)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(iqoptionapi$ws$chanels$buy_place_order_temp)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_iqoptionapi$ws$chanels$buy_place_order_temp );
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
    puts("iqoptionapi.ws.chanels.buy_place_order_temp: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.ws.chanels.buy_place_order_temp: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.ws.chanels.buy_place_order_temp: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initiqoptionapi$ws$chanels$buy_place_order_temp" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_iqoptionapi$ws$chanels$buy_place_order_temp = Py_InitModule4(
        "iqoptionapi.ws.chanels.buy_place_order_temp",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_iqoptionapi$ws$chanels$buy_place_order_temp = PyModule_Create( &mdef_iqoptionapi$ws$chanels$buy_place_order_temp );
#endif

    moduledict_iqoptionapi$ws$chanels$buy_place_order_temp = MODULE_DICT( module_iqoptionapi$ws$chanels$buy_place_order_temp );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_iqoptionapi$ws$chanels$buy_place_order_temp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_iqoptionapi$ws$chanels$buy_place_order_temp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$ws$chanels$buy_place_order_temp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$ws$chanels$buy_place_order_temp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_iqoptionapi$ws$chanels$buy_place_order_temp );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_7745ba7448e16edaf7df759cb7f3e5e4, module_iqoptionapi$ws$chanels$buy_place_order_temp );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_67a1a4c5df6a86a7ccb1bf20e9aed384;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_iqoptionapi$ws$chanels$buy_place_order_temp_7 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_875dc1f639e722068e33bf0b810170b3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_875dc1f639e722068e33bf0b810170b3_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_fa934bb616abc422253c699b2fa63420;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_67a1a4c5df6a86a7ccb1bf20e9aed384 = MAKE_MODULE_FRAME( codeobj_67a1a4c5df6a86a7ccb1bf20e9aed384, module_iqoptionapi$ws$chanels$buy_place_order_temp );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_67a1a4c5df6a86a7ccb1bf20e9aed384 );
    assert( Py_REFCNT( frame_67a1a4c5df6a86a7ccb1bf20e9aed384 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_fa934bb616abc422253c699b2fa63420;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_datetime;
        tmp_globals_name_1 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buy_place_order_temp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_67a1a4c5df6a86a7ccb1bf20e9aed384->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buy_place_order_temp;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_67a1a4c5df6a86a7ccb1bf20e9aed384->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
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
        tmp_globals_name_3 = (PyObject *)moduledict_iqoptionapi$ws$chanels$buy_place_order_temp;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_Base_tuple;
        tmp_level_name_3 = const_int_0;
        frame_67a1a4c5df6a86a7ccb1bf20e9aed384->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Base );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain_Base, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain_Base );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Base );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_7 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
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


            exception_lineno = 7;

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


            exception_lineno = 7;

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


            exception_lineno = 7;

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


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

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
        tmp_assign_source_10 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
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


            exception_lineno = 7;

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


            exception_lineno = 7;

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
            PyObject *tmp_assign_source_11;
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


                exception_lineno = 7;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_Buy_place_order_temp;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_67a1a4c5df6a86a7ccb1bf20e9aed384->m_frame.f_lineno = 7;
            tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_11;
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


                exception_lineno = 7;

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


                    exception_lineno = 7;

                    goto try_except_handler_1;
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

                    exception_lineno = 7;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 7;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 7;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_12;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_iqoptionapi$ws$chanels$buy_place_order_temp_7 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_7745ba7448e16edaf7df759cb7f3e5e4;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buy_place_order_temp_7, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_Buy_place_order_temp;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buy_place_order_temp_7, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_875dc1f639e722068e33bf0b810170b3_2, codeobj_875dc1f639e722068e33bf0b810170b3, module_iqoptionapi$ws$chanels$buy_place_order_temp, sizeof(void *) );
        frame_875dc1f639e722068e33bf0b810170b3_2 = cache_frame_875dc1f639e722068e33bf0b810170b3_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_875dc1f639e722068e33bf0b810170b3_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_875dc1f639e722068e33bf0b810170b3_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_sendMessage;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buy_place_order_temp_7, const_str_plain_name, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_iqoptionapi$ws$chanels$buy_place_order_temp$$$function_1___call__(  );



        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buy_place_order_temp_7, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_875dc1f639e722068e33bf0b810170b3_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_875dc1f639e722068e33bf0b810170b3_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_875dc1f639e722068e33bf0b810170b3_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_875dc1f639e722068e33bf0b810170b3_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_875dc1f639e722068e33bf0b810170b3_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_875dc1f639e722068e33bf0b810170b3_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_875dc1f639e722068e33bf0b810170b3_2 == cache_frame_875dc1f639e722068e33bf0b810170b3_2 )
        {
            Py_DECREF( frame_875dc1f639e722068e33bf0b810170b3_2 );
        }
        cache_frame_875dc1f639e722068e33bf0b810170b3_2 = NULL;

        assertFrameObject( frame_875dc1f639e722068e33bf0b810170b3_2 );

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
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

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
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$buy_place_order_temp_7, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Buy_place_order_temp;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_iqoptionapi$ws$chanels$buy_place_order_temp_7;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_67a1a4c5df6a86a7ccb1bf20e9aed384->m_frame.f_lineno = 7;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_13 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buy_place_order_temp );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_iqoptionapi$ws$chanels$buy_place_order_temp_7 );
        locals_iqoptionapi$ws$chanels$buy_place_order_temp_7 = NULL;
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

        Py_DECREF( locals_iqoptionapi$ws$chanels$buy_place_order_temp_7 );
        locals_iqoptionapi$ws$chanels$buy_place_order_temp_7 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buy_place_order_temp );
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
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$buy_place_order_temp );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 7;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$buy_place_order_temp, (Nuitka_StringObject *)const_str_plain_Buy_place_order_temp, tmp_assign_source_13 );
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases_orig );
    Py_DECREF( tmp_class_creation_1__bases_orig );
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a1a4c5df6a86a7ccb1bf20e9aed384 );
#endif
    popFrameStack();

    assertFrameObject( frame_67a1a4c5df6a86a7ccb1bf20e9aed384 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a1a4c5df6a86a7ccb1bf20e9aed384 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67a1a4c5df6a86a7ccb1bf20e9aed384, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67a1a4c5df6a86a7ccb1bf20e9aed384->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67a1a4c5df6a86a7ccb1bf20e9aed384, exception_lineno );
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


    return MOD_RETURN_VALUE( module_iqoptionapi$ws$chanels$buy_place_order_temp );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
