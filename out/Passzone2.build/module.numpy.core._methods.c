/* Generated code for Python module 'numpy$core$_methods'
 * created by Nuitka version 1.9.3
 *
 * This code is in part copyright 2023 Kay Hayen.
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

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_numpy$core$_methods" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$_methods;
PyDictObject *moduledict_numpy$core$_methods;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[165];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[165];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("numpy.core._methods"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 165; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$_methods(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 165; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_78c67d8e9ad3e347d9c78376a34e90cb;
static PyCodeObject *codeobj_d5b78735cf205fd79db1edde4eb45623;
static PyCodeObject *codeobj_65e7bb1d9154f358017a66e030487755;
static PyCodeObject *codeobj_febd0816e93e53220d43bf72ce7bf94e;
static PyCodeObject *codeobj_cbf76cbd4d50f7befa5d6bc858f3a37f;
static PyCodeObject *codeobj_8afff6f8936ef176f6ab0edae13a30e3;
static PyCodeObject *codeobj_52deaf4fcb6d1125f837ab5907d5dbfa;
static PyCodeObject *codeobj_7c28014f7e671a1d94fc2c7fb8122a9c;
static PyCodeObject *codeobj_97d9554b3e2170e6917a5af6ed6b8d95;
static PyCodeObject *codeobj_8aa4d94e38421e6d4075b24911d75b48;
static PyCodeObject *codeobj_abd3d18ceb988ba2ea8d5b1097385daf;
static PyCodeObject *codeobj_d7d963ce6bfcd6bbd78bacb081b8ef27;
static PyCodeObject *codeobj_42adb628296338a53589faee05d491ea;
static PyCodeObject *codeobj_2e9b5f6d0e32172099de9785060502e8;
static PyCodeObject *codeobj_cf9d31bcd31cb38804e80f1d171d49e6;
static PyCodeObject *codeobj_440653b12d8f0471dbae30932f96fdb7;
static PyCodeObject *codeobj_9857f27f6ffcc5857050ad2220bcc8e9;
static PyCodeObject *codeobj_1dc00138c25aa94787fa01fc2ff85c12;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[148]); CHECK_OBJECT(module_filename_obj);
    codeobj_78c67d8e9ad3e347d9c78376a34e90cb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[149], mod_consts[149], NULL, NULL, 0, 0, 0);
    codeobj_d5b78735cf205fd79db1edde4eb45623 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[150], NULL, 5, 1, 0);
    codeobj_65e7bb1d9154f358017a66e030487755 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[151], NULL, 6, 0, 0);
    codeobj_febd0816e93e53220d43bf72ce7bf94e = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[151], NULL, 6, 0, 0);
    codeobj_cbf76cbd4d50f7befa5d6bc858f3a37f = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[150], NULL, 5, 1, 0);
    codeobj_8afff6f8936ef176f6ab0edae13a30e3 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[152], NULL, 4, 1, 0);
    codeobj_52deaf4fcb6d1125f837ab5907d5dbfa = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[153], NULL, 1, 2, 0);
    codeobj_7c28014f7e671a1d94fc2c7fb8122a9c = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[154], NULL, 1, 0, 0);
    codeobj_97d9554b3e2170e6917a5af6ed6b8d95 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[155], NULL, 1, 0, 0);
    codeobj_8aa4d94e38421e6d4075b24911d75b48 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[156], NULL, 4, 0, 0);
    codeobj_abd3d18ceb988ba2ea8d5b1097385daf = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[157], NULL, 3, 0, 0);
    codeobj_d7d963ce6bfcd6bbd78bacb081b8ef27 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[158], NULL, 2, 0, 0);
    codeobj_42adb628296338a53589faee05d491ea = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[159], NULL, 5, 1, 0);
    codeobj_2e9b5f6d0e32172099de9785060502e8 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[160], NULL, 7, 0, 0);
    codeobj_cf9d31bcd31cb38804e80f1d171d49e6 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[161], NULL, 4, 0, 0);
    codeobj_440653b12d8f0471dbae30932f96fdb7 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[162], NULL, 6, 1, 0);
    codeobj_9857f27f6ffcc5857050ad2220bcc8e9 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[160], NULL, 7, 0, 0);
    codeobj_1dc00138c25aa94787fa01fc2ff85c12 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[163], NULL, 6, 1, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__10__clip_dep_invoke_with_casting(PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__11__clip(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__12__mean(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__13__var(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__14__std(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__15__ptp(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__16__dump(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__17__dumps(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__1__amax(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__2__amin(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__3__sum(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__4__prod(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__5__any(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__6__all(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__7__count_reduce_items(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__8__clip_dep_is_scalar_nan();


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__9__clip_dep_is_byte_swapped();


// The module function definitions.
static PyObject *impl_numpy$core$_methods$$$function__1__amax(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_out = python_pars[2];
    PyObject *par_keepdims = python_pars[3];
    PyObject *par_initial = python_pars[4];
    PyObject *par_where = python_pars[5];
    struct Nuitka_FrameObject *frame_65e7bb1d9154f358017a66e030487755;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65e7bb1d9154f358017a66e030487755 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65e7bb1d9154f358017a66e030487755)) {
        Py_XDECREF(cache_frame_65e7bb1d9154f358017a66e030487755);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65e7bb1d9154f358017a66e030487755 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65e7bb1d9154f358017a66e030487755 = MAKE_FUNCTION_FRAME(tstate, codeobj_65e7bb1d9154f358017a66e030487755, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65e7bb1d9154f358017a66e030487755->m_type_description == NULL);
    frame_65e7bb1d9154f358017a66e030487755 = cache_frame_65e7bb1d9154f358017a66e030487755;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_65e7bb1d9154f358017a66e030487755);
    assert(Py_REFCNT(frame_65e7bb1d9154f358017a66e030487755) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_2 = par_axis;
        tmp_args_element_value_3 = Py_None;
        CHECK_OBJECT(par_out);
        tmp_args_element_value_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_5 = par_keepdims;
        CHECK_OBJECT(par_initial);
        tmp_args_element_value_6 = par_initial;
        CHECK_OBJECT(par_where);
        tmp_args_element_value_7 = par_where;
        frame_65e7bb1d9154f358017a66e030487755->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65e7bb1d9154f358017a66e030487755, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65e7bb1d9154f358017a66e030487755->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65e7bb1d9154f358017a66e030487755, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65e7bb1d9154f358017a66e030487755,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_65e7bb1d9154f358017a66e030487755 == cache_frame_65e7bb1d9154f358017a66e030487755) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65e7bb1d9154f358017a66e030487755);
        cache_frame_65e7bb1d9154f358017a66e030487755 = NULL;
    }

    assertFrameObject(frame_65e7bb1d9154f358017a66e030487755);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__2__amin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_out = python_pars[2];
    PyObject *par_keepdims = python_pars[3];
    PyObject *par_initial = python_pars[4];
    PyObject *par_where = python_pars[5];
    struct Nuitka_FrameObject *frame_febd0816e93e53220d43bf72ce7bf94e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_febd0816e93e53220d43bf72ce7bf94e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_febd0816e93e53220d43bf72ce7bf94e)) {
        Py_XDECREF(cache_frame_febd0816e93e53220d43bf72ce7bf94e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_febd0816e93e53220d43bf72ce7bf94e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_febd0816e93e53220d43bf72ce7bf94e = MAKE_FUNCTION_FRAME(tstate, codeobj_febd0816e93e53220d43bf72ce7bf94e, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_febd0816e93e53220d43bf72ce7bf94e->m_type_description == NULL);
    frame_febd0816e93e53220d43bf72ce7bf94e = cache_frame_febd0816e93e53220d43bf72ce7bf94e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_febd0816e93e53220d43bf72ce7bf94e);
    assert(Py_REFCNT(frame_febd0816e93e53220d43bf72ce7bf94e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_2 = par_axis;
        tmp_args_element_value_3 = Py_None;
        CHECK_OBJECT(par_out);
        tmp_args_element_value_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_5 = par_keepdims;
        CHECK_OBJECT(par_initial);
        tmp_args_element_value_6 = par_initial;
        CHECK_OBJECT(par_where);
        tmp_args_element_value_7 = par_where;
        frame_febd0816e93e53220d43bf72ce7bf94e->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_febd0816e93e53220d43bf72ce7bf94e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_febd0816e93e53220d43bf72ce7bf94e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_febd0816e93e53220d43bf72ce7bf94e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_febd0816e93e53220d43bf72ce7bf94e,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_febd0816e93e53220d43bf72ce7bf94e == cache_frame_febd0816e93e53220d43bf72ce7bf94e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_febd0816e93e53220d43bf72ce7bf94e);
        cache_frame_febd0816e93e53220d43bf72ce7bf94e = NULL;
    }

    assertFrameObject(frame_febd0816e93e53220d43bf72ce7bf94e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__3__sum(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    PyObject *par_initial = python_pars[5];
    PyObject *par_where = python_pars[6];
    struct Nuitka_FrameObject *frame_9857f27f6ffcc5857050ad2220bcc8e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9857f27f6ffcc5857050ad2220bcc8e9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9857f27f6ffcc5857050ad2220bcc8e9)) {
        Py_XDECREF(cache_frame_9857f27f6ffcc5857050ad2220bcc8e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9857f27f6ffcc5857050ad2220bcc8e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9857f27f6ffcc5857050ad2220bcc8e9 = MAKE_FUNCTION_FRAME(tstate, codeobj_9857f27f6ffcc5857050ad2220bcc8e9, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9857f27f6ffcc5857050ad2220bcc8e9->m_type_description == NULL);
    frame_9857f27f6ffcc5857050ad2220bcc8e9 = cache_frame_9857f27f6ffcc5857050ad2220bcc8e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9857f27f6ffcc5857050ad2220bcc8e9);
    assert(Py_REFCNT(frame_9857f27f6ffcc5857050ad2220bcc8e9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_3 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_value_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_5 = par_keepdims;
        CHECK_OBJECT(par_initial);
        tmp_args_element_value_6 = par_initial;
        CHECK_OBJECT(par_where);
        tmp_args_element_value_7 = par_where;
        frame_9857f27f6ffcc5857050ad2220bcc8e9->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9857f27f6ffcc5857050ad2220bcc8e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9857f27f6ffcc5857050ad2220bcc8e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9857f27f6ffcc5857050ad2220bcc8e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9857f27f6ffcc5857050ad2220bcc8e9,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_9857f27f6ffcc5857050ad2220bcc8e9 == cache_frame_9857f27f6ffcc5857050ad2220bcc8e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9857f27f6ffcc5857050ad2220bcc8e9);
        cache_frame_9857f27f6ffcc5857050ad2220bcc8e9 = NULL;
    }

    assertFrameObject(frame_9857f27f6ffcc5857050ad2220bcc8e9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__4__prod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    PyObject *par_initial = python_pars[5];
    PyObject *par_where = python_pars[6];
    struct Nuitka_FrameObject *frame_2e9b5f6d0e32172099de9785060502e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2e9b5f6d0e32172099de9785060502e8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2e9b5f6d0e32172099de9785060502e8)) {
        Py_XDECREF(cache_frame_2e9b5f6d0e32172099de9785060502e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e9b5f6d0e32172099de9785060502e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e9b5f6d0e32172099de9785060502e8 = MAKE_FUNCTION_FRAME(tstate, codeobj_2e9b5f6d0e32172099de9785060502e8, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e9b5f6d0e32172099de9785060502e8->m_type_description == NULL);
    frame_2e9b5f6d0e32172099de9785060502e8 = cache_frame_2e9b5f6d0e32172099de9785060502e8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2e9b5f6d0e32172099de9785060502e8);
    assert(Py_REFCNT(frame_2e9b5f6d0e32172099de9785060502e8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_3 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_value_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_5 = par_keepdims;
        CHECK_OBJECT(par_initial);
        tmp_args_element_value_6 = par_initial;
        CHECK_OBJECT(par_where);
        tmp_args_element_value_7 = par_where;
        frame_2e9b5f6d0e32172099de9785060502e8->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2e9b5f6d0e32172099de9785060502e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e9b5f6d0e32172099de9785060502e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e9b5f6d0e32172099de9785060502e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e9b5f6d0e32172099de9785060502e8,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_2e9b5f6d0e32172099de9785060502e8 == cache_frame_2e9b5f6d0e32172099de9785060502e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e9b5f6d0e32172099de9785060502e8);
        cache_frame_2e9b5f6d0e32172099de9785060502e8 = NULL;
    }

    assertFrameObject(frame_2e9b5f6d0e32172099de9785060502e8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__5__any(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    PyObject *par_where = python_pars[5];
    struct Nuitka_FrameObject *frame_cbf76cbd4d50f7befa5d6bc858f3a37f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f)) {
        Py_XDECREF(cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f = MAKE_FUNCTION_FRAME(tstate, codeobj_cbf76cbd4d50f7befa5d6bc858f3a37f, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f->m_type_description == NULL);
    frame_cbf76cbd4d50f7befa5d6bc858f3a37f = cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cbf76cbd4d50f7befa5d6bc858f3a37f);
    assert(Py_REFCNT(frame_cbf76cbd4d50f7befa5d6bc858f3a37f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_where);
        tmp_cmp_expr_left_1 = par_where;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_3 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_value_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_5 = par_keepdims;
        frame_cbf76cbd4d50f7befa5d6bc858f3a37f->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_kw_call_arg_value_0_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_arg_value_1_1 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_arg_value_2_1 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_kw_call_arg_value_3_1 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_kw_call_arg_value_4_1 = par_keepdims;
        CHECK_OBJECT(par_where);
        tmp_kw_call_dict_value_0_1 = par_where;
        frame_cbf76cbd4d50f7befa5d6bc858f3a37f->m_frame.f_lineno = 58;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[5]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cbf76cbd4d50f7befa5d6bc858f3a37f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbf76cbd4d50f7befa5d6bc858f3a37f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbf76cbd4d50f7befa5d6bc858f3a37f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cbf76cbd4d50f7befa5d6bc858f3a37f,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_cbf76cbd4d50f7befa5d6bc858f3a37f == cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f);
        cache_frame_cbf76cbd4d50f7befa5d6bc858f3a37f = NULL;
    }

    assertFrameObject(frame_cbf76cbd4d50f7befa5d6bc858f3a37f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__6__all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    PyObject *par_where = python_pars[5];
    struct Nuitka_FrameObject *frame_d5b78735cf205fd79db1edde4eb45623;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d5b78735cf205fd79db1edde4eb45623 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d5b78735cf205fd79db1edde4eb45623)) {
        Py_XDECREF(cache_frame_d5b78735cf205fd79db1edde4eb45623);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5b78735cf205fd79db1edde4eb45623 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5b78735cf205fd79db1edde4eb45623 = MAKE_FUNCTION_FRAME(tstate, codeobj_d5b78735cf205fd79db1edde4eb45623, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d5b78735cf205fd79db1edde4eb45623->m_type_description == NULL);
    frame_d5b78735cf205fd79db1edde4eb45623 = cache_frame_d5b78735cf205fd79db1edde4eb45623;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d5b78735cf205fd79db1edde4eb45623);
    assert(Py_REFCNT(frame_d5b78735cf205fd79db1edde4eb45623) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_where);
        tmp_cmp_expr_left_1 = par_where;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_3 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_value_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_5 = par_keepdims;
        frame_d5b78735cf205fd79db1edde4eb45623->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_kw_call_arg_value_0_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_arg_value_1_1 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_arg_value_2_1 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_kw_call_arg_value_3_1 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_kw_call_arg_value_4_1 = par_keepdims;
        CHECK_OBJECT(par_where);
        tmp_kw_call_dict_value_0_1 = par_where;
        frame_d5b78735cf205fd79db1edde4eb45623->m_frame.f_lineno = 64;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[5]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d5b78735cf205fd79db1edde4eb45623, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5b78735cf205fd79db1edde4eb45623->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5b78735cf205fd79db1edde4eb45623, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5b78735cf205fd79db1edde4eb45623,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_d5b78735cf205fd79db1edde4eb45623 == cache_frame_d5b78735cf205fd79db1edde4eb45623) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d5b78735cf205fd79db1edde4eb45623);
        cache_frame_d5b78735cf205fd79db1edde4eb45623 = NULL;
    }

    assertFrameObject(frame_d5b78735cf205fd79db1edde4eb45623);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__7__count_reduce_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_keepdims = python_pars[2];
    PyObject *par_where = python_pars[3];
    PyObject *var_items = NULL;
    PyObject *var_ax = NULL;
    PyObject *var_broadcast_to = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8aa4d94e38421e6d4075b24911d75b48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8aa4d94e38421e6d4075b24911d75b48 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8aa4d94e38421e6d4075b24911d75b48)) {
        Py_XDECREF(cache_frame_8aa4d94e38421e6d4075b24911d75b48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8aa4d94e38421e6d4075b24911d75b48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8aa4d94e38421e6d4075b24911d75b48 = MAKE_FUNCTION_FRAME(tstate, codeobj_8aa4d94e38421e6d4075b24911d75b48, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8aa4d94e38421e6d4075b24911d75b48->m_type_description == NULL);
    frame_8aa4d94e38421e6d4075b24911d75b48 = cache_frame_8aa4d94e38421e6d4075b24911d75b48;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8aa4d94e38421e6d4075b24911d75b48);
    assert(Py_REFCNT(frame_8aa4d94e38421e6d4075b24911d75b48) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_where);
        tmp_cmp_expr_left_1 = par_where;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_axis);
        tmp_cmp_expr_left_2 = par_axis;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_arr);
        tmp_expression_value_1 = par_arr;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_tuple_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_axis;
            assert(old != NULL);
            par_axis = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_axis);
        tmp_isinstance_inst_1 = par_axis;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_axis);
        tmp_tuple_element_1 = par_axis;
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_1);
        {
            PyObject *old = par_axis;
            assert(old != NULL);
            par_axis = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8aa4d94e38421e6d4075b24911d75b48->m_frame.f_lineno = 74;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_items == NULL);
        var_items = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_axis);
        tmp_iter_arg_1 = par_axis;
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 75;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ax;
            var_ax = tmp_assign_source_6;
            Py_INCREF(var_ax);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        if (var_items == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_imult_expr_left_1 = var_items;
        if (par_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_arr;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[13]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ax);
        tmp_args_element_value_1 = var_ax;
        if (par_arr == NULL) {
            Py_DECREF(tmp_expression_value_2);
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = par_arr;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[7]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_8aa4d94e38421e6d4075b24911d75b48->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_subscript_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_imult_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_imult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        Py_DECREF(tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_imult_expr_left_1;
        var_items = tmp_assign_source_7;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 75;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[16];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[17];
        tmp_level_value_1 = mod_consts[18];
        frame_8aa4d94e38421e6d4075b24911d75b48->m_frame.f_lineno = 82;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[19],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_broadcast_to == NULL);
        var_broadcast_to = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_broadcast_to);
        tmp_called_value_3 = var_broadcast_to;
        CHECK_OBJECT(par_where);
        tmp_args_element_value_4 = par_where;
        CHECK_OBJECT(par_arr);
        tmp_expression_value_6 = par_arr;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[13]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8aa4d94e38421e6d4075b24911d75b48->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_6 = par_axis;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[9]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = Py_None;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_9 = par_keepdims;
        frame_8aa4d94e38421e6d4075b24911d75b48->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_items == NULL);
        var_items = tmp_assign_source_9;
    }
    branch_end_1:;
    if (var_items == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 86;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_items;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8aa4d94e38421e6d4075b24911d75b48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8aa4d94e38421e6d4075b24911d75b48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8aa4d94e38421e6d4075b24911d75b48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8aa4d94e38421e6d4075b24911d75b48,
        type_description_1,
        par_arr,
        par_axis,
        par_keepdims,
        par_where,
        var_items,
        var_ax,
        var_broadcast_to
    );


    // Release cached frame if used for exception.
    if (frame_8aa4d94e38421e6d4075b24911d75b48 == cache_frame_8aa4d94e38421e6d4075b24911d75b48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8aa4d94e38421e6d4075b24911d75b48);
        cache_frame_8aa4d94e38421e6d4075b24911d75b48 = NULL;
    }

    assertFrameObject(frame_8aa4d94e38421e6d4075b24911d75b48);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(var_items);
    var_items = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    Py_XDECREF(var_broadcast_to);
    var_broadcast_to = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(var_items);
    var_items = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    Py_XDECREF(var_broadcast_to);
    var_broadcast_to = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_arr);
    Py_DECREF(par_arr);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_arr);
    Py_DECREF(par_arr);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__8__clip_dep_is_scalar_nan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *var_ndim = NULL;
    struct Nuitka_FrameObject *frame_97d9554b3e2170e6917a5af6ed6b8d95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_97d9554b3e2170e6917a5af6ed6b8d95 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_97d9554b3e2170e6917a5af6ed6b8d95)) {
        Py_XDECREF(cache_frame_97d9554b3e2170e6917a5af6ed6b8d95);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97d9554b3e2170e6917a5af6ed6b8d95 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97d9554b3e2170e6917a5af6ed6b8d95 = MAKE_FUNCTION_FRAME(tstate, codeobj_97d9554b3e2170e6917a5af6ed6b8d95, module_numpy$core$_methods, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97d9554b3e2170e6917a5af6ed6b8d95->m_type_description == NULL);
    frame_97d9554b3e2170e6917a5af6ed6b8d95 = cache_frame_97d9554b3e2170e6917a5af6ed6b8d95;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_97d9554b3e2170e6917a5af6ed6b8d95);
    assert(Py_REFCNT(frame_97d9554b3e2170e6917a5af6ed6b8d95) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[20];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[21];
        tmp_level_value_1 = mod_consts[18];
        frame_97d9554b3e2170e6917a5af6ed6b8d95->m_frame.f_lineno = 93;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[7],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ndim == NULL);
        var_ndim = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_ndim);
        tmp_called_value_1 = var_ndim;
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        frame_97d9554b3e2170e6917a5af6ed6b8d95->m_frame.f_lineno = 94;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[18];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_2 = par_a;
        frame_97d9554b3e2170e6917a5af6ed6b8d95->m_frame.f_lineno = 97;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[23], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_97d9554b3e2170e6917a5af6ed6b8d95, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_97d9554b3e2170e6917a5af6ed6b8d95, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 96;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_97d9554b3e2170e6917a5af6ed6b8d95->m_frame) frame_97d9554b3e2170e6917a5af6ed6b8d95->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97d9554b3e2170e6917a5af6ed6b8d95, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97d9554b3e2170e6917a5af6ed6b8d95->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97d9554b3e2170e6917a5af6ed6b8d95, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97d9554b3e2170e6917a5af6ed6b8d95,
        type_description_1,
        par_a,
        var_ndim
    );


    // Release cached frame if used for exception.
    if (frame_97d9554b3e2170e6917a5af6ed6b8d95 == cache_frame_97d9554b3e2170e6917a5af6ed6b8d95) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97d9554b3e2170e6917a5af6ed6b8d95);
        cache_frame_97d9554b3e2170e6917a5af6ed6b8d95 = NULL;
    }

    assertFrameObject(frame_97d9554b3e2170e6917a5af6ed6b8d95);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ndim);
    Py_DECREF(var_ndim);
    var_ndim = NULL;
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

    Py_XDECREF(var_ndim);
    var_ndim = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__9__clip_dep_is_byte_swapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    struct Nuitka_FrameObject *frame_7c28014f7e671a1d94fc2c7fb8122a9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c)) {
        Py_XDECREF(cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c = MAKE_FUNCTION_FRAME(tstate, codeobj_7c28014f7e671a1d94fc2c7fb8122a9c, module_numpy$core$_methods, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c->m_type_description == NULL);
    frame_7c28014f7e671a1d94fc2c7fb8122a9c = cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c28014f7e671a1d94fc2c7fb8122a9c);
    assert(Py_REFCNT(frame_7c28014f7e671a1d94fc2c7fb8122a9c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_a);
        tmp_isinstance_inst_1 = par_a;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_a);
        tmp_expression_value_3 = par_a;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[26]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c28014f7e671a1d94fc2c7fb8122a9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c28014f7e671a1d94fc2c7fb8122a9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c28014f7e671a1d94fc2c7fb8122a9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c28014f7e671a1d94fc2c7fb8122a9c,
        type_description_1,
        par_a
    );


    // Release cached frame if used for exception.
    if (frame_7c28014f7e671a1d94fc2c7fb8122a9c == cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c);
        cache_frame_7c28014f7e671a1d94fc2c7fb8122a9c = NULL;
    }

    assertFrameObject(frame_7c28014f7e671a1d94fc2c7fb8122a9c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__10__clip_dep_invoke_with_casting(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_ufunc = python_pars[0];
    PyObject *par_out = python_pars[1];
    PyObject *par_casting = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_52deaf4fcb6d1125f837ab5907d5dbfa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa)) {
        Py_XDECREF(cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa = MAKE_FUNCTION_FRAME(tstate, codeobj_52deaf4fcb6d1125f837ab5907d5dbfa, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa->m_type_description == NULL);
    frame_52deaf4fcb6d1125f837ab5907d5dbfa = cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_52deaf4fcb6d1125f837ab5907d5dbfa);
    assert(Py_REFCNT(frame_52deaf4fcb6d1125f837ab5907d5dbfa) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_casting);
        tmp_cmp_expr_left_1 = par_casting;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(par_ufunc);
        tmp_dircall_arg1_1 = par_ufunc;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        tmp_dict_key_1 = mod_consts[27];
        CHECK_OBJECT(par_out);
        tmp_dict_value_1 = par_out;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[28];
        CHECK_OBJECT(par_casting);
        tmp_dict_value_1 = par_casting;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_2;
        CHECK_OBJECT(par_ufunc);
        tmp_dircall_arg1_2 = par_ufunc;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_2 = par_args;
        tmp_dict_key_2 = mod_consts[27];
        CHECK_OBJECT(par_out);
        tmp_dict_value_2 = par_out;
        tmp_dircall_arg3_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);
        Py_INCREF(tmp_dircall_arg4_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_52deaf4fcb6d1125f837ab5907d5dbfa, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_52deaf4fcb6d1125f837ab5907d5dbfa, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[33];
        CHECK_OBJECT(var_e);
        tmp_expression_value_3 = var_e;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[34]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_4 = var_e;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[35]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        frame_52deaf4fcb6d1125f837ab5907d5dbfa->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[37]);
        frame_52deaf4fcb6d1125f837ab5907d5dbfa->m_frame.f_lineno = 116;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_dircall_arg3_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dircall_arg4_3;
        CHECK_OBJECT(par_ufunc);
        tmp_dircall_arg1_3 = par_ufunc;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_3 = par_args;
        tmp_dict_key_3 = mod_consts[27];
        CHECK_OBJECT(par_out);
        tmp_dict_value_3 = par_out;
        tmp_dircall_arg3_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[28];
        tmp_dict_value_3 = mod_consts[38];
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_3 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_3);
        Py_INCREF(tmp_dircall_arg2_3);
        Py_INCREF(tmp_dircall_arg4_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_return_handler_2;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 112;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_52deaf4fcb6d1125f837ab5907d5dbfa->m_frame) frame_52deaf4fcb6d1125f837ab5907d5dbfa->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52deaf4fcb6d1125f837ab5907d5dbfa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52deaf4fcb6d1125f837ab5907d5dbfa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52deaf4fcb6d1125f837ab5907d5dbfa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52deaf4fcb6d1125f837ab5907d5dbfa,
        type_description_1,
        par_ufunc,
        par_out,
        par_casting,
        par_args,
        par_kwargs,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_52deaf4fcb6d1125f837ab5907d5dbfa == cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa);
        cache_frame_52deaf4fcb6d1125f837ab5907d5dbfa = NULL;
    }

    assertFrameObject(frame_52deaf4fcb6d1125f837ab5907d5dbfa);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_casting);
    Py_DECREF(par_casting);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_casting);
    Py_DECREF(par_casting);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__11__clip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_min = python_pars[1];
    PyObject *par_max = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_casting = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    nuitka_bool var_using_deprecated_nan = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_8afff6f8936ef176f6ab0edae13a30e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8afff6f8936ef176f6ab0edae13a30e3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8afff6f8936ef176f6ab0edae13a30e3)) {
        Py_XDECREF(cache_frame_8afff6f8936ef176f6ab0edae13a30e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8afff6f8936ef176f6ab0edae13a30e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8afff6f8936ef176f6ab0edae13a30e3 = MAKE_FUNCTION_FRAME(tstate, codeobj_8afff6f8936ef176f6ab0edae13a30e3, module_numpy$core$_methods, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8afff6f8936ef176f6ab0edae13a30e3->m_type_description == NULL);
    frame_8afff6f8936ef176f6ab0edae13a30e3 = cache_frame_8afff6f8936ef176f6ab0edae13a30e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8afff6f8936ef176f6ab0edae13a30e3);
    assert(Py_REFCNT(frame_8afff6f8936ef176f6ab0edae13a30e3) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_min);
        tmp_cmp_expr_left_1 = par_min;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_max);
        tmp_cmp_expr_left_2 = par_max;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[39];
        frame_8afff6f8936ef176f6ab0edae13a30e3->m_frame.f_lineno = 127;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 127;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooob";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        frame_8afff6f8936ef176f6ab0edae13a30e3->m_frame.f_lineno = 132;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out);
        tmp_args_element_value_2 = par_out;
        frame_8afff6f8936ef176f6ab0edae13a30e3->m_frame.f_lineno = 132;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_FALSE;
        var_using_deprecated_nan = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_min);
        tmp_args_element_value_3 = par_min;
        frame_8afff6f8936ef176f6ab0edae13a30e3->m_frame.f_lineno = 134;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 134;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[42];
        {
            PyObject *old = par_min;
            assert(old != NULL);
            par_min = tmp_assign_source_2;
            Py_INCREF(par_min);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_TRUE;
        var_using_deprecated_nan = tmp_assign_source_3;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_max);
        tmp_args_element_value_4 = par_max;
        frame_8afff6f8936ef176f6ab0edae13a30e3->m_frame.f_lineno = 137;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 137;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[43];
        {
            PyObject *old = par_max;
            assert(old != NULL);
            par_max = tmp_assign_source_4;
            Py_INCREF(par_max);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        var_using_deprecated_nan = tmp_assign_source_5;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        assert(var_using_deprecated_nan != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_5 = var_using_deprecated_nan == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[44];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooob";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[37]);
        frame_8afff6f8936ef176f6ab0edae13a30e3->m_frame.f_lineno = 141;
        tmp_call_result_3 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    branch_no_2:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (par_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = par_min;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[47]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_a);
        tmp_tuple_element_2 = par_a;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        if (par_max == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 154;
            type_description_1 = "oooooob";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = par_max;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_key_1 = mod_consts[27];
        if (par_out == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 154;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = par_out;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[28];
        CHECK_OBJECT(par_casting);
        tmp_dict_value_1 = par_casting;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (par_max == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 155;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = par_max;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[49]);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_a);
        tmp_tuple_element_3 = par_a;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_3);
        if (par_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 157;
            type_description_1 = "oooooob";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_3 = par_min;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_dircall_arg2_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_dict_key_2 = mod_consts[27];
        if (par_out == NULL) {
            Py_DECREF(tmp_dircall_arg2_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 157;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = par_out;
        tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[28];
        CHECK_OBJECT(par_casting);
        tmp_dict_value_2 = par_casting;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg4_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg3_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dircall_arg4_3;
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dircall_arg1_3 == NULL)) {
            tmp_dircall_arg1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dircall_arg1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[50]);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_3 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM(tmp_dircall_arg2_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_a);
        tmp_tuple_element_4 = par_a;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 1, tmp_tuple_element_4);
        if (par_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 160;
            type_description_1 = "oooooob";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_4 = par_min;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 2, tmp_tuple_element_4);
        if (par_max == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 160;
            type_description_1 = "oooooob";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_4 = par_max;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 3, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_dircall_arg2_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_key_3 = mod_consts[27];
        if (par_out == NULL) {
            Py_DECREF(tmp_dircall_arg2_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 160;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = par_out;
        tmp_dircall_arg3_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[28];
        CHECK_OBJECT(par_casting);
        tmp_dict_value_3 = par_casting;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_3 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_3);
        Py_INCREF(tmp_dircall_arg4_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_7:;
    branch_end_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8afff6f8936ef176f6ab0edae13a30e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8afff6f8936ef176f6ab0edae13a30e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8afff6f8936ef176f6ab0edae13a30e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8afff6f8936ef176f6ab0edae13a30e3,
        type_description_1,
        par_a,
        par_min,
        par_max,
        par_out,
        par_casting,
        par_kwargs,
        (int)var_using_deprecated_nan
    );


    // Release cached frame if used for exception.
    if (frame_8afff6f8936ef176f6ab0edae13a30e3 == cache_frame_8afff6f8936ef176f6ab0edae13a30e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8afff6f8936ef176f6ab0edae13a30e3);
        cache_frame_8afff6f8936ef176f6ab0edae13a30e3 = NULL;
    }

    assertFrameObject(frame_8afff6f8936ef176f6ab0edae13a30e3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_min);
    par_min = NULL;
    Py_XDECREF(par_max);
    par_max = NULL;
    var_using_deprecated_nan = NUITKA_BOOL_UNASSIGNED;
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

    Py_XDECREF(par_min);
    par_min = NULL;
    Py_XDECREF(par_max);
    par_max = NULL;
    var_using_deprecated_nan = NUITKA_BOOL_UNASSIGNED;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_casting);
    Py_DECREF(par_casting);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_casting);
    Py_DECREF(par_casting);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__12__mean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    PyObject *par_where = python_pars[5];
    PyObject *var_arr = NULL;
    nuitka_bool var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_rcount = NULL;
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_42adb628296338a53589faee05d491ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_42adb628296338a53589faee05d491ea = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_42adb628296338a53589faee05d491ea)) {
        Py_XDECREF(cache_frame_42adb628296338a53589faee05d491ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42adb628296338a53589faee05d491ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42adb628296338a53589faee05d491ea = MAKE_FUNCTION_FRAME(tstate, codeobj_42adb628296338a53589faee05d491ea, module_numpy$core$_methods, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_42adb628296338a53589faee05d491ea->m_type_description == NULL);
    frame_42adb628296338a53589faee05d491ea = cache_frame_42adb628296338a53589faee05d491ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_42adb628296338a53589faee05d491ea);
    assert(Py_REFCNT(frame_42adb628296338a53589faee05d491ea) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 163;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        assert(var_arr == NULL);
        var_arr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_FALSE;
        var_is_float16_result = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_kw_call_arg_value_0_1 = var_arr;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_arg_value_1_1 = par_axis;
        CHECK_OBJECT(par_keepdims);
        tmp_kw_call_dict_value_0_1 = par_keepdims;
        CHECK_OBJECT(par_where);
        tmp_kw_call_dict_value_1_1 = par_where;
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 167;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[53]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        assert(var_rcount == NULL);
        var_rcount = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_kwargs_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_where);
        tmp_cmp_expr_left_1 = par_where;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_rcount);
        tmp_cmp_expr_left_2 = var_rcount;
        tmp_cmp_expr_right_2 = mod_consts[18];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rcount);
        tmp_cmp_expr_left_3 = var_rcount;
        tmp_cmp_expr_right_3 = mod_consts[18];
        tmp_tuple_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[54]);
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 168;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 168;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        condexpr_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[55];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooboo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[37]);
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 169;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_4 = par_dtype;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_arr);
        tmp_expression_value_3 = var_arr;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_issubclass_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_1);

            exception_lineno = 173;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[58]);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_1);

            exception_lineno = 173;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_issubclass_classes_1, 0, tmp_tuple_element_3);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "oooooooboo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[59]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "oooooooboo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_issubclass_classes_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_issubclass_cls_1);
        Py_DECREF(tmp_issubclass_classes_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        Py_DECREF(tmp_issubclass_cls_1);
        Py_DECREF(tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 174;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[25],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_issubclass_cls_2;
        PyObject *tmp_issubclass_classes_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_arr);
        tmp_expression_value_7 = var_arr;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[25]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[57]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_issubclass_cls_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_2);

            exception_lineno = 175;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[61]);
        if (tmp_issubclass_classes_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_2);

            exception_lineno = 175;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
        Py_DECREF(tmp_issubclass_cls_2);
        Py_DECREF(tmp_issubclass_classes_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 176;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[25],
            PyTuple_GET_ITEM(mod_consts[62], 0)
        );

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        var_is_float16_result = tmp_assign_source_6;
    }
    branch_no_4:;
    branch_end_3:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_kw_call_arg_value_0_2 = var_arr;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_arg_value_1_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_arg_value_2_1 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_kw_call_arg_value_3_1 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_kw_call_arg_value_4_1 = par_keepdims;
        CHECK_OBJECT(par_where);
        tmp_kw_call_dict_value_0_2 = par_where;
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 179;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[5]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_ret);
        tmp_isinstance_inst_1 = var_ret;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[24]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[63]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_kw_call_arg_value_0_3 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_kw_call_arg_value_1_3 = var_rcount;
        CHECK_OBJECT(var_ret);
        tmp_kw_call_dict_value_0_3 = var_ret;
        tmp_kw_call_dict_value_1_2 = mod_consts[38];
        tmp_kw_call_dict_value_2_1 = Py_False;
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 181;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts[64]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        assert(var_is_float16_result != NUITKA_BOOL_UNASSIGNED);
        tmp_and_left_value_1 = var_is_float16_result == NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_out);
        tmp_cmp_expr_left_5 = par_out;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_arr);
        tmp_expression_value_11 = var_arr;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[25]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_args_element_value_2 = var_ret;
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 184;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[57], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_ret);
        tmp_expression_value_12 = var_ret;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        bool tmp_condition_result_9;
        assert(var_is_float16_result != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_9 = var_is_float16_result == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(var_arr);
        tmp_expression_value_14 = var_arr;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[25]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[57]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_truediv_expr_left_1 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_truediv_expr_right_1 = var_rcount;
        tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 187;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 187;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(var_ret);
        tmp_expression_value_16 = var_ret;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[25]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[57]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_truediv_expr_left_2 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_truediv_expr_right_2 = var_rcount;
        tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 189;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        frame_42adb628296338a53589faee05d491ea->m_frame.f_lineno = 189;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_end_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        CHECK_OBJECT(var_ret);
        tmp_truediv_expr_left_3 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_truediv_expr_right_3 = var_rcount;
        tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_end_7:;
    branch_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_42adb628296338a53589faee05d491ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42adb628296338a53589faee05d491ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42adb628296338a53589faee05d491ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42adb628296338a53589faee05d491ea,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_where,
        var_arr,
        (int)var_is_float16_result,
        var_rcount,
        var_ret
    );


    // Release cached frame if used for exception.
    if (frame_42adb628296338a53589faee05d491ea == cache_frame_42adb628296338a53589faee05d491ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_42adb628296338a53589faee05d491ea);
        cache_frame_42adb628296338a53589faee05d491ea = NULL;
    }

    assertFrameObject(frame_42adb628296338a53589faee05d491ea);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ret);
    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_arr);
    Py_DECREF(var_arr);
    var_arr = NULL;
    assert(var_is_float16_result != NUITKA_BOOL_UNASSIGNED);
    var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_rcount);
    var_rcount = NULL;
    CHECK_OBJECT(var_ret);
    Py_DECREF(var_ret);
    var_ret = NULL;
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

    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_rcount);
    var_rcount = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__13__var(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_ddof = python_pars[4];
    PyObject *par_keepdims = python_pars[5];
    PyObject *par_where = python_pars[6];
    PyObject *var_arr = NULL;
    PyObject *var_rcount = NULL;
    PyObject *var_arrmean = NULL;
    PyObject *var_div = NULL;
    PyObject *var_x = NULL;
    PyObject *var_xv = NULL;
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_1dc00138c25aa94787fa01fc2ff85c12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1dc00138c25aa94787fa01fc2ff85c12 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1dc00138c25aa94787fa01fc2ff85c12)) {
        Py_XDECREF(cache_frame_1dc00138c25aa94787fa01fc2ff85c12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1dc00138c25aa94787fa01fc2ff85c12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1dc00138c25aa94787fa01fc2ff85c12 = MAKE_FUNCTION_FRAME(tstate, codeobj_1dc00138c25aa94787fa01fc2ff85c12, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1dc00138c25aa94787fa01fc2ff85c12->m_type_description == NULL);
    frame_1dc00138c25aa94787fa01fc2ff85c12 = cache_frame_1dc00138c25aa94787fa01fc2ff85c12;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1dc00138c25aa94787fa01fc2ff85c12);
    assert(Py_REFCNT(frame_1dc00138c25aa94787fa01fc2ff85c12) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 197;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arr == NULL);
        var_arr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_kw_call_arg_value_0_1 = var_arr;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_arg_value_1_1 = par_axis;
        CHECK_OBJECT(par_keepdims);
        tmp_kw_call_dict_value_0_1 = par_keepdims;
        CHECK_OBJECT(par_where);
        tmp_kw_call_dict_value_1_1 = par_where;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 199;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[53]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rcount == NULL);
        var_rcount = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_kwargs_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_where);
        tmp_cmp_expr_left_1 = par_where;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_ddof);
        tmp_cmp_expr_left_2 = par_ddof;
        CHECK_OBJECT(var_rcount);
        tmp_cmp_expr_right_2 = var_rcount;
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ddof);
        tmp_cmp_expr_left_3 = par_ddof;
        CHECK_OBJECT(var_rcount);
        tmp_cmp_expr_right_3 = var_rcount;
        tmp_tuple_element_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[54]);
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 201;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        condexpr_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[65];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[37]);
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 202;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_4 = par_dtype;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_arr);
        tmp_expression_value_3 = var_arr;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_issubclass_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_1);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[58]);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_1);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_issubclass_classes_1, 0, tmp_tuple_element_3);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[59]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_issubclass_classes_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_issubclass_cls_1);
        Py_DECREF(tmp_issubclass_classes_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        Py_DECREF(tmp_issubclass_cls_1);
        Py_DECREF(tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 207;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[25],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_kw_call_arg_value_0_2 = var_arr;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_arg_value_1_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_arg_value_2_1 = par_dtype;
        tmp_kw_call_dict_value_0_2 = Py_True;
        CHECK_OBJECT(par_where);
        tmp_kw_call_dict_value_1_2 = par_where;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 212;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[53]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arrmean == NULL);
        var_arrmean = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_rcount);
        tmp_expression_value_6 = var_rcount;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[7]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[18];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(var_rcount);
        tmp_assign_source_5 = var_rcount;
        assert(var_div == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_div = tmp_assign_source_5;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_rcount);
        tmp_expression_value_7 = var_rcount;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[66]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arrmean);
        tmp_expression_value_8 = var_arrmean;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[13]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 220;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_div == NULL);
        var_div = tmp_assign_source_6;
    }
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_9;
        if (var_arrmean == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = var_arrmean;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[24]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[63]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_arrmean == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_3 = var_arrmean;
        CHECK_OBJECT(var_div);
        tmp_kw_call_arg_value_1_3 = var_div;
        if (var_arrmean == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_3 = var_arrmean;
        tmp_kw_call_dict_value_1_3 = mod_consts[38];
        tmp_kw_call_dict_value_2_1 = Py_False;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 222;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[64]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arrmean;
            var_arrmean = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        if (var_arrmean == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_arrmean;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[25]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[57]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_arrmean == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_left_1 = var_arrmean;
        CHECK_OBJECT(var_rcount);
        tmp_truediv_expr_right_1 = var_rcount;
        tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 225;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arrmean;
            var_arrmean = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_sub_expr_left_1 = var_arr;
        CHECK_OBJECT(var_arrmean);
        tmp_sub_expr_right_1 = var_arrmean;
        tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 230;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_issubclass_cls_2;
        PyObject *tmp_issubclass_classes_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_arr);
        tmp_expression_value_14 = var_arr;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[25]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[57]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_issubclass_cls_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_2);

            exception_lineno = 232;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[68]);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_2);

            exception_lineno = 232;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyTuple_SET_ITEM(tmp_issubclass_classes_2, 0, tmp_tuple_element_4);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[58]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_issubclass_classes_2, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_issubclass_cls_2);
        Py_DECREF(tmp_issubclass_classes_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
        Py_DECREF(tmp_issubclass_cls_2);
        Py_DECREF(tmp_issubclass_classes_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[69]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_kw_call_arg_value_0_4 = var_x;
        CHECK_OBJECT(var_x);
        tmp_kw_call_arg_value_1_4 = var_x;
        CHECK_OBJECT(var_x);
        tmp_kw_call_dict_value_0_4 = var_x;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 233;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert(old != NULL);
            var_x = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(var_x);
        tmp_expression_value_18 = var_x;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[25]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
            tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 235;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(var_x);
        tmp_expression_value_19 = var_x;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[72]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_expression_value_21 = var_x;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[25]);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_kw_call_value_0_1, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[73];
        PyTuple_SET_ITEM0(tmp_kw_call_value_0_1, 1, tmp_tuple_element_5);
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 236;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xv == NULL);
        var_xv = tmp_assign_source_11;
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[69]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xv);
        tmp_kw_call_arg_value_0_5 = var_xv;
        CHECK_OBJECT(var_xv);
        tmp_kw_call_arg_value_1_5 = var_xv;
        CHECK_OBJECT(var_xv);
        tmp_kw_call_dict_value_0_5 = var_xv;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 237;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[75]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xv);
        tmp_expression_value_25 = var_xv;
        tmp_subscript_value_2 = mod_consts[76];
        tmp_kw_call_arg_value_0_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_2);
        if (tmp_kw_call_arg_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xv);
        tmp_expression_value_26 = var_xv;
        tmp_subscript_value_3 = mod_consts[77];
        tmp_kw_call_arg_value_1_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_3);
        if (tmp_kw_call_arg_value_1_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_kw_call_arg_value_0_6);

            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_expression_value_27 = var_x;
        tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[78]);
        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_kw_call_arg_value_0_6);
            Py_DECREF(tmp_kw_call_arg_value_1_6);

            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 238;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_expression_value_23 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_kw_call_arg_value_0_6);
        Py_DECREF(tmp_kw_call_arg_value_1_6);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[78]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert(old != NULL);
            var_x = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_dict_value_0_7;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[69]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_kw_call_arg_value_0_7 = var_x;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_args_element_value_5 = var_x;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 242;
        tmp_kw_call_arg_value_1_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[79], tmp_args_element_value_5);
        if (tmp_kw_call_arg_value_1_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_kw_call_dict_value_0_7 = var_x;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 242;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_expression_value_28 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_arg_value_1_7);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[78]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert(old != NULL);
            var_x = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    branch_end_6:;
    branch_end_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_arg_value_1_8;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_kw_call_dict_value_1_4;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_kw_call_arg_value_0_8 = var_x;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_arg_value_1_8 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_arg_value_2_2 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_kw_call_arg_value_3_1 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_kw_call_dict_value_0_8 = par_keepdims;
        CHECK_OBJECT(par_where);
        tmp_kw_call_dict_value_1_4 = par_where;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 244;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_8, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_4};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts[53]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[49]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rcount);
        tmp_sub_expr_left_2 = var_rcount;
        CHECK_OBJECT(par_ddof);
        tmp_sub_expr_right_2 = par_ddof;
        tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 247;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[18];
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rcount;
            assert(old != NULL);
            var_rcount = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(var_ret);
        tmp_isinstance_inst_2 = var_ret;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[24]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_arg_value_1_9;
        PyObject *tmp_kw_call_dict_value_0_9;
        PyObject *tmp_kw_call_dict_value_1_5;
        PyObject *tmp_kw_call_dict_value_2_2;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[63]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_kw_call_arg_value_0_9 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_kw_call_arg_value_1_9 = var_rcount;
        CHECK_OBJECT(var_ret);
        tmp_kw_call_dict_value_0_9 = var_ret;
        tmp_kw_call_dict_value_1_5 = mod_consts[38];
        tmp_kw_call_dict_value_2_2 = Py_False;
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 251;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_9};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_9, tmp_kw_call_dict_value_1_5, tmp_kw_call_dict_value_2_2};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts[64]);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(var_ret);
        tmp_expression_value_33 = var_ret;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(var_ret);
        tmp_expression_value_35 = var_ret;
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[25]);
        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[57]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_truediv_expr_left_2 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_truediv_expr_right_2 = var_rcount;
        tmp_args_element_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 254;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame.f_lineno = 254;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        CHECK_OBJECT(var_ret);
        tmp_truediv_expr_left_3 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_truediv_expr_right_3 = var_rcount;
        tmp_assign_source_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    branch_end_8:;
    branch_end_7:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1dc00138c25aa94787fa01fc2ff85c12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1dc00138c25aa94787fa01fc2ff85c12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1dc00138c25aa94787fa01fc2ff85c12, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1dc00138c25aa94787fa01fc2ff85c12,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        par_where,
        var_arr,
        var_rcount,
        var_arrmean,
        var_div,
        var_x,
        var_xv,
        var_ret
    );


    // Release cached frame if used for exception.
    if (frame_1dc00138c25aa94787fa01fc2ff85c12 == cache_frame_1dc00138c25aa94787fa01fc2ff85c12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1dc00138c25aa94787fa01fc2ff85c12);
        cache_frame_1dc00138c25aa94787fa01fc2ff85c12 = NULL;
    }

    assertFrameObject(frame_1dc00138c25aa94787fa01fc2ff85c12);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ret);
    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(var_arr);
    Py_DECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_rcount);
    var_rcount = NULL;
    CHECK_OBJECT(var_arrmean);
    Py_DECREF(var_arrmean);
    var_arrmean = NULL;
    CHECK_OBJECT(var_div);
    Py_DECREF(var_div);
    var_div = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_xv);
    var_xv = NULL;
    CHECK_OBJECT(var_ret);
    Py_DECREF(var_ret);
    var_ret = NULL;
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

    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_rcount);
    var_rcount = NULL;
    Py_XDECREF(var_arrmean);
    var_arrmean = NULL;
    Py_XDECREF(var_div);
    var_div = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_xv);
    var_xv = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__14__std(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_ddof = python_pars[4];
    PyObject *par_keepdims = python_pars[5];
    PyObject *par_where = python_pars[6];
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_440653b12d8f0471dbae30932f96fdb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_440653b12d8f0471dbae30932f96fdb7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_440653b12d8f0471dbae30932f96fdb7)) {
        Py_XDECREF(cache_frame_440653b12d8f0471dbae30932f96fdb7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_440653b12d8f0471dbae30932f96fdb7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_440653b12d8f0471dbae30932f96fdb7 = MAKE_FUNCTION_FRAME(tstate, codeobj_440653b12d8f0471dbae30932f96fdb7, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_440653b12d8f0471dbae30932f96fdb7->m_type_description == NULL);
    frame_440653b12d8f0471dbae30932f96fdb7 = cache_frame_440653b12d8f0471dbae30932f96fdb7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_440653b12d8f0471dbae30932f96fdb7);
    assert(Py_REFCNT(frame_440653b12d8f0471dbae30932f96fdb7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_kw_call_arg_value_0_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_dict_value_0_1 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_1_1 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_kw_call_dict_value_2_1 = par_out;
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_dict_value_3_1 = par_ddof;
        CHECK_OBJECT(par_keepdims);
        tmp_kw_call_dict_value_4_1 = par_keepdims;
        CHECK_OBJECT(par_where);
        tmp_kw_call_dict_value_5_1 = par_where;
        frame_440653b12d8f0471dbae30932f96fdb7->m_frame.f_lineno = 262;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[81]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_ret);
        tmp_isinstance_inst_1 = var_ret;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[82]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_kw_call_arg_value_0_2 = var_ret;
        CHECK_OBJECT(var_ret);
        tmp_kw_call_dict_value_0_2 = var_ret;
        frame_440653b12d8f0471dbae30932f96fdb7->m_frame.f_lineno = 266;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ret);
        tmp_expression_value_3 = var_ret;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_ret);
        tmp_expression_value_5 = var_ret;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[25]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[57]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 268;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_args_element_value_2 = var_ret;
        frame_440653b12d8f0471dbae30932f96fdb7->m_frame.f_lineno = 268;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[82], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 268;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_440653b12d8f0471dbae30932f96fdb7->m_frame.f_lineno = 268;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_args_element_value_3 = var_ret;
        frame_440653b12d8f0471dbae30932f96fdb7->m_frame.f_lineno = 270;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[82], tmp_args_element_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_440653b12d8f0471dbae30932f96fdb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_440653b12d8f0471dbae30932f96fdb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_440653b12d8f0471dbae30932f96fdb7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_440653b12d8f0471dbae30932f96fdb7,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        par_where,
        var_ret
    );


    // Release cached frame if used for exception.
    if (frame_440653b12d8f0471dbae30932f96fdb7 == cache_frame_440653b12d8f0471dbae30932f96fdb7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_440653b12d8f0471dbae30932f96fdb7);
        cache_frame_440653b12d8f0471dbae30932f96fdb7 = NULL;
    }

    assertFrameObject(frame_440653b12d8f0471dbae30932f96fdb7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ret);
    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ret);
    Py_DECREF(var_ret);
    var_ret = NULL;
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

    Py_XDECREF(var_ret);
    var_ret = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__15__ptp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_out = python_pars[2];
    PyObject *par_keepdims = python_pars[3];
    struct Nuitka_FrameObject *frame_cf9d31bcd31cb38804e80f1d171d49e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf9d31bcd31cb38804e80f1d171d49e6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf9d31bcd31cb38804e80f1d171d49e6)) {
        Py_XDECREF(cache_frame_cf9d31bcd31cb38804e80f1d171d49e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf9d31bcd31cb38804e80f1d171d49e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf9d31bcd31cb38804e80f1d171d49e6 = MAKE_FUNCTION_FRAME(tstate, codeobj_cf9d31bcd31cb38804e80f1d171d49e6, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf9d31bcd31cb38804e80f1d171d49e6->m_type_description == NULL);
    frame_cf9d31bcd31cb38804e80f1d171d49e6 = cache_frame_cf9d31bcd31cb38804e80f1d171d49e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cf9d31bcd31cb38804e80f1d171d49e6);
    assert(Py_REFCNT(frame_cf9d31bcd31cb38804e80f1d171d49e6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[83]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_2 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_3 = par_axis;
        tmp_args_element_value_4 = Py_None;
        CHECK_OBJECT(par_out);
        tmp_args_element_value_5 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_6 = par_keepdims;
        frame_cf9d31bcd31cb38804e80f1d171d49e6->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_8 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_9 = par_axis;
        tmp_args_element_value_10 = Py_None;
        tmp_args_element_value_11 = Py_None;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_value_12 = par_keepdims;
        frame_cf9d31bcd31cb38804e80f1d171d49e6->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out);
        tmp_args_element_value_13 = par_out;
        frame_cf9d31bcd31cb38804e80f1d171d49e6->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_7, tmp_args_element_value_13};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf9d31bcd31cb38804e80f1d171d49e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf9d31bcd31cb38804e80f1d171d49e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf9d31bcd31cb38804e80f1d171d49e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf9d31bcd31cb38804e80f1d171d49e6,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims
    );


    // Release cached frame if used for exception.
    if (frame_cf9d31bcd31cb38804e80f1d171d49e6 == cache_frame_cf9d31bcd31cb38804e80f1d171d49e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf9d31bcd31cb38804e80f1d171d49e6);
        cache_frame_cf9d31bcd31cb38804e80f1d171d49e6 = NULL;
    }

    assertFrameObject(frame_cf9d31bcd31cb38804e80f1d171d49e6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__16__dump(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_protocol = python_pars[2];
    PyObject *var_ctx = NULL;
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_abd3d18ceb988ba2ea8d5b1097385daf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_abd3d18ceb988ba2ea8d5b1097385daf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_abd3d18ceb988ba2ea8d5b1097385daf)) {
        Py_XDECREF(cache_frame_abd3d18ceb988ba2ea8d5b1097385daf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_abd3d18ceb988ba2ea8d5b1097385daf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_abd3d18ceb988ba2ea8d5b1097385daf = MAKE_FUNCTION_FRAME(tstate, codeobj_abd3d18ceb988ba2ea8d5b1097385daf, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_abd3d18ceb988ba2ea8d5b1097385daf->m_type_description == NULL);
    frame_abd3d18ceb988ba2ea8d5b1097385daf = cache_frame_abd3d18ceb988ba2ea8d5b1097385daf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_abd3d18ceb988ba2ea8d5b1097385daf);
    assert(Py_REFCNT(frame_abd3d18ceb988ba2ea8d5b1097385daf) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_file);
        tmp_expression_value_1 = par_file;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[84]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_args_element_value_1 = par_file;
        frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = 283;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_open_mode_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_args_element_value_2 = par_file;
        frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = 285;
        tmp_open_filename_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_open_filename_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_open_mode_1 = mod_consts[87];
        tmp_assign_source_2 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_ctx);
        tmp_assign_source_3 = var_ctx;
        assert(tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_with_1__source = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[88]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = 286;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[89]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_7 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_f = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[91]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(var_f);
        tmp_kw_call_arg_value_1_1 = var_f;
        CHECK_OBJECT(par_protocol);
        tmp_kw_call_dict_value_0_1 = par_protocol;
        frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = 287;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[92]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_abd3d18ceb988ba2ea8d5b1097385daf, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_abd3d18ceb988ba2ea8d5b1097385daf, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_5 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 287;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame) frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 286;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame) frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
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

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = 287;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[93]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame.f_lineno = 287;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_7, mod_consts[93]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
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

    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_abd3d18ceb988ba2ea8d5b1097385daf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_abd3d18ceb988ba2ea8d5b1097385daf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_abd3d18ceb988ba2ea8d5b1097385daf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_abd3d18ceb988ba2ea8d5b1097385daf,
        type_description_1,
        par_self,
        par_file,
        par_protocol,
        var_ctx,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_abd3d18ceb988ba2ea8d5b1097385daf == cache_frame_abd3d18ceb988ba2ea8d5b1097385daf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_abd3d18ceb988ba2ea8d5b1097385daf);
        cache_frame_abd3d18ceb988ba2ea8d5b1097385daf = NULL;
    }

    assertFrameObject(frame_abd3d18ceb988ba2ea8d5b1097385daf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_protocol);
    Py_DECREF(par_protocol);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_protocol);
    Py_DECREF(par_protocol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function__17__dumps(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_protocol = python_pars[1];
    struct Nuitka_FrameObject *frame_d7d963ce6bfcd6bbd78bacb081b8ef27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27)) {
        Py_XDECREF(cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27 = MAKE_FUNCTION_FRAME(tstate, codeobj_d7d963ce6bfcd6bbd78bacb081b8ef27, module_numpy$core$_methods, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27->m_type_description == NULL);
    frame_d7d963ce6bfcd6bbd78bacb081b8ef27 = cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d7d963ce6bfcd6bbd78bacb081b8ef27);
    assert(Py_REFCNT(frame_d7d963ce6bfcd6bbd78bacb081b8ef27) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_protocol);
        tmp_kw_call_dict_value_0_1 = par_protocol;
        frame_d7d963ce6bfcd6bbd78bacb081b8ef27->m_frame.f_lineno = 290;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[92]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7d963ce6bfcd6bbd78bacb081b8ef27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7d963ce6bfcd6bbd78bacb081b8ef27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7d963ce6bfcd6bbd78bacb081b8ef27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7d963ce6bfcd6bbd78bacb081b8ef27,
        type_description_1,
        par_self,
        par_protocol
    );


    // Release cached frame if used for exception.
    if (frame_d7d963ce6bfcd6bbd78bacb081b8ef27 == cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27);
        cache_frame_d7d963ce6bfcd6bbd78bacb081b8ef27 = NULL;
    }

    assertFrameObject(frame_d7d963ce6bfcd6bbd78bacb081b8ef27);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_protocol);
    Py_DECREF(par_protocol);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_protocol);
    Py_DECREF(par_protocol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__10__clip_dep_invoke_with_casting(PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__10__clip_dep_invoke_with_casting,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52deaf4fcb6d1125f837ab5907d5dbfa,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__11__clip(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__11__clip,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8afff6f8936ef176f6ab0edae13a30e3,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__12__mean(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__12__mean,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_42adb628296338a53589faee05d491ea,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__13__var(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__13__var,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1dc00138c25aa94787fa01fc2ff85c12,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__14__std(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__14__std,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_440653b12d8f0471dbae30932f96fdb7,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__15__ptp(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__15__ptp,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf9d31bcd31cb38804e80f1d171d49e6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__16__dump(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__16__dump,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_abd3d18ceb988ba2ea8d5b1097385daf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__17__dumps(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__17__dumps,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7d963ce6bfcd6bbd78bacb081b8ef27,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__1__amax(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__1__amax,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65e7bb1d9154f358017a66e030487755,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__2__amin(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__2__amin,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_febd0816e93e53220d43bf72ce7bf94e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__3__sum(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__3__sum,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9857f27f6ffcc5857050ad2220bcc8e9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__4__prod(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__4__prod,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e9b5f6d0e32172099de9785060502e8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__5__any(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__5__any,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cbf76cbd4d50f7befa5d6bc858f3a37f,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__6__all(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__6__all,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d5b78735cf205fd79db1edde4eb45623,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__7__count_reduce_items(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__7__count_reduce_items,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8aa4d94e38421e6d4075b24911d75b48,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__8__clip_dep_is_scalar_nan() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__8__clip_dep_is_scalar_nan,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_97d9554b3e2170e6917a5af6ed6b8d95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function__9__clip_dep_is_byte_swapped() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function__9__clip_dep_is_byte_swapped,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c28014f7e671a1d94fc2c7fb8122a9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_numpy$core$_methods[] = {
    impl_numpy$core$_methods$$$function__1__amax,
    impl_numpy$core$_methods$$$function__2__amin,
    impl_numpy$core$_methods$$$function__3__sum,
    impl_numpy$core$_methods$$$function__4__prod,
    impl_numpy$core$_methods$$$function__5__any,
    impl_numpy$core$_methods$$$function__6__all,
    impl_numpy$core$_methods$$$function__7__count_reduce_items,
    impl_numpy$core$_methods$$$function__8__clip_dep_is_scalar_nan,
    impl_numpy$core$_methods$$$function__9__clip_dep_is_byte_swapped,
    impl_numpy$core$_methods$$$function__10__clip_dep_invoke_with_casting,
    impl_numpy$core$_methods$$$function__11__clip,
    impl_numpy$core$_methods$$$function__12__mean,
    impl_numpy$core$_methods$$$function__13__var,
    impl_numpy$core$_methods$$$function__14__std,
    impl_numpy$core$_methods$$$function__15__ptp,
    impl_numpy$core$_methods$$$function__16__dump,
    impl_numpy$core$_methods$$$function__17__dumps,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_numpy$core$_methods);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_numpy$core$_methods,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_numpy$core$_methods,
        sizeof(function_table_numpy$core$_methods) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_numpy$core$_methods(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$core$_methods");

    // Store the module for future use.
    module_numpy$core$_methods = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$core$_methods: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$core$_methods: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnumpy$core$_methods\n");

    moduledict_numpy$core$_methods = MODULE_DICT(module_numpy$core$_methods);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$core$_methods,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$core$_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[164]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$core$_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$core$_methods);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$core$_methods);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_78c67d8e9ad3e347d9c78376a34e90cb;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_2);
    }
    frame_78c67d8e9ad3e347d9c78376a34e90cb = MAKE_MODULE_FRAME(codeobj_78c67d8e9ad3e347d9c78376a34e90cb, module_numpy$core$_methods);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_78c67d8e9ad3e347d9c78376a34e90cb);
    assert(Py_REFCNT(frame_78c67d8e9ad3e347d9c78376a34e90cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[99], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[100], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[31];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[102];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[103];
        tmp_level_value_2 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[85],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[85]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[104];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[105];
        tmp_level_value_3 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 9;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[106],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[104];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[107];
        tmp_level_value_4 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 10;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[108],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[108]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[109];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[110];
        tmp_level_value_5 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[51],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[104];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[111];
        tmp_level_value_6 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 12;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[112],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[112]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[104];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[113];
        tmp_level_value_7 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 13;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[29],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[114];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[115];
        tmp_level_value_8 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 14;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[116],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[116]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[117];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[118];
        tmp_level_value_9 = mod_consts[18];
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 15;
        tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[90],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[90]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[86],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[86]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_14);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[49]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[119]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[47]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[119]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[75]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[119]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[69]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[119]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[120]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[119]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[121]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[119]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[122]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 27;
        tmp_dict_key_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[123]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 27;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_20;
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[25]);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[124]);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 28;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[25]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[125]);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 28;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_21);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[25]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[126]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 31;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[25]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[125]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 31;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[127]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[25]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[128]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 33;
        tmp_dict_key_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_dict_key_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[25]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_dict_key_2);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[126]);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_dict_key_2);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 33;
        tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        Py_DECREF(tmp_dict_key_2);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto dict_build_exception_2;
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame.f_lineno = 32;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_None;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;


        tmp_assign_source_22 = MAKE_FUNCTION_numpy$core$_methods$$$function__1__amax(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = Py_None;
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_2, 4, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_defaults_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;


        tmp_assign_source_23 = MAKE_FUNCTION_numpy$core$_methods$$$function__2__amin(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = Py_None;
        tmp_defaults_3 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_3, 5, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_defaults_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;


        tmp_assign_source_24 = MAKE_FUNCTION_numpy$core$_methods$$$function__3__sum(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = Py_None;
        tmp_defaults_4 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_4, 3, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_defaults_4, 4, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_4, 5, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_defaults_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;


        tmp_assign_source_25 = MAKE_FUNCTION_numpy$core$_methods$$$function__4__prod(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_25);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78c67d8e9ad3e347d9c78376a34e90cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78c67d8e9ad3e347d9c78376a34e90cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78c67d8e9ad3e347d9c78376a34e90cb, exception_lineno);
    }



    assertFrameObject(frame_78c67d8e9ad3e347d9c78376a34e90cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_5;
        PyObject *tmp_kw_defaults_1;
        tmp_defaults_5 = mod_consts[133];
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[134]);
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_26 = MAKE_FUNCTION_numpy$core$_methods$$$function__5__any(tmp_defaults_5, tmp_kw_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_6;
        PyObject *tmp_kw_defaults_2;
        tmp_defaults_6 = mod_consts[133];
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[134]);
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_27 = MAKE_FUNCTION_numpy$core$_methods$$$function__6__all(tmp_defaults_6, tmp_kw_defaults_2);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = mod_consts[137];
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_28 = MAKE_FUNCTION_numpy$core$_methods$$$function__7__count_reduce_items(tmp_defaults_7);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_numpy$core$_methods$$$function__8__clip_dep_is_scalar_nan();

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_numpy$core$_methods$$$function__9__clip_dep_is_byte_swapped();

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_kw_defaults_3;
        tmp_kw_defaults_3 = DICT_COPY(mod_consts[138]);


        tmp_assign_source_31 = MAKE_FUNCTION_numpy$core$_methods$$$function__10__clip_dep_invoke_with_casting(tmp_kw_defaults_3);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_8;
        PyObject *tmp_kw_defaults_4;
        tmp_defaults_8 = mod_consts[93];
        tmp_kw_defaults_4 = DICT_COPY(mod_consts[139]);
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_32 = MAKE_FUNCTION_numpy$core$_methods$$$function__11__clip(tmp_defaults_8, tmp_kw_defaults_4);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_9;
        PyObject *tmp_kw_defaults_5;
        tmp_defaults_9 = mod_consts[133];
        tmp_kw_defaults_5 = DICT_COPY(mod_consts[134]);
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_33 = MAKE_FUNCTION_numpy$core$_methods$$$function__12__mean(tmp_defaults_9, tmp_kw_defaults_5);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_10;
        PyObject *tmp_kw_defaults_6;
        tmp_defaults_10 = mod_consts[142];
        tmp_kw_defaults_6 = DICT_COPY(mod_consts[134]);
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_34 = MAKE_FUNCTION_numpy$core$_methods$$$function__13__var(tmp_defaults_10, tmp_kw_defaults_6);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_11;
        PyObject *tmp_kw_defaults_7;
        tmp_defaults_11 = mod_consts[142];
        tmp_kw_defaults_7 = DICT_COPY(mod_consts[134]);
        Py_INCREF(tmp_defaults_11);


        tmp_assign_source_35 = MAKE_FUNCTION_numpy$core$_methods$$$function__14__std(tmp_defaults_11, tmp_kw_defaults_7);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_12;
        tmp_defaults_12 = mod_consts[144];
        Py_INCREF(tmp_defaults_12);


        tmp_assign_source_36 = MAKE_FUNCTION_numpy$core$_methods$$$function__15__ptp(tmp_defaults_12);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_13;
        tmp_defaults_13 = mod_consts[73];
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_37 = MAKE_FUNCTION_numpy$core$_methods$$$function__16__dump(tmp_defaults_13);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_14;
        tmp_defaults_14 = mod_consts[73];
        Py_INCREF(tmp_defaults_14);


        tmp_assign_source_38 = MAKE_FUNCTION_numpy$core$_methods$$$function__17__dumps(tmp_defaults_14);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_38);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$core$_methods", false);

    Py_INCREF(module_numpy$core$_methods);
    return module_numpy$core$_methods;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$core$_methods", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
