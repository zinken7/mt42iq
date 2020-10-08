/* Generated code for Python module 'numpy.lib.scimath'
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

/* The "_module_numpy$lib$scimath" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$scimath;
PyDictObject *moduledict_numpy$lib$scimath;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain__fix_real_abs_gt_1;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_digest_67205772204d1e33862eb50e826ab1cb;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_logn;
static PyObject *const_str_digest_1904d1ccb55bb577a382f57b6efc9580;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_digest_6cd9f1ac4783293caff8cedee777621e;
extern PyObject *const_str_plain_single;
static PyObject *const_str_digest_cddd7f5fabf41633d87cad35c47da579;
static PyObject *const_str_digest_5558fa799cc4c67d8dd4b124742ec2df;
extern PyObject *const_str_plain_astype;
extern PyObject *const_tuple_str_plain_n_str_plain_x_tuple;
extern PyObject *const_str_plain_log10;
static PyObject *const_str_plain__fix_real_lt_zero;
static PyObject *const_str_digest_6a5f4d1812a491b18b53912d768826ab;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_dc37e4ecd94e88344e5840c9f9787d03;
extern PyObject *const_str_plain_numeric;
static PyObject *const_str_digest_3e3b043d981c43f5e896b7870fe309e7;
extern PyObject *const_str_plain_csingle;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_log2;
static PyObject *const_tuple_str_plain_asarray_str_plain_any_tuple;
static PyObject *const_str_plain__fix_int_lt_zero;
static PyObject *const_str_plain__ln2;
extern PyObject *const_str_plain_n;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_p;
extern PyObject *const_float_2_0;
static PyObject *const_str_digest_3ed4b3d65418a4f502eb6e707ba822ac;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_tuple_str_plain_arr_tuple;
extern PyObject *const_str_plain_numerictypes;
extern PyObject *const_str_plain_power;
static PyObject *const_str_plain__power_dispatcher;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_tuple_str_plain_array_function_dispatch_tuple;
static PyObject *const_str_digest_77205a64309c60a3e7cce37eb09ae6b8;
static PyObject *const_str_plain__logn_dispatcher;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_713bebbe0aba5d23089fff81b207e0c5;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_44d26da71e44d34fbcb0a1b68b156525;
extern PyObject *const_str_plain_ubyte;
extern PyObject *const_int_0;
static PyObject *const_str_digest_02ed944594eda80425c47a90388357aa;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain__tocomplex;
extern PyObject *const_str_digest_f06b0863ac057f993e0b6697d72eaf86;
extern PyObject *const_str_plain_type;
static PyObject *const_list_3389953945577137c2ed310e42d76532_list;
static PyObject *const_tuple_str_plain_isreal_tuple;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_63da9d39ac5b88c6be7daeda5efba743;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_ushort;
extern PyObject *const_str_plain_array_function_dispatch;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_arctanh;
extern PyObject *const_str_plain_isreal;
extern PyObject *const_str_plain_short;
static PyObject *const_tuple_float_2_0_tuple;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_digest_bfda669d317818c402e6d2f06e045736;
extern PyObject *const_str_plain_byte;
extern PyObject *const_str_plain_arcsin;
extern PyObject *const_str_plain__unary_dispatcher;
extern PyObject *const_str_plain_nx;
static PyObject *const_str_digest_92b65fa26f09e66fa2cdf001092bd047;
extern PyObject *const_str_digest_3ebbb82d9800d0665e0803be07081408;
static PyObject *const_str_digest_3eca374da455ac1a28d5ad0b778e7fa3;
static PyObject *const_str_digest_c03a8691a6fa92b092bf568125a7c69b;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_str_plain_x_str_plain_p_tuple;
extern PyObject *const_str_plain_cdouble;
extern PyObject *const_str_plain_arccos;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__fix_real_abs_gt_1 = UNSTREAM_STRING_ASCII( &constant_bin[ 1760048 ], 18, 1 );
    const_str_plain_logn = UNSTREAM_STRING_ASCII( &constant_bin[ 1760066 ], 4, 1 );
    const_str_digest_1904d1ccb55bb577a382f57b6efc9580 = UNSTREAM_STRING_ASCII( &constant_bin[ 1760070 ], 1201, 0 );
    const_str_digest_cddd7f5fabf41633d87cad35c47da579 = UNSTREAM_STRING_ASCII( &constant_bin[ 1761271 ], 26, 0 );
    const_str_digest_5558fa799cc4c67d8dd4b124742ec2df = UNSTREAM_STRING_ASCII( &constant_bin[ 1761297 ], 400, 0 );
    const_str_plain__fix_real_lt_zero = UNSTREAM_STRING_ASCII( &constant_bin[ 1761569 ], 17, 1 );
    const_str_digest_6a5f4d1812a491b18b53912d768826ab = UNSTREAM_STRING_ASCII( &constant_bin[ 1761697 ], 1253, 0 );
    const_str_digest_dc37e4ecd94e88344e5840c9f9787d03 = UNSTREAM_STRING_ASCII( &constant_bin[ 1762950 ], 1178, 0 );
    const_str_digest_3e3b043d981c43f5e896b7870fe309e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 1764128 ], 771, 0 );
    const_tuple_str_plain_asarray_str_plain_any_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_asarray_str_plain_any_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_str_plain_asarray_str_plain_any_tuple, 1, const_str_plain_any ); Py_INCREF( const_str_plain_any );
    const_str_plain__fix_int_lt_zero = UNSTREAM_STRING_ASCII( &constant_bin[ 1764899 ], 16, 1 );
    const_str_plain__ln2 = UNSTREAM_STRING_ASCII( &constant_bin[ 1764915 ], 4, 1 );
    const_str_digest_3ed4b3d65418a4f502eb6e707ba822ac = UNSTREAM_STRING_ASCII( &constant_bin[ 1764919 ], 1375, 0 );
    const_str_plain__power_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1766294 ], 17, 1 );
    const_str_digest_77205a64309c60a3e7cce37eb09ae6b8 = UNSTREAM_STRING_ASCII( &constant_bin[ 1766311 ], 961, 0 );
    const_str_plain__logn_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1767272 ], 16, 1 );
    const_str_digest_713bebbe0aba5d23089fff81b207e0c5 = UNSTREAM_STRING_ASCII( &constant_bin[ 1767288 ], 48, 0 );
    const_str_digest_44d26da71e44d34fbcb0a1b68b156525 = UNSTREAM_STRING_ASCII( &constant_bin[ 1767336 ], 388, 0 );
    const_str_digest_02ed944594eda80425c47a90388357aa = UNSTREAM_STRING_ASCII( &constant_bin[ 1767724 ], 580, 0 );
    const_str_plain__tocomplex = UNSTREAM_STRING_ASCII( &constant_bin[ 1765493 ], 10, 1 );
    const_list_3389953945577137c2ed310e42d76532_list = PyList_New( 9 );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 0, const_str_plain_sqrt ); Py_INCREF( const_str_plain_sqrt );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 1, const_str_plain_log ); Py_INCREF( const_str_plain_log );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 2, const_str_plain_log2 ); Py_INCREF( const_str_plain_log2 );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 3, const_str_plain_logn ); Py_INCREF( const_str_plain_logn );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 4, const_str_plain_log10 ); Py_INCREF( const_str_plain_log10 );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 5, const_str_plain_power ); Py_INCREF( const_str_plain_power );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 6, const_str_plain_arccos ); Py_INCREF( const_str_plain_arccos );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 7, const_str_plain_arcsin ); Py_INCREF( const_str_plain_arcsin );
    PyList_SET_ITEM( const_list_3389953945577137c2ed310e42d76532_list, 8, const_str_plain_arctanh ); Py_INCREF( const_str_plain_arctanh );
    const_tuple_str_plain_isreal_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isreal_tuple, 0, const_str_plain_isreal ); Py_INCREF( const_str_plain_isreal );
    const_str_digest_63da9d39ac5b88c6be7daeda5efba743 = UNSTREAM_STRING_ASCII( &constant_bin[ 1768304 ], 964, 0 );
    const_tuple_float_2_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_2_0_tuple, 0, const_float_2_0 ); Py_INCREF( const_float_2_0 );
    const_str_digest_bfda669d317818c402e6d2f06e045736 = UNSTREAM_STRING_ASCII( &constant_bin[ 1769268 ], 1235, 0 );
    const_str_digest_92b65fa26f09e66fa2cdf001092bd047 = UNSTREAM_STRING_ASCII( &constant_bin[ 1770503 ], 705, 0 );
    const_str_digest_3eca374da455ac1a28d5ad0b778e7fa3 = UNSTREAM_STRING_ASCII( &constant_bin[ 1771208 ], 408, 0 );
    const_str_digest_c03a8691a6fa92b092bf568125a7c69b = UNSTREAM_STRING_ASCII( &constant_bin[ 1771616 ], 988, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$scimath( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d468cfbc1ca13cf2674dbe745eede0dc;
static PyCodeObject *codeobj_e351b21f690ad85958c3529bed2e6907;
static PyCodeObject *codeobj_aae7193a2b09ec1e821cc6ad1ba83d2d;
static PyCodeObject *codeobj_2290c4a57a0b543658ead49503611583;
static PyCodeObject *codeobj_c52d08fde71b1c31cd0aa8fb1a5d0ff8;
static PyCodeObject *codeobj_f271ff480c07cab7dd4edd16956e004d;
static PyCodeObject *codeobj_d445bec8f4bc8c5c9e727221dbf3cff1;
static PyCodeObject *codeobj_d9e1601884d04619a1d0cac4fcfd4f9b;
static PyCodeObject *codeobj_396f6399d97ab018babc04e14d0565d6;
static PyCodeObject *codeobj_ed08ad204a6b398e1a8e66b2591dc540;
static PyCodeObject *codeobj_8e371951bf57a19c95310dda747bad45;
static PyCodeObject *codeobj_7dcaa34ddedfea2b836fe9894c0454cf;
static PyCodeObject *codeobj_f1c1df9b0691cbb5fae05f94b8abb968;
static PyCodeObject *codeobj_eef0d1b7c742a3c9e576119626524279;
static PyCodeObject *codeobj_ed685d741383a7f6a57d1b4e4a5db55e;
static PyCodeObject *codeobj_878fe1bf9e5802d501a9d100247f2589;
static PyCodeObject *codeobj_45f1621e6bffa91f083e4c7c77f06207;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_713bebbe0aba5d23089fff81b207e0c5;
    codeobj_d468cfbc1ca13cf2674dbe745eede0dc = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cddd7f5fabf41633d87cad35c47da579, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e351b21f690ad85958c3529bed2e6907 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fix_int_lt_zero, 127, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aae7193a2b09ec1e821cc6ad1ba83d2d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fix_real_abs_gt_1, 154, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2290c4a57a0b543658ead49503611583 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fix_real_lt_zero, 99, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c52d08fde71b1c31cd0aa8fb1a5d0ff8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__logn_dispatcher, 327, const_tuple_str_plain_n_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f271ff480c07cab7dd4edd16956e004d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__power_dispatcher, 415, const_tuple_str_plain_x_str_plain_p_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d445bec8f4bc8c5c9e727221dbf3cff1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__tocomplex, 36, const_tuple_str_plain_arr_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9e1601884d04619a1d0cac4fcfd4f9b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unary_dispatcher, 181, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_396f6399d97ab018babc04e14d0565d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_arccos, 464, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed08ad204a6b398e1a8e66b2591dc540 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_arcsin, 509, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8e371951bf57a19c95310dda747bad45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_arctanh, 555, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7dcaa34ddedfea2b836fe9894c0454cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_log, 229, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f1c1df9b0691cbb5fae05f94b8abb968 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_log10, 277, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eef0d1b7c742a3c9e576119626524279 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_log2, 367, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed685d741383a7f6a57d1b4e4a5db55e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_logn, 331, const_tuple_str_plain_n_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_878fe1bf9e5802d501a9d100247f2589 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_power, 419, const_tuple_str_plain_x_str_plain_p_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_45f1621e6bffa91f083e4c7c77f06207 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sqrt, 185, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_10_logn(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_11_log2(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_12__power_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_13_power(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_14_arccos(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_15_arcsin(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_16_arctanh(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_1__tocomplex(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_2__fix_real_lt_zero(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_3__fix_int_lt_zero(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_4__fix_real_abs_gt_1(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_5__unary_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_6_sqrt(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_7_log(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_8_log10(  );


static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_9__logn_dispatcher(  );


// The module function definitions.
static PyObject *impl_numpy$lib$scimath$$$function_1__tocomplex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d445bec8f4bc8c5c9e727221dbf3cff1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d445bec8f4bc8c5c9e727221dbf3cff1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d445bec8f4bc8c5c9e727221dbf3cff1, codeobj_d445bec8f4bc8c5c9e727221dbf3cff1, module_numpy$lib$scimath, sizeof(void *) );
    frame_d445bec8f4bc8c5c9e727221dbf3cff1 = cache_frame_d445bec8f4bc8c5c9e727221dbf3cff1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d445bec8f4bc8c5c9e727221dbf3cff1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d445bec8f4bc8c5c9e727221dbf3cff1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_arr );
        tmp_source_name_2 = par_arr;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_single );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = PyTuple_New( 6 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_byte );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_short );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_2, 2, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ubyte );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_2, 3, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ushort );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_2, 4, tmp_tuple_element_1 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_6;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_csingle );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_2, 5, tmp_tuple_element_1 );
        frame_d445bec8f4bc8c5c9e727221dbf3cff1->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 92;
            type_description_1 = "o";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_7;
            CHECK_OBJECT( par_arr );
            tmp_source_name_9 = par_arr;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_astype );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_7;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_csingle );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 94;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_d445bec8f4bc8c5c9e727221dbf3cff1->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_8;
            CHECK_OBJECT( par_arr );
            tmp_source_name_11 = par_arr;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_astype );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 96;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_8;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_cdouble );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 96;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_d445bec8f4bc8c5c9e727221dbf3cff1->m_frame.f_lineno = 96;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d445bec8f4bc8c5c9e727221dbf3cff1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d445bec8f4bc8c5c9e727221dbf3cff1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d445bec8f4bc8c5c9e727221dbf3cff1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d445bec8f4bc8c5c9e727221dbf3cff1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d445bec8f4bc8c5c9e727221dbf3cff1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d445bec8f4bc8c5c9e727221dbf3cff1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d445bec8f4bc8c5c9e727221dbf3cff1,
        type_description_1,
        par_arr
    );


    // Release cached frame.
    if ( frame_d445bec8f4bc8c5c9e727221dbf3cff1 == cache_frame_d445bec8f4bc8c5c9e727221dbf3cff1 )
    {
        Py_DECREF( frame_d445bec8f4bc8c5c9e727221dbf3cff1 );
    }
    cache_frame_d445bec8f4bc8c5c9e727221dbf3cff1 = NULL;

    assertFrameObject( frame_d445bec8f4bc8c5c9e727221dbf3cff1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_1__tocomplex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_1__tocomplex );
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


static PyObject *impl_numpy$lib$scimath$$$function_2__fix_real_lt_zero( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_2290c4a57a0b543658ead49503611583;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2290c4a57a0b543658ead49503611583 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2290c4a57a0b543658ead49503611583, codeobj_2290c4a57a0b543658ead49503611583, module_numpy$lib$scimath, sizeof(void *) );
    frame_2290c4a57a0b543658ead49503611583 = cache_frame_2290c4a57a0b543658ead49503611583;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2290c4a57a0b543658ead49503611583 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2290c4a57a0b543658ead49503611583 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_2290c4a57a0b543658ead49503611583->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_any );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_any );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "any" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_isreal );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isreal );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isreal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        frame_2290c4a57a0b543658ead49503611583->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_1 = par_x;
        tmp_compexpr_right_1 = const_int_0;
        tmp_right_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2290c4a57a0b543658ead49503611583->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 122;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__tocomplex );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tocomplex );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_tocomplex" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 123;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_4 = par_x;
            frame_2290c4a57a0b543658ead49503611583->m_frame.f_lineno = 123;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2290c4a57a0b543658ead49503611583 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2290c4a57a0b543658ead49503611583 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2290c4a57a0b543658ead49503611583, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2290c4a57a0b543658ead49503611583->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2290c4a57a0b543658ead49503611583, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2290c4a57a0b543658ead49503611583,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_2290c4a57a0b543658ead49503611583 == cache_frame_2290c4a57a0b543658ead49503611583 )
    {
        Py_DECREF( frame_2290c4a57a0b543658ead49503611583 );
    }
    cache_frame_2290c4a57a0b543658ead49503611583 = NULL;

    assertFrameObject( frame_2290c4a57a0b543658ead49503611583 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_2__fix_real_lt_zero );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_2__fix_real_lt_zero );
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


static PyObject *impl_numpy$lib$scimath$$$function_3__fix_int_lt_zero( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e351b21f690ad85958c3529bed2e6907;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e351b21f690ad85958c3529bed2e6907 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e351b21f690ad85958c3529bed2e6907, codeobj_e351b21f690ad85958c3529bed2e6907, module_numpy$lib$scimath, sizeof(void *) );
    frame_e351b21f690ad85958c3529bed2e6907 = cache_frame_e351b21f690ad85958c3529bed2e6907;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e351b21f690ad85958c3529bed2e6907 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e351b21f690ad85958c3529bed2e6907 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_e351b21f690ad85958c3529bed2e6907->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_any );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_any );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "any" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_isreal );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isreal );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isreal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        frame_e351b21f690ad85958c3529bed2e6907->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_1 = par_x;
        tmp_compexpr_right_1 = const_int_0;
        tmp_right_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e351b21f690ad85958c3529bed2e6907->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 149;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_x );
            tmp_left_name_2 = par_x;
            tmp_right_name_2 = const_float_1_0;
            tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e351b21f690ad85958c3529bed2e6907 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e351b21f690ad85958c3529bed2e6907 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e351b21f690ad85958c3529bed2e6907, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e351b21f690ad85958c3529bed2e6907->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e351b21f690ad85958c3529bed2e6907, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e351b21f690ad85958c3529bed2e6907,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_e351b21f690ad85958c3529bed2e6907 == cache_frame_e351b21f690ad85958c3529bed2e6907 )
    {
        Py_DECREF( frame_e351b21f690ad85958c3529bed2e6907 );
    }
    cache_frame_e351b21f690ad85958c3529bed2e6907 = NULL;

    assertFrameObject( frame_e351b21f690ad85958c3529bed2e6907 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_3__fix_int_lt_zero );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_3__fix_int_lt_zero );
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


static PyObject *impl_numpy$lib$scimath$$$function_4__fix_real_abs_gt_1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_aae7193a2b09ec1e821cc6ad1ba83d2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aae7193a2b09ec1e821cc6ad1ba83d2d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aae7193a2b09ec1e821cc6ad1ba83d2d, codeobj_aae7193a2b09ec1e821cc6ad1ba83d2d, module_numpy$lib$scimath, sizeof(void *) );
    frame_aae7193a2b09ec1e821cc6ad1ba83d2d = cache_frame_aae7193a2b09ec1e821cc6ad1ba83d2d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aae7193a2b09ec1e821cc6ad1ba83d2d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aae7193a2b09ec1e821cc6ad1ba83d2d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_aae7193a2b09ec1e821cc6ad1ba83d2d->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_any );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_any );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "any" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_isreal );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isreal );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isreal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        frame_aae7193a2b09ec1e821cc6ad1ba83d2d->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_4 = par_x;
        frame_aae7193a2b09ec1e821cc6ad1ba83d2d->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_right_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_aae7193a2b09ec1e821cc6ad1ba83d2d->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 176;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__tocomplex );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tocomplex );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_tocomplex" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 177;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_4;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_5 = par_x;
            frame_aae7193a2b09ec1e821cc6ad1ba83d2d->m_frame.f_lineno = 177;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aae7193a2b09ec1e821cc6ad1ba83d2d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aae7193a2b09ec1e821cc6ad1ba83d2d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aae7193a2b09ec1e821cc6ad1ba83d2d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aae7193a2b09ec1e821cc6ad1ba83d2d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aae7193a2b09ec1e821cc6ad1ba83d2d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aae7193a2b09ec1e821cc6ad1ba83d2d,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_aae7193a2b09ec1e821cc6ad1ba83d2d == cache_frame_aae7193a2b09ec1e821cc6ad1ba83d2d )
    {
        Py_DECREF( frame_aae7193a2b09ec1e821cc6ad1ba83d2d );
    }
    cache_frame_aae7193a2b09ec1e821cc6ad1ba83d2d = NULL;

    assertFrameObject( frame_aae7193a2b09ec1e821cc6ad1ba83d2d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_4__fix_real_abs_gt_1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_4__fix_real_abs_gt_1 );
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


static PyObject *impl_numpy$lib$scimath$$$function_5__unary_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_5__unary_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_5__unary_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$scimath$$$function_6_sqrt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_45f1621e6bffa91f083e4c7c77f06207;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_45f1621e6bffa91f083e4c7c77f06207 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_45f1621e6bffa91f083e4c7c77f06207, codeobj_45f1621e6bffa91f083e4c7c77f06207, module_numpy$lib$scimath, sizeof(void *) );
    frame_45f1621e6bffa91f083e4c7c77f06207 = cache_frame_45f1621e6bffa91f083e4c7c77f06207;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_45f1621e6bffa91f083e4c7c77f06207 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_45f1621e6bffa91f083e4c7c77f06207 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_lt_zero" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 225;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_45f1621e6bffa91f083e4c7c77f06207->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_45f1621e6bffa91f083e4c7c77f06207->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sqrt, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45f1621e6bffa91f083e4c7c77f06207 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_45f1621e6bffa91f083e4c7c77f06207 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45f1621e6bffa91f083e4c7c77f06207 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_45f1621e6bffa91f083e4c7c77f06207, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_45f1621e6bffa91f083e4c7c77f06207->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_45f1621e6bffa91f083e4c7c77f06207, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_45f1621e6bffa91f083e4c7c77f06207,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_45f1621e6bffa91f083e4c7c77f06207 == cache_frame_45f1621e6bffa91f083e4c7c77f06207 )
    {
        Py_DECREF( frame_45f1621e6bffa91f083e4c7c77f06207 );
    }
    cache_frame_45f1621e6bffa91f083e4c7c77f06207 = NULL;

    assertFrameObject( frame_45f1621e6bffa91f083e4c7c77f06207 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_6_sqrt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_6_sqrt );
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


static PyObject *impl_numpy$lib$scimath$$$function_7_log( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7dcaa34ddedfea2b836fe9894c0454cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7dcaa34ddedfea2b836fe9894c0454cf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7dcaa34ddedfea2b836fe9894c0454cf, codeobj_7dcaa34ddedfea2b836fe9894c0454cf, module_numpy$lib$scimath, sizeof(void *) );
    frame_7dcaa34ddedfea2b836fe9894c0454cf = cache_frame_7dcaa34ddedfea2b836fe9894c0454cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7dcaa34ddedfea2b836fe9894c0454cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7dcaa34ddedfea2b836fe9894c0454cf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_lt_zero" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_7dcaa34ddedfea2b836fe9894c0454cf->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_7dcaa34ddedfea2b836fe9894c0454cf->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7dcaa34ddedfea2b836fe9894c0454cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7dcaa34ddedfea2b836fe9894c0454cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7dcaa34ddedfea2b836fe9894c0454cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7dcaa34ddedfea2b836fe9894c0454cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7dcaa34ddedfea2b836fe9894c0454cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7dcaa34ddedfea2b836fe9894c0454cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7dcaa34ddedfea2b836fe9894c0454cf,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_7dcaa34ddedfea2b836fe9894c0454cf == cache_frame_7dcaa34ddedfea2b836fe9894c0454cf )
    {
        Py_DECREF( frame_7dcaa34ddedfea2b836fe9894c0454cf );
    }
    cache_frame_7dcaa34ddedfea2b836fe9894c0454cf = NULL;

    assertFrameObject( frame_7dcaa34ddedfea2b836fe9894c0454cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_7_log );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_7_log );
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


static PyObject *impl_numpy$lib$scimath$$$function_8_log10( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f1c1df9b0691cbb5fae05f94b8abb968;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f1c1df9b0691cbb5fae05f94b8abb968 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1c1df9b0691cbb5fae05f94b8abb968, codeobj_f1c1df9b0691cbb5fae05f94b8abb968, module_numpy$lib$scimath, sizeof(void *) );
    frame_f1c1df9b0691cbb5fae05f94b8abb968 = cache_frame_f1c1df9b0691cbb5fae05f94b8abb968;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1c1df9b0691cbb5fae05f94b8abb968 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1c1df9b0691cbb5fae05f94b8abb968 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_lt_zero" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_f1c1df9b0691cbb5fae05f94b8abb968->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_f1c1df9b0691cbb5fae05f94b8abb968->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log10, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1c1df9b0691cbb5fae05f94b8abb968 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1c1df9b0691cbb5fae05f94b8abb968 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1c1df9b0691cbb5fae05f94b8abb968 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1c1df9b0691cbb5fae05f94b8abb968, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1c1df9b0691cbb5fae05f94b8abb968->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1c1df9b0691cbb5fae05f94b8abb968, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1c1df9b0691cbb5fae05f94b8abb968,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_f1c1df9b0691cbb5fae05f94b8abb968 == cache_frame_f1c1df9b0691cbb5fae05f94b8abb968 )
    {
        Py_DECREF( frame_f1c1df9b0691cbb5fae05f94b8abb968 );
    }
    cache_frame_f1c1df9b0691cbb5fae05f94b8abb968 = NULL;

    assertFrameObject( frame_f1c1df9b0691cbb5fae05f94b8abb968 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_8_log10 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_8_log10 );
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


static PyObject *impl_numpy$lib$scimath$$$function_9__logn_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_n );
        tmp_tuple_element_1 = par_n;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_9__logn_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_9__logn_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$scimath$$$function_10_logn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ed685d741383a7f6a57d1b4e4a5db55e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ed685d741383a7f6a57d1b4e4a5db55e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed685d741383a7f6a57d1b4e4a5db55e, codeobj_ed685d741383a7f6a57d1b4e4a5db55e, module_numpy$lib$scimath, sizeof(void *)+sizeof(void *) );
    frame_ed685d741383a7f6a57d1b4e4a5db55e = cache_frame_ed685d741383a7f6a57d1b4e4a5db55e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed685d741383a7f6a57d1b4e4a5db55e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed685d741383a7f6a57d1b4e4a5db55e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_lt_zero" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_ed685d741383a7f6a57d1b4e4a5db55e->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_lt_zero" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_2 = par_n;
        frame_ed685d741383a7f6a57d1b4e4a5db55e->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_n;
            assert( old != NULL );
            par_n = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 364;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        frame_ed685d741383a7f6a57d1b4e4a5db55e->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 364;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_4 = par_n;
        frame_ed685d741383a7f6a57d1b4e4a5db55e->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_log, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 364;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed685d741383a7f6a57d1b4e4a5db55e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed685d741383a7f6a57d1b4e4a5db55e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed685d741383a7f6a57d1b4e4a5db55e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed685d741383a7f6a57d1b4e4a5db55e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed685d741383a7f6a57d1b4e4a5db55e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed685d741383a7f6a57d1b4e4a5db55e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed685d741383a7f6a57d1b4e4a5db55e,
        type_description_1,
        par_n,
        par_x
    );


    // Release cached frame.
    if ( frame_ed685d741383a7f6a57d1b4e4a5db55e == cache_frame_ed685d741383a7f6a57d1b4e4a5db55e )
    {
        Py_DECREF( frame_ed685d741383a7f6a57d1b4e4a5db55e );
    }
    cache_frame_ed685d741383a7f6a57d1b4e4a5db55e = NULL;

    assertFrameObject( frame_ed685d741383a7f6a57d1b4e4a5db55e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_10_logn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_10_logn );
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


static PyObject *impl_numpy$lib$scimath$$$function_11_log2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_eef0d1b7c742a3c9e576119626524279;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_eef0d1b7c742a3c9e576119626524279 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eef0d1b7c742a3c9e576119626524279, codeobj_eef0d1b7c742a3c9e576119626524279, module_numpy$lib$scimath, sizeof(void *) );
    frame_eef0d1b7c742a3c9e576119626524279 = cache_frame_eef0d1b7c742a3c9e576119626524279;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eef0d1b7c742a3c9e576119626524279 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eef0d1b7c742a3c9e576119626524279 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_lt_zero" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 411;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_eef0d1b7c742a3c9e576119626524279->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_eef0d1b7c742a3c9e576119626524279->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef0d1b7c742a3c9e576119626524279 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef0d1b7c742a3c9e576119626524279 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef0d1b7c742a3c9e576119626524279 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eef0d1b7c742a3c9e576119626524279, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eef0d1b7c742a3c9e576119626524279->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eef0d1b7c742a3c9e576119626524279, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eef0d1b7c742a3c9e576119626524279,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_eef0d1b7c742a3c9e576119626524279 == cache_frame_eef0d1b7c742a3c9e576119626524279 )
    {
        Py_DECREF( frame_eef0d1b7c742a3c9e576119626524279 );
    }
    cache_frame_eef0d1b7c742a3c9e576119626524279 = NULL;

    assertFrameObject( frame_eef0d1b7c742a3c9e576119626524279 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_11_log2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_11_log2 );
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


static PyObject *impl_numpy$lib$scimath$$$function_12__power_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_p );
        tmp_tuple_element_1 = par_p;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_12__power_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_12__power_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$scimath$$$function_13_power( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_878fe1bf9e5802d501a9d100247f2589;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_878fe1bf9e5802d501a9d100247f2589 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_878fe1bf9e5802d501a9d100247f2589, codeobj_878fe1bf9e5802d501a9d100247f2589, module_numpy$lib$scimath, sizeof(void *)+sizeof(void *) );
    frame_878fe1bf9e5802d501a9d100247f2589 = cache_frame_878fe1bf9e5802d501a9d100247f2589;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_878fe1bf9e5802d501a9d100247f2589 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_878fe1bf9e5802d501a9d100247f2589 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_lt_zero" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 459;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_878fe1bf9e5802d501a9d100247f2589->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_int_lt_zero );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_int_lt_zero );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_int_lt_zero" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_2 = par_p;
        frame_878fe1bf9e5802d501a9d100247f2589->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_p;
            assert( old != NULL );
            par_p = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_4 = par_p;
        frame_878fe1bf9e5802d501a9d100247f2589->m_frame.f_lineno = 461;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_power, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_878fe1bf9e5802d501a9d100247f2589 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_878fe1bf9e5802d501a9d100247f2589 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_878fe1bf9e5802d501a9d100247f2589 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_878fe1bf9e5802d501a9d100247f2589, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_878fe1bf9e5802d501a9d100247f2589->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_878fe1bf9e5802d501a9d100247f2589, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_878fe1bf9e5802d501a9d100247f2589,
        type_description_1,
        par_x,
        par_p
    );


    // Release cached frame.
    if ( frame_878fe1bf9e5802d501a9d100247f2589 == cache_frame_878fe1bf9e5802d501a9d100247f2589 )
    {
        Py_DECREF( frame_878fe1bf9e5802d501a9d100247f2589 );
    }
    cache_frame_878fe1bf9e5802d501a9d100247f2589 = NULL;

    assertFrameObject( frame_878fe1bf9e5802d501a9d100247f2589 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_13_power );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_13_power );
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


static PyObject *impl_numpy$lib$scimath$$$function_14_arccos( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_396f6399d97ab018babc04e14d0565d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_396f6399d97ab018babc04e14d0565d6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_396f6399d97ab018babc04e14d0565d6, codeobj_396f6399d97ab018babc04e14d0565d6, module_numpy$lib$scimath, sizeof(void *) );
    frame_396f6399d97ab018babc04e14d0565d6 = cache_frame_396f6399d97ab018babc04e14d0565d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_396f6399d97ab018babc04e14d0565d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_396f6399d97ab018babc04e14d0565d6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_abs_gt_1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_abs_gt_1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_abs_gt_1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 505;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_396f6399d97ab018babc04e14d0565d6->m_frame.f_lineno = 505;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 505;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_396f6399d97ab018babc04e14d0565d6->m_frame.f_lineno = 506;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_arccos, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_396f6399d97ab018babc04e14d0565d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_396f6399d97ab018babc04e14d0565d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_396f6399d97ab018babc04e14d0565d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_396f6399d97ab018babc04e14d0565d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_396f6399d97ab018babc04e14d0565d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_396f6399d97ab018babc04e14d0565d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_396f6399d97ab018babc04e14d0565d6,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_396f6399d97ab018babc04e14d0565d6 == cache_frame_396f6399d97ab018babc04e14d0565d6 )
    {
        Py_DECREF( frame_396f6399d97ab018babc04e14d0565d6 );
    }
    cache_frame_396f6399d97ab018babc04e14d0565d6 = NULL;

    assertFrameObject( frame_396f6399d97ab018babc04e14d0565d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_14_arccos );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_14_arccos );
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


static PyObject *impl_numpy$lib$scimath$$$function_15_arcsin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ed08ad204a6b398e1a8e66b2591dc540;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ed08ad204a6b398e1a8e66b2591dc540 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed08ad204a6b398e1a8e66b2591dc540, codeobj_ed08ad204a6b398e1a8e66b2591dc540, module_numpy$lib$scimath, sizeof(void *) );
    frame_ed08ad204a6b398e1a8e66b2591dc540 = cache_frame_ed08ad204a6b398e1a8e66b2591dc540;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed08ad204a6b398e1a8e66b2591dc540 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed08ad204a6b398e1a8e66b2591dc540 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_abs_gt_1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_abs_gt_1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_abs_gt_1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 551;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_ed08ad204a6b398e1a8e66b2591dc540->m_frame.f_lineno = 551;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 551;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 552;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_ed08ad204a6b398e1a8e66b2591dc540->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_arcsin, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 552;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed08ad204a6b398e1a8e66b2591dc540 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed08ad204a6b398e1a8e66b2591dc540 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed08ad204a6b398e1a8e66b2591dc540 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed08ad204a6b398e1a8e66b2591dc540, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed08ad204a6b398e1a8e66b2591dc540->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed08ad204a6b398e1a8e66b2591dc540, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed08ad204a6b398e1a8e66b2591dc540,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_ed08ad204a6b398e1a8e66b2591dc540 == cache_frame_ed08ad204a6b398e1a8e66b2591dc540 )
    {
        Py_DECREF( frame_ed08ad204a6b398e1a8e66b2591dc540 );
    }
    cache_frame_ed08ad204a6b398e1a8e66b2591dc540 = NULL;

    assertFrameObject( frame_ed08ad204a6b398e1a8e66b2591dc540 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_15_arcsin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_15_arcsin );
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


static PyObject *impl_numpy$lib$scimath$$$function_16_arctanh( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8e371951bf57a19c95310dda747bad45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8e371951bf57a19c95310dda747bad45 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8e371951bf57a19c95310dda747bad45, codeobj_8e371951bf57a19c95310dda747bad45, module_numpy$lib$scimath, sizeof(void *) );
    frame_8e371951bf57a19c95310dda747bad45 = cache_frame_8e371951bf57a19c95310dda747bad45;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8e371951bf57a19c95310dda747bad45 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8e371951bf57a19c95310dda747bad45 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_abs_gt_1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fix_real_abs_gt_1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fix_real_abs_gt_1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 602;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_8e371951bf57a19c95310dda747bad45->m_frame.f_lineno = 602;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 602;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 603;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_8e371951bf57a19c95310dda747bad45->m_frame.f_lineno = 603;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_arctanh, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e371951bf57a19c95310dda747bad45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e371951bf57a19c95310dda747bad45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e371951bf57a19c95310dda747bad45 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e371951bf57a19c95310dda747bad45, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e371951bf57a19c95310dda747bad45->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e371951bf57a19c95310dda747bad45, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8e371951bf57a19c95310dda747bad45,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_8e371951bf57a19c95310dda747bad45 == cache_frame_8e371951bf57a19c95310dda747bad45 )
    {
        Py_DECREF( frame_8e371951bf57a19c95310dda747bad45 );
    }
    cache_frame_8e371951bf57a19c95310dda747bad45 = NULL;

    assertFrameObject( frame_8e371951bf57a19c95310dda747bad45 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_16_arctanh );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$scimath$$$function_16_arctanh );
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



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_10_logn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_10_logn,
        const_str_plain_logn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ed685d741383a7f6a57d1b4e4a5db55e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_92b65fa26f09e66fa2cdf001092bd047,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_11_log2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_11_log2,
        const_str_plain_log2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eef0d1b7c742a3c9e576119626524279,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_1904d1ccb55bb577a382f57b6efc9580,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_12__power_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_12__power_dispatcher,
        const_str_plain__power_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f271ff480c07cab7dd4edd16956e004d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_13_power(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_13_power,
        const_str_plain_power,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_878fe1bf9e5802d501a9d100247f2589,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_77205a64309c60a3e7cce37eb09ae6b8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_14_arccos(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_14_arccos,
        const_str_plain_arccos,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_396f6399d97ab018babc04e14d0565d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_c03a8691a6fa92b092bf568125a7c69b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_15_arcsin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_15_arcsin,
        const_str_plain_arcsin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ed08ad204a6b398e1a8e66b2591dc540,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_63da9d39ac5b88c6be7daeda5efba743,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_16_arctanh(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_16_arctanh,
        const_str_plain_arctanh,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8e371951bf57a19c95310dda747bad45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_bfda669d317818c402e6d2f06e045736,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_1__tocomplex(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_1__tocomplex,
        const_str_plain__tocomplex,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d445bec8f4bc8c5c9e727221dbf3cff1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_3ed4b3d65418a4f502eb6e707ba822ac,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_2__fix_real_lt_zero(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_2__fix_real_lt_zero,
        const_str_plain__fix_real_lt_zero,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2290c4a57a0b543658ead49503611583,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_5558fa799cc4c67d8dd4b124742ec2df,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_3__fix_int_lt_zero(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_3__fix_int_lt_zero,
        const_str_plain__fix_int_lt_zero,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e351b21f690ad85958c3529bed2e6907,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_44d26da71e44d34fbcb0a1b68b156525,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_4__fix_real_abs_gt_1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_4__fix_real_abs_gt_1,
        const_str_plain__fix_real_abs_gt_1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aae7193a2b09ec1e821cc6ad1ba83d2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_3eca374da455ac1a28d5ad0b778e7fa3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_5__unary_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_5__unary_dispatcher,
        const_str_plain__unary_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d9e1601884d04619a1d0cac4fcfd4f9b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_6_sqrt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_6_sqrt,
        const_str_plain_sqrt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_45f1621e6bffa91f083e4c7c77f06207,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_3e3b043d981c43f5e896b7870fe309e7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_7_log(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_7_log,
        const_str_plain_log,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7dcaa34ddedfea2b836fe9894c0454cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_dc37e4ecd94e88344e5840c9f9787d03,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_8_log10(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_8_log10,
        const_str_plain_log10,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f1c1df9b0691cbb5fae05f94b8abb968,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        const_str_digest_6a5f4d1812a491b18b53912d768826ab,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$scimath$$$function_9__logn_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$scimath$$$function_9__logn_dispatcher,
        const_str_plain__logn_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c52d08fde71b1c31cd0aa8fb1a5d0ff8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$scimath,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$scimath =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.scimath",
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
MOD_ENTRY_DECL(numpy$lib$scimath)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(numpy$lib$scimath)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$scimath );
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
    puts("numpy.lib.scimath: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.scimath: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.scimath: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$scimath" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$scimath = Py_InitModule4(
        "numpy.lib.scimath",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$scimath = PyModule_Create( &mdef_numpy$lib$scimath );
#endif

    moduledict_numpy$lib$scimath = MODULE_DICT( module_numpy$lib$scimath );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$lib$scimath,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$scimath,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$scimath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$scimath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$scimath );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6cd9f1ac4783293caff8cedee777621e, module_numpy$lib$scimath );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_d468cfbc1ca13cf2674dbe745eede0dc;
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
        tmp_assign_source_1 = const_str_digest_02ed944594eda80425c47a90388357aa;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_713bebbe0aba5d23089fff81b207e0c5;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_d468cfbc1ca13cf2674dbe745eede0dc = MAKE_MODULE_FRAME( codeobj_d468cfbc1ca13cf2674dbe745eede0dc, module_numpy$lib$scimath );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d468cfbc1ca13cf2674dbe745eede0dc );
    assert( Py_REFCNT( frame_d468cfbc1ca13cf2674dbe745eede0dc ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_713bebbe0aba5d23089fff81b207e0c5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 18;
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
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$scimath;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 20;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_core );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_67205772204d1e33862eb50e826ab1cb;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$scimath;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 21;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_6 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_core );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_numerictypes );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nt, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$scimath;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_asarray_str_plain_any_tuple;
        tmp_level_name_3 = const_int_0;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 22;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_asarray );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_any );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_any, tmp_assign_source_12 );
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_3ebbb82d9800d0665e0803be07081408;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$scimath;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_array_function_dispatch_tuple;
        tmp_level_name_4 = const_int_0;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 23;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_array_function_dispatch );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_f06b0863ac057f993e0b6697d72eaf86;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$scimath;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_isreal_tuple;
        tmp_level_name_5 = const_int_0;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 24;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_isreal );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_isreal, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LIST_COPY( const_list_3389953945577137c2ed310e42d76532_list );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_nx );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 33;
        tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_log, &PyTuple_GET_ITEM( const_tuple_float_2_0_tuple, 0 ) );

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__ln2, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$scimath$$$function_1__tocomplex(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__tocomplex, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$scimath$$$function_2__fix_real_lt_zero(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_lt_zero, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$scimath$$$function_3__fix_int_lt_zero(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_int_lt_zero, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$scimath$$$function_4__fix_real_abs_gt_1(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__fix_real_abs_gt_1, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$scimath$$$function_5__unary_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__unary_dispatcher, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_args_element_name_1 = tmp_mvar_value_5;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$scimath$$$function_6_sqrt(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unary_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_7;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$lib$scimath$$$function_7_log(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unary_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_9;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$lib$scimath$$$function_8_log10(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_log10, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$scimath$$$function_9__logn_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__logn_dispatcher, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__logn_dispatcher );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logn_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_11 );
        tmp_args_element_name_7 = tmp_mvar_value_11;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$lib$scimath$$$function_10_logn(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_logn, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_9;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_12;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unary_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = tmp_mvar_value_13;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$lib$scimath$$$function_11_log2(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_log2, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$scimath$$$function_12__power_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__power_dispatcher, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_14;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__power_dispatcher );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__power_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_15 );
        tmp_args_element_name_11 = tmp_mvar_value_15;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_called_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$lib$scimath$$$function_13_power(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_power, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_13;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_16;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unary_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_13 = tmp_mvar_value_17;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$lib$scimath$$$function_14_arccos(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_arccos, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_15;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_16;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 509;

            goto frame_exception_exit_1;
        }

        tmp_called_name_16 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unary_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 509;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_15 = tmp_mvar_value_19;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 509;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_called_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = MAKE_FUNCTION_numpy$lib$scimath$$$function_15_arcsin(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 509;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_arcsin, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_17;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_18;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 555;

            goto frame_exception_exit_1;
        }

        tmp_called_name_18 = tmp_mvar_value_20;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_dispatcher );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unary_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 555;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = tmp_mvar_value_21;
        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 555;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_called_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        if ( tmp_called_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_18 = MAKE_FUNCTION_numpy$lib$scimath$$$function_16_arctanh(  );



        frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame.f_lineno = 555;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$scimath, (Nuitka_StringObject *)const_str_plain_arctanh, tmp_assign_source_32 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d468cfbc1ca13cf2674dbe745eede0dc );
#endif
    popFrameStack();

    assertFrameObject( frame_d468cfbc1ca13cf2674dbe745eede0dc );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d468cfbc1ca13cf2674dbe745eede0dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d468cfbc1ca13cf2674dbe745eede0dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d468cfbc1ca13cf2674dbe745eede0dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d468cfbc1ca13cf2674dbe745eede0dc, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_numpy$lib$scimath );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
