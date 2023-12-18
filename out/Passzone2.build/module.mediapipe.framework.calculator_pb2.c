/* Generated code for Python module 'mediapipe$framework$calculator_pb2'
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

/* The "module_mediapipe$framework$calculator_pb2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mediapipe$framework$calculator_pb2;
PyDictObject *moduledict_mediapipe$framework$calculator_pb2;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[255];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[255];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("mediapipe.framework.calculator_pb2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 255; i++) {
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
void checkModuleConstants_mediapipe$framework$calculator_pb2(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 255; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_67a27a047056e76d429a0a69c3e64296;
static PyCodeObject *codeobj_90bf10c9e2af4c0ff32e8309c36e47b0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[251]); CHECK_OBJECT(module_filename_obj);
    codeobj_67a27a047056e76d429a0a69c3e64296 = MAKE_CODE_OBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[252], NULL, 1, 0, 0);
    codeobj_90bf10c9e2af4c0ff32e8309c36e47b0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[253], mod_consts[253], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mediapipe$framework$calculator_pb2$$$function__2_lambda();


// The module function definitions.
static PyObject *impl_mediapipe$framework$calculator_pb2$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_67a27a047056e76d429a0a69c3e64296;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_67a27a047056e76d429a0a69c3e64296 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_67a27a047056e76d429a0a69c3e64296)) {
        Py_XDECREF(cache_frame_67a27a047056e76d429a0a69c3e64296);

#if _DEBUG_REFCOUNTS
        if (cache_frame_67a27a047056e76d429a0a69c3e64296 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_67a27a047056e76d429a0a69c3e64296 = MAKE_FUNCTION_FRAME(tstate, codeobj_67a27a047056e76d429a0a69c3e64296, module_mediapipe$framework$calculator_pb2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_67a27a047056e76d429a0a69c3e64296->m_type_description == NULL);
    frame_67a27a047056e76d429a0a69c3e64296 = cache_frame_67a27a047056e76d429a0a69c3e64296;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_67a27a047056e76d429a0a69c3e64296);
    assert(Py_REFCNT(frame_67a27a047056e76d429a0a69c3e64296) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_67a27a047056e76d429a0a69c3e64296->m_frame.f_lineno = 5;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[1]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_67a27a047056e76d429a0a69c3e64296, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_67a27a047056e76d429a0a69c3e64296->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_67a27a047056e76d429a0a69c3e64296, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_67a27a047056e76d429a0a69c3e64296,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_67a27a047056e76d429a0a69c3e64296 == cache_frame_67a27a047056e76d429a0a69c3e64296) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_67a27a047056e76d429a0a69c3e64296);
        cache_frame_67a27a047056e76d429a0a69c3e64296 = NULL;
    }

    assertFrameObject(frame_67a27a047056e76d429a0a69c3e64296);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_mediapipe$framework$calculator_pb2$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mediapipe$framework$calculator_pb2$$$function__2_lambda,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_67a27a047056e76d429a0a69c3e64296,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mediapipe$framework$calculator_pb2,
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

static function_impl_code const function_table_mediapipe$framework$calculator_pb2[] = {
    impl_mediapipe$framework$calculator_pb2$$$function__2_lambda,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_mediapipe$framework$calculator_pb2);

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
        module_mediapipe$framework$calculator_pb2,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_mediapipe$framework$calculator_pb2,
        sizeof(function_table_mediapipe$framework$calculator_pb2) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_mediapipe$framework$calculator_pb2(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mediapipe$framework$calculator_pb2");

    // Store the module for future use.
    module_mediapipe$framework$calculator_pb2 = module;

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
        PRINT_STRING("mediapipe$framework$calculator_pb2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("mediapipe$framework$calculator_pb2: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmediapipe$framework$calculator_pb2\n");

    moduledict_mediapipe$framework$calculator_pb2 = MODULE_DICT(module_mediapipe$framework$calculator_pb2);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mediapipe$framework$calculator_pb2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mediapipe$framework$calculator_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[254]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mediapipe$framework$calculator_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mediapipe$framework$calculator_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mediapipe$framework$calculator_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mediapipe$framework$calculator_pb2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_mediapipe$framework$calculator_pb2);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_90bf10c9e2af4c0ff32e8309c36e47b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    frame_90bf10c9e2af4c0ff32e8309c36e47b0 = MAKE_MODULE_FRAME(codeobj_90bf10c9e2af4c0ff32e8309c36e47b0, module_mediapipe$framework$calculator_pb2);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_90bf10c9e2af4c0ff32e8309c36e47b0);
    assert(Py_REFCNT(frame_90bf10c9e2af4c0ff32e8309c36e47b0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_mediapipe$framework$calculator_pb2$$$function__2_lambda();

        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[11];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[12];
        tmp_level_value_1 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[14],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[11];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[16];
        tmp_level_value_2 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 7;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[17],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[11];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[19];
        tmp_level_value_3 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 8;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[20],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[11];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[22];
        tmp_level_value_4 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[23],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[11];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[25];
        tmp_level_value_5 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 10;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[26],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 13;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[29];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[30];
        tmp_level_value_6 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 16;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[31],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[11];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[33];
        tmp_level_value_7 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 17;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[34],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[29];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[36];
        tmp_level_value_8 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 18;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[37],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[29];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[39];
        tmp_level_value_9 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 19;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[40],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[29];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[42];
        tmp_level_value_10 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 20;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[43],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[29];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[45];
        tmp_level_value_11 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 21;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[46],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[29];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[48];
        tmp_level_value_12 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 22;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_mediapipe$framework$calculator_pb2,
                mod_consts[49],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_18);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[51];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_locals_arg_value_13 = (PyObject *)moduledict_mediapipe$framework$calculator_pb2;
        tmp_fromlist_value_13 = mod_consts[52];
        tmp_level_value_13 = mod_consts[13];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 24;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_mediapipe$framework$calculator_pb2, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[54];
        tmp_kw_call_value_1_1 = mod_consts[55];
        tmp_kw_call_value_2_1 = mod_consts[56];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 30;
        tmp_kw_call_value_3_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[57]);

        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[58]);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_1 = MAKE_LIST_EMPTY(7);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 0, tmp_list_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[58]);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 1, tmp_list_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[58]);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 2, tmp_list_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[58]);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 3, tmp_list_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[58]);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 4, tmp_list_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[58]);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 5, tmp_list_element_1);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[58]);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 6, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[58]);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_value_5_1, 0, tmp_list_element_2);
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 26;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_assign_source_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_19);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[60]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 34;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[61]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[62];
        tmp_kw_call_value_1_2 = mod_consts[63];
        tmp_kw_call_value_2_2 = Py_None;
        tmp_kw_call_value_3_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_3_2 == NULL)) {
            tmp_kw_call_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_3_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[64]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 44;
        tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_2 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_16;
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 0, tmp_list_element_3);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_2;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[64]);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_2;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 48;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[67], 0), mod_consts[66]);
            Py_DECREF(tmp_called_value_6);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 1, tmp_list_element_3);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto list_build_exception_2;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[64]);
            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto list_build_exception_2;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 52;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[68], 0), mod_consts[66]);
            Py_DECREF(tmp_called_value_7);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 2, tmp_list_element_3);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto list_build_exception_2;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[64]);
            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto list_build_exception_2;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 56;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[69], 0), mod_consts[66]);
            Py_DECREF(tmp_called_value_8);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 3, tmp_list_element_3);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto list_build_exception_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[64]);
            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto list_build_exception_2;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 60;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[66]);
            Py_DECREF(tmp_called_value_9);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 4, tmp_list_element_3);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_4_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_kw_call_value_5_2 = Py_None;
        tmp_kw_call_value_6_1 = Py_None;
        tmp_kw_call_value_7_1 = mod_consts[71];
        tmp_kw_call_value_8_1 = mod_consts[72];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 38;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

            tmp_assign_source_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[73]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_4_2);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_20);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[75]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 70;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_3;
        PyObject *tmp_kw_call_value_5_3;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_kw_call_value_4_4;
        PyObject *tmp_kw_call_value_5_4;
        PyObject *tmp_kw_call_value_6_2;
        PyObject *tmp_kw_call_value_7_2;
        PyObject *tmp_kw_call_value_8_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_kw_call_value_12_1;
        PyObject *tmp_kw_call_value_13_1;
        PyObject *tmp_kw_call_value_14_1;
        PyObject *tmp_kw_call_value_6_4;
        PyObject *tmp_kw_call_value_7_4;
        PyObject *tmp_kw_call_value_8_4;
        PyObject *tmp_kw_call_value_9_3;
        PyObject *tmp_kw_call_value_10_3;
        PyObject *tmp_kw_call_value_11_3;
        PyObject *tmp_kw_call_value_12_3;
        PyObject *tmp_kw_call_value_13_3;
        PyObject *tmp_kw_call_value_14_3;
        PyObject *tmp_kw_call_value_15_1;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[76]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[77];
        tmp_kw_call_value_1_3 = mod_consts[78];
        tmp_kw_call_value_2_3 = Py_None;
        tmp_kw_call_value_3_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_3_3 == NULL)) {
            tmp_kw_call_value_3_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_3_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_3 = Py_None;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[79]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = mod_consts[80];
        tmp_kw_call_value_1_4 = mod_consts[81];
        tmp_kw_call_value_2_4 = mod_consts[13];
        tmp_kw_call_value_3_4 = mod_consts[82];
        tmp_kw_call_value_4_4 = mod_consts[83];
        tmp_kw_call_value_5_4 = mod_consts[83];
        tmp_kw_call_value_6_2 = mod_consts[82];
        tmp_kw_call_value_7_2 = Py_False;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 83;
        tmp_expression_value_20 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[84]);

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[85]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 83;
        tmp_kw_call_value_8_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[86]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_kw_call_value_8_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_1 = Py_None;
        tmp_kw_call_value_10_1 = Py_None;
        tmp_kw_call_value_11_1 = Py_None;
        tmp_kw_call_value_12_1 = Py_False;
        tmp_kw_call_value_13_1 = Py_None;
        tmp_kw_call_value_14_1 = Py_None;
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 80;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_4, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1, tmp_kw_call_value_14_1};

            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_value_8_2);
        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_5;
            PyObject *tmp_kw_call_value_2_5;
            PyObject *tmp_kw_call_value_3_5;
            PyObject *tmp_kw_call_value_4_5;
            PyObject *tmp_kw_call_value_5_5;
            PyObject *tmp_kw_call_value_6_3;
            PyObject *tmp_kw_call_value_7_3;
            PyObject *tmp_kw_call_value_8_3;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_called_value_17;
            PyObject *tmp_kw_call_value_9_2;
            PyObject *tmp_kw_call_value_10_2;
            PyObject *tmp_kw_call_value_11_2;
            PyObject *tmp_kw_call_value_12_2;
            PyObject *tmp_kw_call_value_13_2;
            PyObject *tmp_kw_call_value_14_2;
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_23;
            PyList_SET_ITEM(tmp_kw_call_value_5_3, 0, tmp_list_element_4);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_3;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[79]);
            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_0_5 = mod_consts[88];
            tmp_kw_call_value_1_5 = mod_consts[89];
            tmp_kw_call_value_2_5 = mod_consts[82];
            tmp_kw_call_value_3_5 = mod_consts[90];
            tmp_kw_call_value_4_5 = mod_consts[83];
            tmp_kw_call_value_5_5 = mod_consts[83];
            tmp_kw_call_value_6_3 = mod_consts[82];
            tmp_kw_call_value_7_3 = Py_False;
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 90;

                goto list_build_exception_3;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 90;
            tmp_expression_value_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[84]);

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 90;

                goto list_build_exception_3;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[85]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 90;

                goto list_build_exception_3;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 90;
            tmp_kw_call_value_8_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[86]);

            Py_DECREF(tmp_called_value_16);
            if (tmp_kw_call_value_8_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 90;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_9_2 = Py_None;
            tmp_kw_call_value_10_2 = Py_None;
            tmp_kw_call_value_11_2 = Py_None;
            tmp_kw_call_value_12_2 = Py_False;
            tmp_kw_call_value_13_2 = Py_None;
            tmp_kw_call_value_14_2 = Py_None;
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 87;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5, tmp_kw_call_value_5_5, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3, tmp_kw_call_value_8_3, tmp_kw_call_value_9_2, tmp_kw_call_value_10_2, tmp_kw_call_value_11_2, tmp_kw_call_value_12_2, tmp_kw_call_value_13_2, tmp_kw_call_value_14_2};

                tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_15, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_kw_call_value_8_3);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_3, 1, tmp_list_element_4);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_3;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[79]);
            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_3;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 94;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[91], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_18);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_3, 2, tmp_list_element_4);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_5_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_kw_call_value_6_4 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_4 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_4 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_3 = Py_None;
        tmp_kw_call_value_10_3 = Py_False;
        tmp_kw_call_value_11_3 = mod_consts[56];
        tmp_kw_call_value_12_3 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_3 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_3 = mod_consts[92];
        tmp_kw_call_value_15_1 = mod_consts[93];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 73;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_4, tmp_kw_call_value_7_4, tmp_kw_call_value_8_4, tmp_kw_call_value_9_3, tmp_kw_call_value_10_3, tmp_kw_call_value_11_3, tmp_kw_call_value_12_3, tmp_kw_call_value_13_3, tmp_kw_call_value_14_3, tmp_kw_call_value_15_1};

            tmp_assign_source_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_5_3);
        Py_DECREF(tmp_kw_call_value_6_4);
        Py_DECREF(tmp_kw_call_value_7_4);
        Py_DECREF(tmp_kw_call_value_8_4);
        Py_DECREF(tmp_kw_call_value_12_3);
        Py_DECREF(tmp_kw_call_value_13_3);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_kw_call_value_4_6;
        PyObject *tmp_kw_call_value_5_6;
        PyObject *tmp_list_element_5;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_kw_call_value_4_7;
        PyObject *tmp_kw_call_value_5_7;
        PyObject *tmp_kw_call_value_6_5;
        PyObject *tmp_kw_call_value_7_5;
        PyObject *tmp_kw_call_value_8_5;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_called_value_22;
        PyObject *tmp_kw_call_value_9_4;
        PyObject *tmp_kw_call_value_10_4;
        PyObject *tmp_kw_call_value_11_4;
        PyObject *tmp_kw_call_value_12_4;
        PyObject *tmp_kw_call_value_13_4;
        PyObject *tmp_kw_call_value_14_4;
        PyObject *tmp_kw_call_value_6_7;
        PyObject *tmp_kw_call_value_7_7;
        PyObject *tmp_kw_call_value_8_7;
        PyObject *tmp_list_element_6;
        PyObject *tmp_kw_call_value_9_6;
        PyObject *tmp_kw_call_value_10_6;
        PyObject *tmp_kw_call_value_11_6;
        PyObject *tmp_kw_call_value_12_6;
        PyObject *tmp_kw_call_value_13_6;
        PyObject *tmp_kw_call_value_14_6;
        PyObject *tmp_kw_call_value_15_2;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[76]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[96];
        tmp_kw_call_value_1_6 = mod_consts[97];
        tmp_kw_call_value_2_6 = Py_None;
        tmp_kw_call_value_3_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_3_6 == NULL)) {
            tmp_kw_call_value_3_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_3_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_6 = Py_None;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[79]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = mod_consts[80];
        tmp_kw_call_value_1_7 = mod_consts[98];
        tmp_kw_call_value_2_7 = mod_consts[13];
        tmp_kw_call_value_3_7 = mod_consts[82];
        tmp_kw_call_value_4_7 = mod_consts[83];
        tmp_kw_call_value_5_7 = mod_consts[83];
        tmp_kw_call_value_6_5 = mod_consts[82];
        tmp_kw_call_value_7_5 = Py_False;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 128;
        tmp_expression_value_26 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_22, mod_consts[84]);

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[85]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 128;
        tmp_kw_call_value_8_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[86]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_kw_call_value_8_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_4 = Py_None;
        tmp_kw_call_value_10_4 = Py_None;
        tmp_kw_call_value_11_4 = Py_None;
        tmp_kw_call_value_12_4 = Py_False;
        tmp_kw_call_value_13_4 = Py_None;
        tmp_kw_call_value_14_4 = Py_None;
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 125;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7, tmp_kw_call_value_5_7, tmp_kw_call_value_6_5, tmp_kw_call_value_7_5, tmp_kw_call_value_8_5, tmp_kw_call_value_9_4, tmp_kw_call_value_10_4, tmp_kw_call_value_11_4, tmp_kw_call_value_12_4, tmp_kw_call_value_13_4, tmp_kw_call_value_14_4};

            tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_20, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_value_8_5);
        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_6 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_call_args_kwsplit_1;
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_call_args_kwsplit_2;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_kw_call_value_1_8;
            PyObject *tmp_kw_call_value_2_8;
            PyObject *tmp_kw_call_value_3_8;
            PyObject *tmp_kw_call_value_4_8;
            PyObject *tmp_kw_call_value_5_8;
            PyObject *tmp_kw_call_value_6_6;
            PyObject *tmp_kw_call_value_7_6;
            PyObject *tmp_kw_call_value_8_6;
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_called_value_28;
            PyObject *tmp_kw_call_value_9_5;
            PyObject *tmp_kw_call_value_10_5;
            PyObject *tmp_kw_call_value_11_5;
            PyObject *tmp_kw_call_value_12_5;
            PyObject *tmp_kw_call_value_13_5;
            PyObject *tmp_kw_call_value_14_5;
            PyList_SET_ITEM(tmp_kw_call_value_5_6, 0, tmp_list_element_5);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto list_build_exception_4;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[79]);
            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto list_build_exception_4;
            }
            tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[99], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 132;
            tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_23, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_call_args_kwsplit_1);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_6, 1, tmp_list_element_5);
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto list_build_exception_4;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[79]);
            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto list_build_exception_4;
            }
            tmp_call_args_kwsplit_2 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[100], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 139;
            tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_2, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_call_args_kwsplit_2);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_6, 2, tmp_list_element_5);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto list_build_exception_4;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[79]);
            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto list_build_exception_4;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 146;
            tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_25);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_6, 3, tmp_list_element_5);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto list_build_exception_4;
            }
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[79]);
            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_0_8 = mod_consts[102];
            tmp_kw_call_value_1_8 = mod_consts[103];
            tmp_kw_call_value_2_8 = mod_consts[104];
            tmp_kw_call_value_3_8 = mod_consts[104];
            tmp_kw_call_value_4_8 = mod_consts[83];
            tmp_kw_call_value_5_8 = mod_consts[83];
            tmp_kw_call_value_6_6 = mod_consts[82];
            tmp_kw_call_value_7_6 = Py_False;
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 156;

                goto list_build_exception_4;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 156;
            tmp_expression_value_31 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_28, mod_consts[84]);

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 156;

                goto list_build_exception_4;
            }
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[85]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 156;

                goto list_build_exception_4;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 156;
            tmp_kw_call_value_8_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[86]);

            Py_DECREF(tmp_called_value_27);
            if (tmp_kw_call_value_8_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 156;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_9_5 = Py_None;
            tmp_kw_call_value_10_5 = Py_None;
            tmp_kw_call_value_11_5 = Py_None;
            tmp_kw_call_value_12_5 = Py_False;
            tmp_kw_call_value_13_5 = Py_None;
            tmp_kw_call_value_14_5 = Py_None;
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 153;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8, tmp_kw_call_value_4_8, tmp_kw_call_value_5_8, tmp_kw_call_value_6_6, tmp_kw_call_value_7_6, tmp_kw_call_value_8_6, tmp_kw_call_value_9_5, tmp_kw_call_value_10_5, tmp_kw_call_value_11_5, tmp_kw_call_value_12_5, tmp_kw_call_value_13_5, tmp_kw_call_value_14_5};

                tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_26, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_8_6);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_6, 4, tmp_list_element_5);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_value_5_6);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_kw_call_value_6_7 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_7 = MAKE_LIST_EMPTY(0);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_value_5_6);
            Py_DECREF(tmp_kw_call_value_6_7);
            Py_DECREF(tmp_kw_call_value_7_7);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_7 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_value_8_7, 0, tmp_list_element_6);
        tmp_kw_call_value_9_6 = Py_None;
        tmp_kw_call_value_10_6 = Py_False;
        tmp_kw_call_value_11_6 = mod_consts[56];
        tmp_kw_call_value_12_6 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_6 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_6 = mod_consts[105];
        tmp_kw_call_value_15_2 = mod_consts[72];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 118;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6, tmp_kw_call_value_5_6, tmp_kw_call_value_6_7, tmp_kw_call_value_7_7, tmp_kw_call_value_8_7, tmp_kw_call_value_9_6, tmp_kw_call_value_10_6, tmp_kw_call_value_11_6, tmp_kw_call_value_12_6, tmp_kw_call_value_13_6, tmp_kw_call_value_14_6, tmp_kw_call_value_15_2};

            tmp_assign_source_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_19, kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_value_5_6);
        Py_DECREF(tmp_kw_call_value_6_7);
        Py_DECREF(tmp_kw_call_value_7_7);
        Py_DECREF(tmp_kw_call_value_8_7);
        Py_DECREF(tmp_kw_call_value_12_6);
        Py_DECREF(tmp_kw_call_value_13_6);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_kw_call_value_4_9;
        PyObject *tmp_kw_call_value_5_9;
        PyObject *tmp_list_element_7;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_args_kwsplit_3;
        PyObject *tmp_kw_call_value_6_8;
        PyObject *tmp_kw_call_value_7_8;
        PyObject *tmp_kw_call_value_8_8;
        PyObject *tmp_kw_call_value_9_7;
        PyObject *tmp_kw_call_value_10_7;
        PyObject *tmp_kw_call_value_11_7;
        PyObject *tmp_kw_call_value_12_7;
        PyObject *tmp_kw_call_value_13_7;
        PyObject *tmp_kw_call_value_14_7;
        PyObject *tmp_kw_call_value_15_3;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[76]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = mod_consts[107];
        tmp_kw_call_value_1_9 = mod_consts[108];
        tmp_kw_call_value_2_9 = Py_None;
        tmp_kw_call_value_3_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_3_9 == NULL)) {
            tmp_kw_call_value_3_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_3_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_9 = Py_None;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[79]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_3 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[109], "iiiiiiiiliiiiii");
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 185;
        tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_30, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_3, 0), mod_consts[87]);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_call_args_kwsplit_3);
        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_9 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_value_5_9, 0, tmp_list_element_7);
        tmp_kw_call_value_6_8 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_8 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_8 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_7 = Py_None;
        tmp_kw_call_value_10_7 = Py_False;
        tmp_kw_call_value_11_7 = mod_consts[56];
        tmp_kw_call_value_12_7 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_7 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_7 = mod_consts[110];
        tmp_kw_call_value_15_3 = mod_consts[111];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 178;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_9, tmp_kw_call_value_4_9, tmp_kw_call_value_5_9, tmp_kw_call_value_6_8, tmp_kw_call_value_7_8, tmp_kw_call_value_8_8, tmp_kw_call_value_9_7, tmp_kw_call_value_10_7, tmp_kw_call_value_11_7, tmp_kw_call_value_12_7, tmp_kw_call_value_13_7, tmp_kw_call_value_14_7, tmp_kw_call_value_15_3};

            tmp_assign_source_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_29, kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_value_5_9);
        Py_DECREF(tmp_kw_call_value_6_8);
        Py_DECREF(tmp_kw_call_value_7_8);
        Py_DECREF(tmp_kw_call_value_8_8);
        Py_DECREF(tmp_kw_call_value_12_7);
        Py_DECREF(tmp_kw_call_value_13_7);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_kw_call_value_4_10;
        PyObject *tmp_kw_call_value_5_10;
        PyObject *tmp_list_element_8;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_kw_call_value_2_11;
        PyObject *tmp_kw_call_value_3_11;
        PyObject *tmp_kw_call_value_4_11;
        PyObject *tmp_kw_call_value_5_11;
        PyObject *tmp_kw_call_value_6_9;
        PyObject *tmp_kw_call_value_7_9;
        PyObject *tmp_kw_call_value_8_9;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_called_value_34;
        PyObject *tmp_kw_call_value_9_8;
        PyObject *tmp_kw_call_value_10_8;
        PyObject *tmp_kw_call_value_11_8;
        PyObject *tmp_kw_call_value_12_8;
        PyObject *tmp_kw_call_value_13_8;
        PyObject *tmp_kw_call_value_14_8;
        PyObject *tmp_kw_call_value_6_10;
        PyObject *tmp_kw_call_value_7_10;
        PyObject *tmp_kw_call_value_8_10;
        PyObject *tmp_kw_call_value_9_9;
        PyObject *tmp_kw_call_value_10_9;
        PyObject *tmp_kw_call_value_11_9;
        PyObject *tmp_kw_call_value_12_9;
        PyObject *tmp_kw_call_value_13_9;
        PyObject *tmp_kw_call_value_14_9;
        PyObject *tmp_kw_call_value_15_4;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[76]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = mod_consts[113];
        tmp_kw_call_value_1_10 = mod_consts[114];
        tmp_kw_call_value_2_10 = Py_None;
        tmp_kw_call_value_3_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_3_10 == NULL)) {
            tmp_kw_call_value_3_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_3_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_10 = Py_None;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[79]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = mod_consts[115];
        tmp_kw_call_value_1_11 = mod_consts[116];
        tmp_kw_call_value_2_11 = mod_consts[13];
        tmp_kw_call_value_3_11 = mod_consts[82];
        tmp_kw_call_value_4_11 = mod_consts[83];
        tmp_kw_call_value_5_11 = mod_consts[83];
        tmp_kw_call_value_6_9 = mod_consts[82];
        tmp_kw_call_value_7_9 = Py_False;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 219;
        tmp_expression_value_36 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_34, mod_consts[84]);

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[85]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 219;
        tmp_kw_call_value_8_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[86]);

        Py_DECREF(tmp_called_value_33);
        if (tmp_kw_call_value_8_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_8 = Py_None;
        tmp_kw_call_value_10_8 = Py_None;
        tmp_kw_call_value_11_8 = Py_None;
        tmp_kw_call_value_12_8 = Py_False;
        tmp_kw_call_value_13_8 = Py_None;
        tmp_kw_call_value_14_8 = Py_None;
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 216;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_11, tmp_kw_call_value_4_11, tmp_kw_call_value_5_11, tmp_kw_call_value_6_9, tmp_kw_call_value_7_9, tmp_kw_call_value_8_9, tmp_kw_call_value_9_8, tmp_kw_call_value_10_8, tmp_kw_call_value_11_8, tmp_kw_call_value_12_8, tmp_kw_call_value_13_8, tmp_kw_call_value_14_8};

            tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_32, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_kw_call_value_8_9);
        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_10 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_37;
            PyList_SET_ITEM(tmp_kw_call_value_5_10, 0, tmp_list_element_8);
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto list_build_exception_5;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[79]);
            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto list_build_exception_5;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 223;
            tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[117], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_35);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_10, 1, tmp_list_element_8);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_value_5_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_kw_call_value_6_10 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_10 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_10 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_9 = Py_None;
        tmp_kw_call_value_10_9 = Py_False;
        tmp_kw_call_value_11_9 = mod_consts[56];
        tmp_kw_call_value_12_9 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_9 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_9 = mod_consts[118];
        tmp_kw_call_value_15_4 = mod_consts[119];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 209;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_10, tmp_kw_call_value_4_10, tmp_kw_call_value_5_10, tmp_kw_call_value_6_10, tmp_kw_call_value_7_10, tmp_kw_call_value_8_10, tmp_kw_call_value_9_9, tmp_kw_call_value_10_9, tmp_kw_call_value_11_9, tmp_kw_call_value_12_9, tmp_kw_call_value_13_9, tmp_kw_call_value_14_9, tmp_kw_call_value_15_4};

            tmp_assign_source_24 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_31, kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_value_5_10);
        Py_DECREF(tmp_kw_call_value_6_10);
        Py_DECREF(tmp_kw_call_value_7_10);
        Py_DECREF(tmp_kw_call_value_8_10);
        Py_DECREF(tmp_kw_call_value_12_9);
        Py_DECREF(tmp_kw_call_value_13_9);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_kw_call_value_2_12;
        PyObject *tmp_kw_call_value_3_12;
        PyObject *tmp_kw_call_value_4_12;
        PyObject *tmp_kw_call_value_5_12;
        PyObject *tmp_list_element_9;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_kw_call_value_6_15;
        PyObject *tmp_kw_call_value_7_15;
        PyObject *tmp_kw_call_value_8_15;
        PyObject *tmp_kw_call_value_9_14;
        PyObject *tmp_kw_call_value_10_14;
        PyObject *tmp_kw_call_value_11_14;
        PyObject *tmp_kw_call_value_12_14;
        PyObject *tmp_kw_call_value_13_14;
        PyObject *tmp_kw_call_value_14_14;
        PyObject *tmp_kw_call_value_15_5;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[76]);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = mod_consts[121];
        tmp_kw_call_value_1_12 = mod_consts[122];
        tmp_kw_call_value_2_12 = Py_None;
        tmp_kw_call_value_3_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_3_12 == NULL)) {
            tmp_kw_call_value_3_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_3_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_12 = Py_None;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[79]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 254;
        tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_37, &PyTuple_GET_ITEM(mod_consts[123], 0), mod_consts[87]);
        Py_DECREF(tmp_called_value_37);
        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_12 = MAKE_LIST_EMPTY(18);
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_kw_call_value_0_13;
            PyObject *tmp_kw_call_value_1_13;
            PyObject *tmp_kw_call_value_2_13;
            PyObject *tmp_kw_call_value_3_13;
            PyObject *tmp_kw_call_value_4_13;
            PyObject *tmp_kw_call_value_5_13;
            PyObject *tmp_kw_call_value_6_11;
            PyObject *tmp_kw_call_value_7_11;
            PyObject *tmp_kw_call_value_8_11;
            PyObject *tmp_kw_call_value_9_10;
            PyObject *tmp_kw_call_value_10_10;
            PyObject *tmp_kw_call_value_11_10;
            PyObject *tmp_kw_call_value_12_10;
            PyObject *tmp_kw_call_value_13_10;
            PyObject *tmp_kw_call_value_14_10;
            PyObject *tmp_called_value_40;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_41;
            PyObject *tmp_called_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_called_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_called_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_called_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_call_args_kwsplit_4;
            PyObject *tmp_called_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_kw_call_value_0_14;
            PyObject *tmp_kw_call_value_1_14;
            PyObject *tmp_kw_call_value_2_14;
            PyObject *tmp_kw_call_value_3_14;
            PyObject *tmp_kw_call_value_4_14;
            PyObject *tmp_kw_call_value_5_14;
            PyObject *tmp_kw_call_value_6_12;
            PyObject *tmp_kw_call_value_7_12;
            PyObject *tmp_kw_call_value_8_12;
            PyObject *tmp_called_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_called_value_49;
            PyObject *tmp_kw_call_value_9_11;
            PyObject *tmp_kw_call_value_10_11;
            PyObject *tmp_kw_call_value_11_11;
            PyObject *tmp_kw_call_value_12_11;
            PyObject *tmp_kw_call_value_13_11;
            PyObject *tmp_kw_call_value_14_11;
            PyObject *tmp_called_value_50;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_called_value_51;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_called_value_52;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_called_value_53;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_kw_call_value_0_15;
            PyObject *tmp_kw_call_value_1_15;
            PyObject *tmp_kw_call_value_2_15;
            PyObject *tmp_kw_call_value_3_15;
            PyObject *tmp_kw_call_value_4_15;
            PyObject *tmp_kw_call_value_5_15;
            PyObject *tmp_kw_call_value_6_13;
            PyObject *tmp_kw_call_value_7_13;
            PyObject *tmp_kw_call_value_8_13;
            PyObject *tmp_kw_call_value_9_12;
            PyObject *tmp_kw_call_value_10_12;
            PyObject *tmp_kw_call_value_11_12;
            PyObject *tmp_kw_call_value_12_12;
            PyObject *tmp_kw_call_value_13_12;
            PyObject *tmp_kw_call_value_14_12;
            PyObject *tmp_called_value_54;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_55;
            PyObject *tmp_called_value_56;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_called_value_57;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_called_value_58;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_called_value_59;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_called_value_60;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_kw_call_value_0_16;
            PyObject *tmp_kw_call_value_1_16;
            PyObject *tmp_kw_call_value_2_16;
            PyObject *tmp_kw_call_value_3_16;
            PyObject *tmp_kw_call_value_4_16;
            PyObject *tmp_kw_call_value_5_16;
            PyObject *tmp_kw_call_value_6_14;
            PyObject *tmp_kw_call_value_7_14;
            PyObject *tmp_kw_call_value_8_14;
            PyObject *tmp_called_value_61;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_called_value_62;
            PyObject *tmp_kw_call_value_9_13;
            PyObject *tmp_kw_call_value_10_13;
            PyObject *tmp_kw_call_value_11_13;
            PyObject *tmp_kw_call_value_12_13;
            PyObject *tmp_kw_call_value_13_13;
            PyObject *tmp_kw_call_value_14_13;
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 0, tmp_list_element_9);
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto list_build_exception_6;
            }
            tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[79]);
            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 261;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_38, &PyTuple_GET_ITEM(mod_consts[124], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_38);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 1, tmp_list_element_9);
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto list_build_exception_6;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[79]);
            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto list_build_exception_6;
            }
            tmp_kw_call_value_0_13 = mod_consts[125];
            tmp_kw_call_value_1_13 = mod_consts[126];
            tmp_kw_call_value_2_13 = mod_consts[90];
            tmp_kw_call_value_3_13 = mod_consts[127];
            tmp_kw_call_value_4_13 = mod_consts[128];
            tmp_kw_call_value_5_13 = mod_consts[129];
            tmp_kw_call_value_6_11 = mod_consts[82];
            tmp_kw_call_value_7_11 = Py_False;
            tmp_kw_call_value_8_11 = Py_False;
            tmp_kw_call_value_9_10 = Py_None;
            tmp_kw_call_value_10_10 = Py_None;
            tmp_kw_call_value_11_10 = Py_None;
            tmp_kw_call_value_12_10 = Py_False;
            tmp_kw_call_value_13_10 = Py_None;
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 274;

                goto list_build_exception_6;
            }
            tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[130]);
            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 274;

                goto list_build_exception_6;
            }
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_called_value_40);

                exception_lineno = 274;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 274;
            tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[131]);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_called_value_40);

                exception_lineno = 274;

                goto list_build_exception_6;
            }
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 274;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 274;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_41, mod_consts[132]);

            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 274;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 274;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_kw_call_value_14_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_40, call_args);
            }

            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_kw_call_value_14_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 274;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 268;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_13, tmp_kw_call_value_3_13, tmp_kw_call_value_4_13, tmp_kw_call_value_5_13, tmp_kw_call_value_6_11, tmp_kw_call_value_7_11, tmp_kw_call_value_8_11, tmp_kw_call_value_9_10, tmp_kw_call_value_10_10, tmp_kw_call_value_11_10, tmp_kw_call_value_12_10, tmp_kw_call_value_13_10, tmp_kw_call_value_14_10};

                tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_39, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_kw_call_value_14_10);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 2, tmp_list_element_9);
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto list_build_exception_6;
            }
            tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[79]);
            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 275;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_42, &PyTuple_GET_ITEM(mod_consts[133], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_42);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 3, tmp_list_element_9);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto list_build_exception_6;
            }
            tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[79]);
            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 282;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[134], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_43);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 4, tmp_list_element_9);
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto list_build_exception_6;
            }
            tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[79]);
            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 289;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_44, &PyTuple_GET_ITEM(mod_consts[135], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_44);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 5, tmp_list_element_9);
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto list_build_exception_6;
            }
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[79]);
            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 296;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_45);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 6, tmp_list_element_9);
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto list_build_exception_6;
            }
            tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[79]);
            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto list_build_exception_6;
            }
            tmp_call_args_kwsplit_4 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[137], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 303;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_46, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_4, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_call_args_kwsplit_4);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 7, tmp_list_element_9);
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto list_build_exception_6;
            }
            tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[79]);
            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto list_build_exception_6;
            }
            tmp_kw_call_value_0_14 = mod_consts[138];
            tmp_kw_call_value_1_14 = mod_consts[139];
            tmp_kw_call_value_2_14 = mod_consts[128];
            tmp_kw_call_value_3_14 = mod_consts[83];
            tmp_kw_call_value_4_14 = mod_consts[83];
            tmp_kw_call_value_5_14 = mod_consts[83];
            tmp_kw_call_value_6_12 = mod_consts[82];
            tmp_kw_call_value_7_12 = Py_False;
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_47);

                exception_lineno = 313;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 313;
            tmp_expression_value_49 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_49, mod_consts[84]);

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_47);

                exception_lineno = 313;

                goto list_build_exception_6;
            }
            tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[85]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_47);

                exception_lineno = 313;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 313;
            tmp_kw_call_value_8_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_48, mod_consts[86]);

            Py_DECREF(tmp_called_value_48);
            if (tmp_kw_call_value_8_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_47);

                exception_lineno = 313;

                goto list_build_exception_6;
            }
            tmp_kw_call_value_9_11 = Py_None;
            tmp_kw_call_value_10_11 = Py_None;
            tmp_kw_call_value_11_11 = Py_None;
            tmp_kw_call_value_12_11 = Py_False;
            tmp_kw_call_value_13_11 = Py_None;
            tmp_kw_call_value_14_11 = Py_None;
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 310;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14, tmp_kw_call_value_2_14, tmp_kw_call_value_3_14, tmp_kw_call_value_4_14, tmp_kw_call_value_5_14, tmp_kw_call_value_6_12, tmp_kw_call_value_7_12, tmp_kw_call_value_8_12, tmp_kw_call_value_9_11, tmp_kw_call_value_10_11, tmp_kw_call_value_11_11, tmp_kw_call_value_12_11, tmp_kw_call_value_13_11, tmp_kw_call_value_14_11};

                tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_47, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_kw_call_value_8_12);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 8, tmp_list_element_9);
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto list_build_exception_6;
            }
            tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[79]);
            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 317;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_50, &PyTuple_GET_ITEM(mod_consts[140], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_50);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 9, tmp_list_element_9);
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto list_build_exception_6;
            }
            tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[79]);
            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 324;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_51, &PyTuple_GET_ITEM(mod_consts[141], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_51);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 10, tmp_list_element_9);
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto list_build_exception_6;
            }
            tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[79]);
            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 331;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_52, &PyTuple_GET_ITEM(mod_consts[142], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_52);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 11, tmp_list_element_9);
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto list_build_exception_6;
            }
            tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[79]);
            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto list_build_exception_6;
            }
            tmp_kw_call_value_0_15 = mod_consts[143];
            tmp_kw_call_value_1_15 = mod_consts[144];
            tmp_kw_call_value_2_15 = mod_consts[145];
            tmp_kw_call_value_3_15 = mod_consts[146];
            tmp_kw_call_value_4_15 = mod_consts[128];
            tmp_kw_call_value_5_15 = mod_consts[129];
            tmp_kw_call_value_6_13 = mod_consts[82];
            tmp_kw_call_value_7_13 = Py_False;
            tmp_kw_call_value_8_13 = Py_False;
            tmp_kw_call_value_9_12 = Py_None;
            tmp_kw_call_value_10_12 = Py_None;
            tmp_kw_call_value_11_12 = Py_None;
            tmp_kw_call_value_12_12 = Py_False;
            tmp_kw_call_value_13_12 = Py_None;
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);

                exception_lineno = 344;

                goto list_build_exception_6;
            }
            tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[130]);
            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);

                exception_lineno = 344;

                goto list_build_exception_6;
            }
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_called_value_54);

                exception_lineno = 344;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 344;
            tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[131]);
            if (tmp_args_element_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_called_value_54);

                exception_lineno = 344;

                goto list_build_exception_6;
            }
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_called_value_54);
                Py_DECREF(tmp_args_element_value_5);

                exception_lineno = 344;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 344;
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_55, mod_consts[132]);

            if (tmp_args_element_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_called_value_54);
                Py_DECREF(tmp_args_element_value_5);

                exception_lineno = 344;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 344;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_kw_call_value_14_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_54, call_args);
            }

            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_kw_call_value_14_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);

                exception_lineno = 344;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 338;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15, tmp_kw_call_value_2_15, tmp_kw_call_value_3_15, tmp_kw_call_value_4_15, tmp_kw_call_value_5_15, tmp_kw_call_value_6_13, tmp_kw_call_value_7_13, tmp_kw_call_value_8_13, tmp_kw_call_value_9_12, tmp_kw_call_value_10_12, tmp_kw_call_value_11_12, tmp_kw_call_value_12_12, tmp_kw_call_value_13_12, tmp_kw_call_value_14_12};

                tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_53, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_value_14_12);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 12, tmp_list_element_9);
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto list_build_exception_6;
            }
            tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[79]);
            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 345;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_56, &PyTuple_GET_ITEM(mod_consts[147], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_56);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 13, tmp_list_element_9);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto list_build_exception_6;
            }
            tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[79]);
            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 352;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_57, &PyTuple_GET_ITEM(mod_consts[148], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_57);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 14, tmp_list_element_9);
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto list_build_exception_6;
            }
            tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[79]);
            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 359;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_58, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_58);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 15, tmp_list_element_9);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_6;
            }
            tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[79]);
            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 366;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_59, &PyTuple_GET_ITEM(mod_consts[150], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_59);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 16, tmp_list_element_9);
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto list_build_exception_6;
            }
            tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[79]);
            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto list_build_exception_6;
            }
            tmp_kw_call_value_0_16 = mod_consts[151];
            tmp_kw_call_value_1_16 = mod_consts[152];
            tmp_kw_call_value_2_16 = mod_consts[153];
            tmp_kw_call_value_3_16 = mod_consts[154];
            tmp_kw_call_value_4_16 = mod_consts[83];
            tmp_kw_call_value_5_16 = mod_consts[83];
            tmp_kw_call_value_6_14 = mod_consts[82];
            tmp_kw_call_value_7_14 = Py_False;
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);

                exception_lineno = 376;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 376;
            tmp_expression_value_60 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_62, mod_consts[84]);

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);

                exception_lineno = 376;

                goto list_build_exception_6;
            }
            tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[85]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);

                exception_lineno = 376;

                goto list_build_exception_6;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 376;
            tmp_kw_call_value_8_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_61, mod_consts[86]);

            Py_DECREF(tmp_called_value_61);
            if (tmp_kw_call_value_8_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);

                exception_lineno = 376;

                goto list_build_exception_6;
            }
            tmp_kw_call_value_9_13 = Py_None;
            tmp_kw_call_value_10_13 = Py_None;
            tmp_kw_call_value_11_13 = Py_None;
            tmp_kw_call_value_12_13 = Py_False;
            tmp_kw_call_value_13_13 = Py_None;
            tmp_kw_call_value_14_13 = Py_None;
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 373;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16, tmp_kw_call_value_2_16, tmp_kw_call_value_3_16, tmp_kw_call_value_4_16, tmp_kw_call_value_5_16, tmp_kw_call_value_6_14, tmp_kw_call_value_7_14, tmp_kw_call_value_8_14, tmp_kw_call_value_9_13, tmp_kw_call_value_10_13, tmp_kw_call_value_11_13, tmp_kw_call_value_12_13, tmp_kw_call_value_13_13, tmp_kw_call_value_14_13};

                tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_60, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_kw_call_value_8_14);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_12, 17, tmp_list_element_9);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_kw_call_value_5_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_kw_call_value_6_15 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_15 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_15 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_14 = Py_None;
        tmp_kw_call_value_10_14 = Py_False;
        tmp_kw_call_value_11_14 = mod_consts[56];
        tmp_kw_call_value_12_14 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_14 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_14 = mod_consts[155];
        tmp_kw_call_value_15_5 = mod_consts[156];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 247;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_12, tmp_kw_call_value_4_12, tmp_kw_call_value_5_12, tmp_kw_call_value_6_15, tmp_kw_call_value_7_15, tmp_kw_call_value_8_15, tmp_kw_call_value_9_14, tmp_kw_call_value_10_14, tmp_kw_call_value_11_14, tmp_kw_call_value_12_14, tmp_kw_call_value_13_14, tmp_kw_call_value_14_14, tmp_kw_call_value_15_5};

            tmp_assign_source_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_36, kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_kw_call_value_5_12);
        Py_DECREF(tmp_kw_call_value_6_15);
        Py_DECREF(tmp_kw_call_value_7_15);
        Py_DECREF(tmp_kw_call_value_8_15);
        Py_DECREF(tmp_kw_call_value_12_14);
        Py_DECREF(tmp_kw_call_value_13_14);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_kw_call_value_1_17;
        PyObject *tmp_kw_call_value_2_17;
        PyObject *tmp_kw_call_value_3_17;
        PyObject *tmp_kw_call_value_4_17;
        PyObject *tmp_kw_call_value_5_17;
        PyObject *tmp_list_element_10;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_kw_call_value_1_18;
        PyObject *tmp_kw_call_value_2_18;
        PyObject *tmp_kw_call_value_3_18;
        PyObject *tmp_kw_call_value_4_18;
        PyObject *tmp_kw_call_value_5_18;
        PyObject *tmp_kw_call_value_6_16;
        PyObject *tmp_kw_call_value_7_16;
        PyObject *tmp_kw_call_value_8_16;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_called_value_66;
        PyObject *tmp_kw_call_value_9_15;
        PyObject *tmp_kw_call_value_10_15;
        PyObject *tmp_kw_call_value_11_15;
        PyObject *tmp_kw_call_value_12_15;
        PyObject *tmp_kw_call_value_13_15;
        PyObject *tmp_kw_call_value_14_15;
        PyObject *tmp_kw_call_value_6_20;
        PyObject *tmp_kw_call_value_7_20;
        PyObject *tmp_kw_call_value_8_20;
        PyObject *tmp_kw_call_value_9_19;
        PyObject *tmp_kw_call_value_10_19;
        PyObject *tmp_kw_call_value_11_19;
        PyObject *tmp_kw_call_value_12_19;
        PyObject *tmp_kw_call_value_13_19;
        PyObject *tmp_kw_call_value_14_19;
        PyObject *tmp_kw_call_value_15_6;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[76]);
        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_17 = mod_consts[158];
        tmp_kw_call_value_1_17 = mod_consts[159];
        tmp_kw_call_value_2_17 = Py_None;
        tmp_kw_call_value_3_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_3_17 == NULL)) {
            tmp_kw_call_value_3_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_3_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_17 = Py_None;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[79]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_18 = mod_consts[80];
        tmp_kw_call_value_1_18 = mod_consts[160];
        tmp_kw_call_value_2_18 = mod_consts[13];
        tmp_kw_call_value_3_18 = mod_consts[82];
        tmp_kw_call_value_4_18 = mod_consts[83];
        tmp_kw_call_value_5_18 = mod_consts[83];
        tmp_kw_call_value_6_16 = mod_consts[82];
        tmp_kw_call_value_7_16 = Py_False;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 407;
        tmp_expression_value_63 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_66, mod_consts[84]);

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[85]);
        Py_DECREF(tmp_expression_value_63);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 407;
        tmp_kw_call_value_8_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_65, mod_consts[86]);

        Py_DECREF(tmp_called_value_65);
        if (tmp_kw_call_value_8_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_15 = Py_None;
        tmp_kw_call_value_10_15 = Py_None;
        tmp_kw_call_value_11_15 = Py_None;
        tmp_kw_call_value_12_15 = Py_False;
        tmp_kw_call_value_13_15 = Py_None;
        tmp_kw_call_value_14_15 = Py_None;
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 404;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_18, tmp_kw_call_value_2_18, tmp_kw_call_value_3_18, tmp_kw_call_value_4_18, tmp_kw_call_value_5_18, tmp_kw_call_value_6_16, tmp_kw_call_value_7_16, tmp_kw_call_value_8_16, tmp_kw_call_value_9_15, tmp_kw_call_value_10_15, tmp_kw_call_value_11_15, tmp_kw_call_value_12_15, tmp_kw_call_value_13_15, tmp_kw_call_value_14_15};

            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_64, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_kw_call_value_8_16);
        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_17 = MAKE_LIST_EMPTY(18);
        {
            PyObject *tmp_called_value_67;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_kw_call_value_0_19;
            PyObject *tmp_kw_call_value_1_19;
            PyObject *tmp_kw_call_value_2_19;
            PyObject *tmp_kw_call_value_3_19;
            PyObject *tmp_kw_call_value_4_19;
            PyObject *tmp_kw_call_value_5_19;
            PyObject *tmp_kw_call_value_6_17;
            PyObject *tmp_kw_call_value_7_17;
            PyObject *tmp_kw_call_value_8_17;
            PyObject *tmp_called_value_68;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_called_value_69;
            PyObject *tmp_kw_call_value_9_16;
            PyObject *tmp_kw_call_value_10_16;
            PyObject *tmp_kw_call_value_11_16;
            PyObject *tmp_kw_call_value_12_16;
            PyObject *tmp_kw_call_value_13_16;
            PyObject *tmp_kw_call_value_14_16;
            PyObject *tmp_called_value_70;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_call_args_kwsplit_5;
            PyObject *tmp_called_value_71;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_call_args_kwsplit_6;
            PyObject *tmp_called_value_72;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_call_args_kwsplit_7;
            PyObject *tmp_called_value_73;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_call_args_kwsplit_8;
            PyObject *tmp_called_value_74;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_called_value_75;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_call_args_kwsplit_9;
            PyObject *tmp_called_value_76;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_called_value_77;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_called_value_78;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_called_value_79;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_called_value_80;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_call_args_kwsplit_10;
            PyObject *tmp_called_value_81;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_kw_call_value_0_20;
            PyObject *tmp_kw_call_value_1_20;
            PyObject *tmp_kw_call_value_2_20;
            PyObject *tmp_kw_call_value_3_20;
            PyObject *tmp_kw_call_value_4_20;
            PyObject *tmp_kw_call_value_5_20;
            PyObject *tmp_kw_call_value_6_18;
            PyObject *tmp_kw_call_value_7_18;
            PyObject *tmp_kw_call_value_8_18;
            PyObject *tmp_called_value_82;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_called_value_83;
            PyObject *tmp_kw_call_value_9_17;
            PyObject *tmp_kw_call_value_10_17;
            PyObject *tmp_kw_call_value_11_17;
            PyObject *tmp_kw_call_value_12_17;
            PyObject *tmp_kw_call_value_13_17;
            PyObject *tmp_kw_call_value_14_17;
            PyObject *tmp_called_value_84;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_kw_call_value_0_21;
            PyObject *tmp_kw_call_value_1_21;
            PyObject *tmp_kw_call_value_2_21;
            PyObject *tmp_kw_call_value_3_21;
            PyObject *tmp_kw_call_value_4_21;
            PyObject *tmp_kw_call_value_5_21;
            PyObject *tmp_kw_call_value_6_19;
            PyObject *tmp_kw_call_value_7_19;
            PyObject *tmp_kw_call_value_8_19;
            PyObject *tmp_kw_call_value_9_18;
            PyObject *tmp_kw_call_value_10_18;
            PyObject *tmp_kw_call_value_11_18;
            PyObject *tmp_kw_call_value_12_18;
            PyObject *tmp_kw_call_value_13_18;
            PyObject *tmp_kw_call_value_14_18;
            PyObject *tmp_called_value_85;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_called_value_86;
            PyObject *tmp_called_value_87;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_called_value_88;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_call_args_kwsplit_11;
            PyObject *tmp_called_value_89;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_call_args_kwsplit_12;
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 0, tmp_list_element_10);
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_7;
            }
            tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[79]);
            if (tmp_called_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_7;
            }
            tmp_kw_call_value_0_19 = mod_consts[161];
            tmp_kw_call_value_1_19 = mod_consts[162];
            tmp_kw_call_value_2_19 = mod_consts[82];
            tmp_kw_call_value_3_19 = mod_consts[90];
            tmp_kw_call_value_4_19 = mod_consts[83];
            tmp_kw_call_value_5_19 = mod_consts[83];
            tmp_kw_call_value_6_17 = mod_consts[82];
            tmp_kw_call_value_7_17 = Py_False;
            tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_69 == NULL)) {
                tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_67);

                exception_lineno = 414;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 414;
            tmp_expression_value_65 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[84]);

            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_67);

                exception_lineno = 414;

                goto list_build_exception_7;
            }
            tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[85]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_67);

                exception_lineno = 414;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 414;
            tmp_kw_call_value_8_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_68, mod_consts[86]);

            Py_DECREF(tmp_called_value_68);
            if (tmp_kw_call_value_8_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_67);

                exception_lineno = 414;

                goto list_build_exception_7;
            }
            tmp_kw_call_value_9_16 = Py_None;
            tmp_kw_call_value_10_16 = Py_None;
            tmp_kw_call_value_11_16 = Py_None;
            tmp_kw_call_value_12_16 = Py_False;
            tmp_kw_call_value_13_16 = Py_None;
            tmp_kw_call_value_14_16 = Py_None;
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 411;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_19, tmp_kw_call_value_1_19, tmp_kw_call_value_2_19, tmp_kw_call_value_3_19, tmp_kw_call_value_4_19, tmp_kw_call_value_5_19, tmp_kw_call_value_6_17, tmp_kw_call_value_7_17, tmp_kw_call_value_8_17, tmp_kw_call_value_9_16, tmp_kw_call_value_10_16, tmp_kw_call_value_11_16, tmp_kw_call_value_12_16, tmp_kw_call_value_13_16, tmp_kw_call_value_14_16};

                tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_67, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_kw_call_value_8_17);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 1, tmp_list_element_10);
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto list_build_exception_7;
            }
            tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[79]);
            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto list_build_exception_7;
            }
            tmp_call_args_kwsplit_5 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[163], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 418;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_70, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_5, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_call_args_kwsplit_5);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 2, tmp_list_element_10);
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto list_build_exception_7;
            }
            tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[79]);
            if (tmp_called_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto list_build_exception_7;
            }
            tmp_call_args_kwsplit_6 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[164], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 425;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_71, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_6, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_call_args_kwsplit_6);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 3, tmp_list_element_10);
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto list_build_exception_7;
            }
            tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[79]);
            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto list_build_exception_7;
            }
            tmp_call_args_kwsplit_7 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[165], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 432;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_72, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_7, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_call_args_kwsplit_7);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 4, tmp_list_element_10);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;

                goto list_build_exception_7;
            }
            tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[79]);
            if (tmp_called_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;

                goto list_build_exception_7;
            }
            tmp_call_args_kwsplit_8 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[166], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 439;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_73, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_8, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_call_args_kwsplit_8);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 5, tmp_list_element_10);
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto list_build_exception_7;
            }
            tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[79]);
            if (tmp_called_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 446;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_74, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_74);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 6, tmp_list_element_10);
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;

                goto list_build_exception_7;
            }
            tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[79]);
            if (tmp_called_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;

                goto list_build_exception_7;
            }
            tmp_call_args_kwsplit_9 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[168], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 453;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_75, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_9, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_75);
            Py_DECREF(tmp_call_args_kwsplit_9);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 7, tmp_list_element_10);
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto list_build_exception_7;
            }
            tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[79]);
            if (tmp_called_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 460;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_76, &PyTuple_GET_ITEM(mod_consts[169], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_76);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 8, tmp_list_element_10);
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;

                goto list_build_exception_7;
            }
            tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[79]);
            if (tmp_called_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 467;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_77, &PyTuple_GET_ITEM(mod_consts[170], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_77);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 9, tmp_list_element_10);
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_7;
            }
            tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[79]);
            if (tmp_called_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 474;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_78, &PyTuple_GET_ITEM(mod_consts[171], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_78);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 10, tmp_list_element_10);
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_7;
            }
            tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[79]);
            if (tmp_called_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 481;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_79, &PyTuple_GET_ITEM(mod_consts[172], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_79);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 11, tmp_list_element_10);
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto list_build_exception_7;
            }
            tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[79]);
            if (tmp_called_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto list_build_exception_7;
            }
            tmp_call_args_kwsplit_10 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[173], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 488;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_80, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_10, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_call_args_kwsplit_10);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 12, tmp_list_element_10);
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;

                goto list_build_exception_7;
            }
            tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[79]);
            if (tmp_called_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;

                goto list_build_exception_7;
            }
            tmp_kw_call_value_0_20 = mod_consts[174];
            tmp_kw_call_value_1_20 = mod_consts[175];
            tmp_kw_call_value_2_20 = mod_consts[146];
            tmp_kw_call_value_3_20 = mod_consts[176];
            tmp_kw_call_value_4_20 = mod_consts[83];
            tmp_kw_call_value_5_20 = mod_consts[83];
            tmp_kw_call_value_6_18 = mod_consts[82];
            tmp_kw_call_value_7_18 = Py_False;
            tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_83 == NULL)) {
                tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_81);

                exception_lineno = 498;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 498;
            tmp_expression_value_78 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_83, mod_consts[84]);

            if (tmp_expression_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_81);

                exception_lineno = 498;

                goto list_build_exception_7;
            }
            tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[85]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_called_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_81);

                exception_lineno = 498;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 498;
            tmp_kw_call_value_8_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_82, mod_consts[86]);

            Py_DECREF(tmp_called_value_82);
            if (tmp_kw_call_value_8_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_81);

                exception_lineno = 498;

                goto list_build_exception_7;
            }
            tmp_kw_call_value_9_17 = Py_None;
            tmp_kw_call_value_10_17 = Py_None;
            tmp_kw_call_value_11_17 = Py_None;
            tmp_kw_call_value_12_17 = Py_False;
            tmp_kw_call_value_13_17 = Py_None;
            tmp_kw_call_value_14_17 = Py_None;
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 495;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_20, tmp_kw_call_value_1_20, tmp_kw_call_value_2_20, tmp_kw_call_value_3_20, tmp_kw_call_value_4_20, tmp_kw_call_value_5_20, tmp_kw_call_value_6_18, tmp_kw_call_value_7_18, tmp_kw_call_value_8_18, tmp_kw_call_value_9_17, tmp_kw_call_value_10_17, tmp_kw_call_value_11_17, tmp_kw_call_value_12_17, tmp_kw_call_value_13_17, tmp_kw_call_value_14_17};

                tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_81, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_81);
            Py_DECREF(tmp_kw_call_value_8_18);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 13, tmp_list_element_10);
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 502;

                goto list_build_exception_7;
            }
            tmp_called_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[79]);
            if (tmp_called_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 502;

                goto list_build_exception_7;
            }
            tmp_kw_call_value_0_21 = mod_consts[177];
            tmp_kw_call_value_1_21 = mod_consts[178];
            tmp_kw_call_value_2_21 = mod_consts[176];
            tmp_kw_call_value_3_21 = mod_consts[179];
            tmp_kw_call_value_4_21 = mod_consts[180];
            tmp_kw_call_value_5_21 = mod_consts[181];
            tmp_kw_call_value_6_19 = mod_consts[82];
            tmp_kw_call_value_7_19 = Py_False;
            tmp_kw_call_value_8_19 = Py_None;
            tmp_kw_call_value_9_18 = Py_None;
            tmp_kw_call_value_10_18 = Py_None;
            tmp_kw_call_value_11_18 = Py_None;
            tmp_kw_call_value_12_18 = Py_False;
            tmp_kw_call_value_13_18 = Py_None;
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);

                exception_lineno = 508;

                goto list_build_exception_7;
            }
            tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[130]);
            if (tmp_called_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);

                exception_lineno = 508;

                goto list_build_exception_7;
            }
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);
                Py_DECREF(tmp_called_value_85);

                exception_lineno = 508;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 508;
            tmp_args_element_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[131]);
            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);
                Py_DECREF(tmp_called_value_85);

                exception_lineno = 508;

                goto list_build_exception_7;
            }
            tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_86 == NULL)) {
                tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);
                Py_DECREF(tmp_called_value_85);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 508;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 508;
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_86, mod_consts[132]);

            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);
                Py_DECREF(tmp_called_value_85);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 508;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 508;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_kw_call_value_14_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_85, call_args);
            }

            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_kw_call_value_14_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);

                exception_lineno = 508;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 502;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_21, tmp_kw_call_value_1_21, tmp_kw_call_value_2_21, tmp_kw_call_value_3_21, tmp_kw_call_value_4_21, tmp_kw_call_value_5_21, tmp_kw_call_value_6_19, tmp_kw_call_value_7_19, tmp_kw_call_value_8_19, tmp_kw_call_value_9_18, tmp_kw_call_value_10_18, tmp_kw_call_value_11_18, tmp_kw_call_value_12_18, tmp_kw_call_value_13_18, tmp_kw_call_value_14_18};

                tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_84, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_kw_call_value_14_18);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 502;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 14, tmp_list_element_10);
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto list_build_exception_7;
            }
            tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[79]);
            if (tmp_called_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto list_build_exception_7;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 509;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_87, &PyTuple_GET_ITEM(mod_consts[182], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_87);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 15, tmp_list_element_10);
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;

                goto list_build_exception_7;
            }
            tmp_called_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[79]);
            if (tmp_called_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;

                goto list_build_exception_7;
            }
            tmp_call_args_kwsplit_11 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[183], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 516;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_88, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_11, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_call_args_kwsplit_11);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 16, tmp_list_element_10);
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;

                goto list_build_exception_7;
            }
            tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[79]);
            if (tmp_called_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;

                goto list_build_exception_7;
            }
            tmp_call_args_kwsplit_12 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[184], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 523;
            tmp_list_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_89, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_12, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_call_args_kwsplit_12);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 17, tmp_list_element_10);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_kw_call_value_5_17);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_kw_call_value_6_20 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_20 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_20 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_19 = Py_None;
        tmp_kw_call_value_10_19 = Py_False;
        tmp_kw_call_value_11_19 = mod_consts[56];
        tmp_kw_call_value_12_19 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_19 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_19 = mod_consts[185];
        tmp_kw_call_value_15_6 = mod_consts[186];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 397;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_17, tmp_kw_call_value_2_17, tmp_kw_call_value_3_17, tmp_kw_call_value_4_17, tmp_kw_call_value_5_17, tmp_kw_call_value_6_20, tmp_kw_call_value_7_20, tmp_kw_call_value_8_20, tmp_kw_call_value_9_19, tmp_kw_call_value_10_19, tmp_kw_call_value_11_19, tmp_kw_call_value_12_19, tmp_kw_call_value_13_19, tmp_kw_call_value_14_19, tmp_kw_call_value_15_6};

            tmp_assign_source_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_63, kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_kw_call_value_5_17);
        Py_DECREF(tmp_kw_call_value_6_20);
        Py_DECREF(tmp_kw_call_value_7_20);
        Py_DECREF(tmp_kw_call_value_8_20);
        Py_DECREF(tmp_kw_call_value_12_19);
        Py_DECREF(tmp_kw_call_value_13_19);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_kw_call_value_0_22;
        PyObject *tmp_kw_call_value_1_22;
        PyObject *tmp_kw_call_value_2_22;
        PyObject *tmp_kw_call_value_3_22;
        PyObject *tmp_kw_call_value_4_22;
        PyObject *tmp_kw_call_value_5_22;
        PyObject *tmp_list_element_11;
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_args_kwsplit_13;
        PyObject *tmp_kw_call_value_6_23;
        PyObject *tmp_kw_call_value_7_23;
        PyObject *tmp_list_element_12;
        PyObject *tmp_kw_call_value_8_23;
        PyObject *tmp_kw_call_value_9_22;
        PyObject *tmp_kw_call_value_10_22;
        PyObject *tmp_kw_call_value_11_22;
        PyObject *tmp_kw_call_value_12_22;
        PyObject *tmp_kw_call_value_13_22;
        PyObject *tmp_kw_call_value_14_22;
        PyObject *tmp_kw_call_value_15_7;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[76]);
        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_22 = mod_consts[188];
        tmp_kw_call_value_1_22 = mod_consts[189];
        tmp_kw_call_value_2_22 = Py_None;
        tmp_kw_call_value_3_22 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_3_22 == NULL)) {
            tmp_kw_call_value_3_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_3_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_22 = Py_None;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[79]);
        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_13 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[190], "iiiiiiiiliiiiii");
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 553;
        tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_91, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_13, 0), mod_consts[87]);
        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_call_args_kwsplit_13);
        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_22 = MAKE_LIST_EMPTY(19);
        {
            PyObject *tmp_called_value_92;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_call_args_kwsplit_14;
            PyObject *tmp_called_value_93;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_call_args_kwsplit_15;
            PyObject *tmp_called_value_94;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_called_value_95;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_call_args_kwsplit_16;
            PyObject *tmp_called_value_96;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_call_args_kwsplit_17;
            PyObject *tmp_called_value_97;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_call_args_kwsplit_18;
            PyObject *tmp_called_value_98;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_call_args_kwsplit_19;
            PyObject *tmp_called_value_99;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_call_args_kwsplit_20;
            PyObject *tmp_called_value_100;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_called_value_101;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_called_value_102;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_called_value_103;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_called_value_104;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_call_args_kwsplit_21;
            PyObject *tmp_called_value_105;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_called_value_106;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_kw_call_value_0_23;
            PyObject *tmp_kw_call_value_1_23;
            PyObject *tmp_kw_call_value_2_23;
            PyObject *tmp_kw_call_value_3_23;
            PyObject *tmp_kw_call_value_4_23;
            PyObject *tmp_kw_call_value_5_23;
            PyObject *tmp_kw_call_value_6_21;
            PyObject *tmp_kw_call_value_7_21;
            PyObject *tmp_kw_call_value_8_21;
            PyObject *tmp_called_value_107;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_called_value_108;
            PyObject *tmp_kw_call_value_9_20;
            PyObject *tmp_kw_call_value_10_20;
            PyObject *tmp_kw_call_value_11_20;
            PyObject *tmp_kw_call_value_12_20;
            PyObject *tmp_kw_call_value_13_20;
            PyObject *tmp_kw_call_value_14_20;
            PyObject *tmp_called_value_109;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_kw_call_value_0_24;
            PyObject *tmp_kw_call_value_1_24;
            PyObject *tmp_kw_call_value_2_24;
            PyObject *tmp_kw_call_value_3_24;
            PyObject *tmp_kw_call_value_4_24;
            PyObject *tmp_kw_call_value_5_24;
            PyObject *tmp_kw_call_value_6_22;
            PyObject *tmp_kw_call_value_7_22;
            PyObject *tmp_kw_call_value_8_22;
            PyObject *tmp_called_value_110;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_called_value_111;
            PyObject *tmp_kw_call_value_9_21;
            PyObject *tmp_kw_call_value_10_21;
            PyObject *tmp_kw_call_value_11_21;
            PyObject *tmp_kw_call_value_12_21;
            PyObject *tmp_kw_call_value_13_21;
            PyObject *tmp_kw_call_value_14_21;
            PyObject *tmp_called_value_112;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_called_value_113;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_call_args_kwsplit_22;
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 0, tmp_list_element_11);
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto list_build_exception_8;
            }
            tmp_called_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[79]);
            if (tmp_called_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_14 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[191], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 560;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_92, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_14, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_call_args_kwsplit_14);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 1, tmp_list_element_11);
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto list_build_exception_8;
            }
            tmp_called_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[79]);
            if (tmp_called_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_15 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[192], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 567;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_93, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_15, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_call_args_kwsplit_15);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 2, tmp_list_element_11);
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;

                goto list_build_exception_8;
            }
            tmp_called_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[79]);
            if (tmp_called_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 574;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_94, &PyTuple_GET_ITEM(mod_consts[193], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_94);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 3, tmp_list_element_11);
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;

                goto list_build_exception_8;
            }
            tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[79]);
            if (tmp_called_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_16 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[194], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 581;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_95, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_16, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_call_args_kwsplit_16);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 4, tmp_list_element_11);
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;

                goto list_build_exception_8;
            }
            tmp_called_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[79]);
            if (tmp_called_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_17 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[195], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 588;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_96, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_17, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_call_args_kwsplit_17);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 5, tmp_list_element_11);
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;

                goto list_build_exception_8;
            }
            tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[79]);
            if (tmp_called_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_18 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[196], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 595;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_97, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_18, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_call_args_kwsplit_18);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 6, tmp_list_element_11);
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;

                goto list_build_exception_8;
            }
            tmp_called_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[79]);
            if (tmp_called_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_19 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[197], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 602;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_98, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_19, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_call_args_kwsplit_19);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 7, tmp_list_element_11);
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;

                goto list_build_exception_8;
            }
            tmp_called_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[79]);
            if (tmp_called_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_20 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[198], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 609;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_99, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_20, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_99);
            Py_DECREF(tmp_call_args_kwsplit_20);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 8, tmp_list_element_11);
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;

                goto list_build_exception_8;
            }
            tmp_called_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[79]);
            if (tmp_called_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 616;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_100, &PyTuple_GET_ITEM(mod_consts[199], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_100);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 9, tmp_list_element_11);
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;

                goto list_build_exception_8;
            }
            tmp_called_value_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[79]);
            if (tmp_called_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 623;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_101, &PyTuple_GET_ITEM(mod_consts[200], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_101);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 10, tmp_list_element_11);
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto list_build_exception_8;
            }
            tmp_called_value_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[79]);
            if (tmp_called_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 630;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_102, &PyTuple_GET_ITEM(mod_consts[201], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_102);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 11, tmp_list_element_11);
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto list_build_exception_8;
            }
            tmp_called_value_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[79]);
            if (tmp_called_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 637;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_103, &PyTuple_GET_ITEM(mod_consts[202], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_103);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 12, tmp_list_element_11);
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto list_build_exception_8;
            }
            tmp_called_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[79]);
            if (tmp_called_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_21 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[203], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 644;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_104, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_21, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_call_args_kwsplit_21);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 13, tmp_list_element_11);
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;

                goto list_build_exception_8;
            }
            tmp_called_value_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[79]);
            if (tmp_called_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 651;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_105, &PyTuple_GET_ITEM(mod_consts[204], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_105);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 14, tmp_list_element_11);
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;

                goto list_build_exception_8;
            }
            tmp_called_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[79]);
            if (tmp_called_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;

                goto list_build_exception_8;
            }
            tmp_kw_call_value_0_23 = mod_consts[205];
            tmp_kw_call_value_1_23 = mod_consts[206];
            tmp_kw_call_value_2_23 = mod_consts[179];
            tmp_kw_call_value_3_23 = mod_consts[207];
            tmp_kw_call_value_4_23 = mod_consts[83];
            tmp_kw_call_value_5_23 = mod_consts[83];
            tmp_kw_call_value_6_21 = mod_consts[82];
            tmp_kw_call_value_7_21 = Py_False;
            tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_108 == NULL)) {
                tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);

                exception_lineno = 661;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 661;
            tmp_expression_value_101 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_108, mod_consts[84]);

            if (tmp_expression_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);

                exception_lineno = 661;

                goto list_build_exception_8;
            }
            tmp_called_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[85]);
            Py_DECREF(tmp_expression_value_101);
            if (tmp_called_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);

                exception_lineno = 661;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 661;
            tmp_kw_call_value_8_21 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_107, mod_consts[86]);

            Py_DECREF(tmp_called_value_107);
            if (tmp_kw_call_value_8_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);

                exception_lineno = 661;

                goto list_build_exception_8;
            }
            tmp_kw_call_value_9_20 = Py_None;
            tmp_kw_call_value_10_20 = Py_None;
            tmp_kw_call_value_11_20 = Py_None;
            tmp_kw_call_value_12_20 = Py_False;
            tmp_kw_call_value_13_20 = Py_None;
            tmp_kw_call_value_14_20 = Py_None;
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 658;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_23, tmp_kw_call_value_1_23, tmp_kw_call_value_2_23, tmp_kw_call_value_3_23, tmp_kw_call_value_4_23, tmp_kw_call_value_5_23, tmp_kw_call_value_6_21, tmp_kw_call_value_7_21, tmp_kw_call_value_8_21, tmp_kw_call_value_9_20, tmp_kw_call_value_10_20, tmp_kw_call_value_11_20, tmp_kw_call_value_12_20, tmp_kw_call_value_13_20, tmp_kw_call_value_14_20};

                tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_106, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_kw_call_value_8_21);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 15, tmp_list_element_11);
            tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_102 == NULL)) {
                tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;

                goto list_build_exception_8;
            }
            tmp_called_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[79]);
            if (tmp_called_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;

                goto list_build_exception_8;
            }
            tmp_kw_call_value_0_24 = mod_consts[88];
            tmp_kw_call_value_1_24 = mod_consts[208];
            tmp_kw_call_value_2_24 = mod_consts[209];
            tmp_kw_call_value_3_24 = mod_consts[210];
            tmp_kw_call_value_4_24 = mod_consts[83];
            tmp_kw_call_value_5_24 = mod_consts[83];
            tmp_kw_call_value_6_22 = mod_consts[82];
            tmp_kw_call_value_7_22 = Py_False;
            tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_111 == NULL)) {
                tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);

                exception_lineno = 668;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 668;
            tmp_expression_value_103 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_111, mod_consts[84]);

            if (tmp_expression_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);

                exception_lineno = 668;

                goto list_build_exception_8;
            }
            tmp_called_value_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[85]);
            Py_DECREF(tmp_expression_value_103);
            if (tmp_called_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);

                exception_lineno = 668;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 668;
            tmp_kw_call_value_8_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_110, mod_consts[86]);

            Py_DECREF(tmp_called_value_110);
            if (tmp_kw_call_value_8_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);

                exception_lineno = 668;

                goto list_build_exception_8;
            }
            tmp_kw_call_value_9_21 = Py_None;
            tmp_kw_call_value_10_21 = Py_None;
            tmp_kw_call_value_11_21 = Py_None;
            tmp_kw_call_value_12_21 = Py_False;
            tmp_kw_call_value_13_21 = Py_None;
            tmp_kw_call_value_14_21 = Py_None;
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 665;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_24, tmp_kw_call_value_1_24, tmp_kw_call_value_2_24, tmp_kw_call_value_3_24, tmp_kw_call_value_4_24, tmp_kw_call_value_5_24, tmp_kw_call_value_6_22, tmp_kw_call_value_7_22, tmp_kw_call_value_8_22, tmp_kw_call_value_9_21, tmp_kw_call_value_10_21, tmp_kw_call_value_11_21, tmp_kw_call_value_12_21, tmp_kw_call_value_13_21, tmp_kw_call_value_14_21};

                tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_109, kw_values, mod_consts[87]);
            }

            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_kw_call_value_8_22);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 16, tmp_list_element_11);
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;

                goto list_build_exception_8;
            }
            tmp_called_value_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[79]);
            if (tmp_called_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;

                goto list_build_exception_8;
            }
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 672;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_112, &PyTuple_GET_ITEM(mod_consts[211], 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_112);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 17, tmp_list_element_11);
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 679;

                goto list_build_exception_8;
            }
            tmp_called_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[79]);
            if (tmp_called_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 679;

                goto list_build_exception_8;
            }
            tmp_call_args_kwsplit_22 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[212], "iiiiiiiiliiiiii");
            frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 679;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_113, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_22, 0), mod_consts[87]);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_call_args_kwsplit_22);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 679;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_22, 18, tmp_list_element_11);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_kw_call_value_5_22);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_kw_call_value_6_23 = MAKE_LIST_EMPTY(0);
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_kw_call_value_5_22);
            Py_DECREF(tmp_kw_call_value_6_23);

            exception_lineno = 689;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_23 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_value_7_23, 0, tmp_list_element_12);
        tmp_kw_call_value_8_23 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_22 = Py_None;
        tmp_kw_call_value_10_22 = Py_False;
        tmp_kw_call_value_11_22 = mod_consts[56];
        tmp_kw_call_value_12_22 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_22 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_22 = mod_consts[213];
        tmp_kw_call_value_15_7 = mod_consts[186];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 546;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_22, tmp_kw_call_value_1_22, tmp_kw_call_value_2_22, tmp_kw_call_value_3_22, tmp_kw_call_value_4_22, tmp_kw_call_value_5_22, tmp_kw_call_value_6_23, tmp_kw_call_value_7_23, tmp_kw_call_value_8_23, tmp_kw_call_value_9_22, tmp_kw_call_value_10_22, tmp_kw_call_value_11_22, tmp_kw_call_value_12_22, tmp_kw_call_value_13_22, tmp_kw_call_value_14_22, tmp_kw_call_value_15_7};

            tmp_assign_source_27 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_90, kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_kw_call_value_5_22);
        Py_DECREF(tmp_kw_call_value_6_23);
        Py_DECREF(tmp_kw_call_value_7_23);
        Py_DECREF(tmp_kw_call_value_8_23);
        Py_DECREF(tmp_kw_call_value_12_22);
        Py_DECREF(tmp_kw_call_value_13_22);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[215]);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 702;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[216]);
        if (tmp_expression_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 702;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[217];
        tmp_assattr_target_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_107, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_107);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 702;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[218], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_subscript_value_2;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[216]);
        if (tmp_expression_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[219];
        tmp_assattr_target_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_109, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_109);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[220], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_assattr_value_5 == NULL)) {
            tmp_assattr_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[221], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_subscript_value_3;
        tmp_assattr_value_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_assattr_value_6 == NULL)) {
            tmp_assattr_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[216]);
        if (tmp_expression_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[222];
        tmp_assattr_target_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_111, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_111);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[218], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[223]);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 706;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[216]);
        if (tmp_expression_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 706;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[217];
        tmp_assattr_target_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_114, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_114);
        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 706;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[218], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_5;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[224]);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 707;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[216]);
        if (tmp_expression_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 707;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[225];
        tmp_assattr_target_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_117, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_117);
        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 707;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[218], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[226]);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[216]);
        if (tmp_expression_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[227];
        tmp_assattr_target_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_120, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_120);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[218], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_subscript_value_7;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[228]);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 709;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[216]);
        if (tmp_expression_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 709;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[229];
        tmp_assattr_target_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_123, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_123);
        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 709;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[218], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_subscript_value_8;
        tmp_assattr_value_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_assattr_value_11 == NULL)) {
            tmp_assattr_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[216]);
        if (tmp_expression_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[230];
        tmp_assattr_target_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_125, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_125);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[218], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_subscript_value_9;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[216]);
        if (tmp_expression_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = mod_consts[177];
        tmp_assattr_target_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_127, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_127);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[218], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[221], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_subscript_value_10;
        tmp_assattr_value_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_assattr_value_14 == NULL)) {
            tmp_assattr_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[216]);
        if (tmp_expression_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[231];
        tmp_assattr_target_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_129, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_129);
        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[218], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_11;
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 714;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[232]);
        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 714;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 714;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[216]);
        if (tmp_expression_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 714;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[233];
        tmp_assattr_target_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_132, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_132);
        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 714;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[218], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 714;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_subscript_value_12;
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[234]);
        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[216]);
        if (tmp_expression_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = mod_consts[235];
        tmp_assattr_target_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_135, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_135);
        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[218], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_13;
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[236]);
        if (tmp_assattr_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 716;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[216]);
        if (tmp_expression_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 716;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[237];
        tmp_assattr_target_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_138, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_138);
        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 716;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[218], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_subscript_value_14;
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[226]);
        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 717;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[216]);
        if (tmp_expression_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 717;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[227];
        tmp_assattr_target_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_141, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_141);
        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 717;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[218], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_15;
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[228]);
        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 718;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[216]);
        if (tmp_expression_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 718;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[229];
        tmp_assattr_target_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_144, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_144);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 718;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[218], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_subscript_value_16;
        tmp_assattr_value_20 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_assattr_value_20 == NULL)) {
            tmp_assattr_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[216]);
        if (tmp_expression_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[174];
        tmp_assattr_target_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_146, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_146);
        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[218], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_subscript_value_17;
        tmp_assattr_value_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_value_21 == NULL)) {
            tmp_assattr_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[216]);
        if (tmp_expression_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = mod_consts[177];
        tmp_assattr_target_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_148, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_148);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[218], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_subscript_value_18;
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[215]);
        if (tmp_assattr_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 721;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[216]);
        if (tmp_expression_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 721;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = mod_consts[217];
        tmp_assattr_target_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_151, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_151);
        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 721;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[218], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_subscript_value_19;
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[224]);
        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 722;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[216]);
        if (tmp_expression_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 722;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = mod_consts[238];
        tmp_assattr_target_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_154, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_154);
        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 722;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[218], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[239]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[77];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[239]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[96];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_ass_subvalue_3 == NULL)) {
            tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[239]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[107];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_ass_subvalue_4 == NULL)) {
            tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[239]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[113];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_ass_subvalue_5 == NULL)) {
            tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_ass_subvalue_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[239]);
        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[121];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscribed_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_ass_subvalue_6 == NULL)) {
            tmp_ass_subvalue_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_ass_subvalue_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[239]);
        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[188];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscribed_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_115;
        PyObject *tmp_kw_call_value_0_25;
        PyObject *tmp_kw_call_value_1_25;
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 730;

            goto frame_exception_exit_1;
        }
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[240]);
        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 730;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[77];
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 730;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[241]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 730;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_10, 0, tmp_tuple_element_1);
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 730;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_25 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_kw_call_value_0_25 == NULL)) {
            tmp_kw_call_value_0_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_kw_call_value_0_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 731;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_25 = mod_consts[243];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 730;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_25, tmp_kw_call_value_1_25};

            tmp_args_element_value_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_115, kw_values, mod_consts[244]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 730;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 730;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_114, call_args);
        }

        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 730;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_28);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;

            goto frame_exception_exit_1;
        }
        tmp_called_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[245]);
        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 735;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 735;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_116, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_116);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_117;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_118;
        PyObject *tmp_kw_call_value_0_26;
        PyObject *tmp_kw_call_value_1_26;
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 737;

            goto frame_exception_exit_1;
        }
        tmp_called_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[240]);
        if (tmp_called_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 737;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[96];
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);

            exception_lineno = 737;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[241]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);

            exception_lineno = 737;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_14, 0, tmp_tuple_element_2);
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 737;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_26 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_kw_call_value_0_26 == NULL)) {
            tmp_kw_call_value_0_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_kw_call_value_0_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 738;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_26 = mod_consts[243];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 737;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_26, tmp_kw_call_value_1_26};

            tmp_args_element_value_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_118, kw_values, mod_consts[244]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 737;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 737;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_117, call_args);
        }

        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 737;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_29);
    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_16;
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;

            goto frame_exception_exit_1;
        }
        tmp_called_value_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[245]);
        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);

            exception_lineno = 742;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 742;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_119, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_119);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_121;
        PyObject *tmp_kw_call_value_0_27;
        PyObject *tmp_kw_call_value_1_27;
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;

            goto frame_exception_exit_1;
        }
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[240]);
        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[107];
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 744;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[241]);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 744;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_18, 0, tmp_tuple_element_3);
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 744;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_27 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_kw_call_value_0_27 == NULL)) {
            tmp_kw_call_value_0_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_kw_call_value_0_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 745;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_27 = mod_consts[243];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 744;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_27, tmp_kw_call_value_1_27};

            tmp_args_element_value_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_121, kw_values, mod_consts[244]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 744;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 744;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_120, call_args);
        }

        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_30);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_20;
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;

            goto frame_exception_exit_1;
        }
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[245]);
        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 749;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 749;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_122, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_122);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_123;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_124;
        PyObject *tmp_kw_call_value_0_28;
        PyObject *tmp_kw_call_value_1_28;
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        tmp_called_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[240]);
        if (tmp_called_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[113];
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);

            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[241]);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);

            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_22, 0, tmp_tuple_element_4);
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_28 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_kw_call_value_0_28 == NULL)) {
            tmp_kw_call_value_0_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_kw_call_value_0_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 752;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_28 = mod_consts[243];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 751;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_28, tmp_kw_call_value_1_28};

            tmp_args_element_value_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_124, kw_values, mod_consts[244]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 751;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_123, call_args);
        }

        Py_DECREF(tmp_called_value_123);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_31);
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_24;
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 756;

            goto frame_exception_exit_1;
        }
        tmp_called_value_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[245]);
        if (tmp_called_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 756;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);

            exception_lineno = 756;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 756;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_125, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_125);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 756;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_127;
        PyObject *tmp_kw_call_value_0_29;
        PyObject *tmp_kw_call_value_1_29;
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto frame_exception_exit_1;
        }
        tmp_called_value_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[240]);
        if (tmp_called_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[121];
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 758;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[241]);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 758;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_26, 0, tmp_tuple_element_5);
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_26);

            exception_lineno = 758;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_kw_call_value_0_29 == NULL)) {
            tmp_kw_call_value_0_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_kw_call_value_0_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_26);

            exception_lineno = 759;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_29 = mod_consts[243];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 758;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_29, tmp_kw_call_value_1_29};

            tmp_args_element_value_27 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_127, kw_values, mod_consts[244]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_26);

            exception_lineno = 758;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 758;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_126, call_args);
        }

        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_32);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_28;
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;

            goto frame_exception_exit_1;
        }
        tmp_called_value_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[245]);
        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 763;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 763;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_128, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_128);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_129;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_130;
        PyObject *tmp_kw_call_value_0_30;
        PyObject *tmp_called_value_131;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_132;
        PyObject *tmp_kw_call_value_0_31;
        PyObject *tmp_kw_call_value_1_30;
        PyObject *tmp_kw_call_value_1_31;
        PyObject *tmp_kw_call_value_2_25;
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        tmp_called_value_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[240]);
        if (tmp_called_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = mod_consts[188];
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);

            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[241]);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);

            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_30, 0, tmp_tuple_element_6);
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        tmp_called_value_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[240]);
        if (tmp_called_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = mod_consts[158];
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts[241]);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_33, 0, tmp_tuple_element_7);
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_31 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_kw_call_value_0_31 == NULL)) {
            tmp_kw_call_value_0_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_kw_call_value_0_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 768;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_30 = mod_consts[243];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 767;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_31, tmp_kw_call_value_1_30};

            tmp_args_element_value_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_132, kw_values, mod_consts[244]);
        }

        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 767;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_kw_call_value_0_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_131, call_args);
        }

        Py_DECREF(tmp_called_value_131);
        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_kw_call_value_0_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_31 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_kw_call_value_1_31 == NULL)) {
            tmp_kw_call_value_1_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_kw_call_value_1_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_kw_call_value_0_30);

            exception_lineno = 773;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_25 = mod_consts[243];
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 765;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_30, tmp_kw_call_value_1_31, tmp_kw_call_value_2_25};

            tmp_args_element_value_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_130, kw_values, mod_consts[246]);
        }

        Py_DECREF(tmp_kw_call_value_0_30);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 765;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_129, call_args);
        }

        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_33);
    }
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_35;
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;

            goto frame_exception_exit_1;
        }
        tmp_called_value_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[245]);
        if (tmp_called_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 777;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 777;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_133, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_133);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_183;
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;

            goto frame_exception_exit_1;
        }
        tmp_called_value_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts[245]);
        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 778;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts[158]);
        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 778;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 778;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_134, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_value_24 = Py_True;
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[247], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_called_value_135;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_136;
        PyObject *tmp_assattr_target_25;
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        tmp_called_value_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts[130]);
        if (tmp_called_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);

            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 782;
        tmp_args_element_value_37 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[248]);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);

            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 782;
        tmp_args_element_value_38 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_136, mod_consts[249]);

        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 782;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_assattr_value_25 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_135, call_args);
        }

        Py_DECREF(tmp_called_value_135);
        Py_DECREF(tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_assattr_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[250], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_subscript_value_20;
        tmp_assattr_value_26 = Py_True;
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_185 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts[216]);
        if (tmp_expression_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = mod_consts[125];
        tmp_assattr_target_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_185, tmp_subscript_value_20);
        Py_DECREF(tmp_expression_value_185);
        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[247], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_target_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_value_138;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_subscript_value_21;
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts[130]);
        if (tmp_called_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);

            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 784;
        tmp_args_element_value_39 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[131]);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);

            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_138 == NULL)) {
            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 784;
        tmp_args_element_value_40 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_138, mod_consts[132]);

        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 784;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_assattr_value_27 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_137, call_args);
        }

        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_assattr_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts[216]);
        if (tmp_expression_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = mod_consts[125];
        tmp_assattr_target_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_188, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_188);
        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[250], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_target_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_assattr_target_28;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_subscript_value_22;
        tmp_assattr_value_28 = Py_True;
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_190 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts[216]);
        if (tmp_expression_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = mod_consts[143];
        tmp_assattr_target_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_190, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_190);
        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[247], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_target_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_called_value_139;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_140;
        PyObject *tmp_assattr_target_29;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_subscript_value_23;
        tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_192 == NULL)) {
            tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        tmp_called_value_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_192, mod_consts[130]);
        if (tmp_called_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);

            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 786;
        tmp_args_element_value_41 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[131]);
        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);

            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 786;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_140, mod_consts[132]);

        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 786;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assattr_value_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_139, call_args);
        }

        Py_DECREF(tmp_called_value_139);
        Py_DECREF(tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_194, mod_consts[216]);
        if (tmp_expression_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[143];
        tmp_assattr_target_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_193, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_193);
        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[250], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_target_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_assattr_target_30;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_subscript_value_24;
        tmp_assattr_value_30 = Py_True;
        tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_196 == NULL)) {
            tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_expression_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts[216]);
        if (tmp_expression_value_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = mod_consts[177];
        tmp_assattr_target_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_195, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_195);
        if (tmp_assattr_target_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[247], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_target_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_called_value_141;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_142;
        PyObject *tmp_assattr_target_31;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_subscript_value_25;
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_called_value_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_197, mod_consts[130]);
        if (tmp_called_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);

            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 788;
        tmp_args_element_value_43 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[131]);
        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);

            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 788;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_142, mod_consts[132]);

        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame.f_lineno = 788;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_assattr_value_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_141, call_args);
        }

        Py_DECREF(tmp_called_value_141);
        Py_DECREF(tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_assattr_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts[216]);
        if (tmp_expression_value_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = mod_consts[177];
        tmp_assattr_target_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_198, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_198);
        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[250], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_target_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90bf10c9e2af4c0ff32e8309c36e47b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90bf10c9e2af4c0ff32e8309c36e47b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90bf10c9e2af4c0ff32e8309c36e47b0, exception_lineno);
    }



    assertFrameObject(frame_90bf10c9e2af4c0ff32e8309c36e47b0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mediapipe$framework$calculator_pb2", false);

    Py_INCREF(module_mediapipe$framework$calculator_pb2);
    return module_mediapipe$framework$calculator_pb2;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$calculator_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("mediapipe$framework$calculator_pb2", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
