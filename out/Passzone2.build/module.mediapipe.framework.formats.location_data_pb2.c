/* Generated code for Python module 'mediapipe$framework$formats$location_data_pb2'
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

/* The "module_mediapipe$framework$formats$location_data_pb2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mediapipe$framework$formats$location_data_pb2;
PyDictObject *moduledict_mediapipe$framework$formats$location_data_pb2;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[137];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[137];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("mediapipe.framework.formats.location_data_pb2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 137; i++) {
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
void checkModuleConstants_mediapipe$framework$formats$location_data_pb2(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 137; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_83390fd636d1fbdb8ce5d9803180c11c;
static PyCodeObject *codeobj_4a55685d60249773308bfc6fb23f3962;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[133]); CHECK_OBJECT(module_filename_obj);
    codeobj_83390fd636d1fbdb8ce5d9803180c11c = MAKE_CODE_OBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[134], NULL, 1, 0, 0);
    codeobj_4a55685d60249773308bfc6fb23f3962 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[135], mod_consts[135], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mediapipe$framework$formats$location_data_pb2$$$function__2_lambda();


// The module function definitions.
static PyObject *impl_mediapipe$framework$formats$location_data_pb2$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_83390fd636d1fbdb8ce5d9803180c11c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83390fd636d1fbdb8ce5d9803180c11c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83390fd636d1fbdb8ce5d9803180c11c)) {
        Py_XDECREF(cache_frame_83390fd636d1fbdb8ce5d9803180c11c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83390fd636d1fbdb8ce5d9803180c11c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83390fd636d1fbdb8ce5d9803180c11c = MAKE_FUNCTION_FRAME(tstate, codeobj_83390fd636d1fbdb8ce5d9803180c11c, module_mediapipe$framework$formats$location_data_pb2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83390fd636d1fbdb8ce5d9803180c11c->m_type_description == NULL);
    frame_83390fd636d1fbdb8ce5d9803180c11c = cache_frame_83390fd636d1fbdb8ce5d9803180c11c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_83390fd636d1fbdb8ce5d9803180c11c);
    assert(Py_REFCNT(frame_83390fd636d1fbdb8ce5d9803180c11c) == 2);

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
        frame_83390fd636d1fbdb8ce5d9803180c11c->m_frame.f_lineno = 5;
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
        exception_tb = MAKE_TRACEBACK(frame_83390fd636d1fbdb8ce5d9803180c11c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83390fd636d1fbdb8ce5d9803180c11c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83390fd636d1fbdb8ce5d9803180c11c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83390fd636d1fbdb8ce5d9803180c11c,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_83390fd636d1fbdb8ce5d9803180c11c == cache_frame_83390fd636d1fbdb8ce5d9803180c11c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83390fd636d1fbdb8ce5d9803180c11c);
        cache_frame_83390fd636d1fbdb8ce5d9803180c11c = NULL;
    }

    assertFrameObject(frame_83390fd636d1fbdb8ce5d9803180c11c);

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



static PyObject *MAKE_FUNCTION_mediapipe$framework$formats$location_data_pb2$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mediapipe$framework$formats$location_data_pb2$$$function__2_lambda,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_83390fd636d1fbdb8ce5d9803180c11c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mediapipe$framework$formats$location_data_pb2,
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

static function_impl_code const function_table_mediapipe$framework$formats$location_data_pb2[] = {
    impl_mediapipe$framework$formats$location_data_pb2$$$function__2_lambda,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_mediapipe$framework$formats$location_data_pb2);

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
        module_mediapipe$framework$formats$location_data_pb2,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_mediapipe$framework$formats$location_data_pb2,
        sizeof(function_table_mediapipe$framework$formats$location_data_pb2) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_mediapipe$framework$formats$location_data_pb2(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mediapipe$framework$formats$location_data_pb2");

    // Store the module for future use.
    module_mediapipe$framework$formats$location_data_pb2 = module;

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
        PRINT_STRING("mediapipe$framework$formats$location_data_pb2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("mediapipe$framework$formats$location_data_pb2: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmediapipe$framework$formats$location_data_pb2\n");

    moduledict_mediapipe$framework$formats$location_data_pb2 = MODULE_DICT(module_mediapipe$framework$formats$location_data_pb2);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mediapipe$framework$formats$location_data_pb2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mediapipe$framework$formats$location_data_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[136]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mediapipe$framework$formats$location_data_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mediapipe$framework$formats$location_data_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mediapipe$framework$formats$location_data_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mediapipe$framework$formats$location_data_pb2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_mediapipe$framework$formats$location_data_pb2);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_4a55685d60249773308bfc6fb23f3962;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    frame_4a55685d60249773308bfc6fb23f3962 = MAKE_MODULE_FRAME(codeobj_4a55685d60249773308bfc6fb23f3962, module_mediapipe$framework$formats$location_data_pb2);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4a55685d60249773308bfc6fb23f3962);
    assert(Py_REFCNT(frame_4a55685d60249773308bfc6fb23f3962) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[4]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[4]);

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
        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_mediapipe$framework$formats$location_data_pb2$$$function__2_lambda();

        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
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
        tmp_globals_arg_value_1 = (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[12];
        tmp_level_value_1 = mod_consts[13];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[16];
        tmp_level_value_2 = mod_consts[13];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
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
        tmp_globals_arg_value_3 = (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[19];
        tmp_level_value_3 = mod_consts[13];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[22];
        tmp_level_value_4 = mod_consts[13];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 9;
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
                (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_9);
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
        tmp_globals_arg_value_5 = (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[25];
        tmp_level_value_5 = mod_consts[13];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 10;
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
                (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 13;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_11);
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
        tmp_globals_arg_value_6 = (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[30];
        tmp_level_value_6 = mod_consts[13];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 16;
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
                (PyObject *)moduledict_mediapipe$framework$formats$location_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[34];
        tmp_kw_call_value_1_1 = mod_consts[35];
        tmp_kw_call_value_2_1 = mod_consts[36];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 23;
        tmp_kw_call_value_3_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[37]);

        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_value_4_1, 0, tmp_list_element_1);
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 19;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_assign_source_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_13);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 26;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[41]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[42];
        tmp_kw_call_value_1_2 = mod_consts[43];
        tmp_kw_call_value_2_2 = Py_None;
        tmp_kw_call_value_3_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_value_3_2 == NULL)) {
            tmp_kw_call_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_kw_call_value_3_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[44]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 36;
        tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[45], 0), mod_consts[46]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_2 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_8;
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 0, tmp_list_element_2);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[44]);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto list_build_exception_1;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 40;
            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[47], 0), mod_consts[46]);
            Py_DECREF(tmp_called_value_6);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 1, tmp_list_element_2);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto list_build_exception_1;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[44]);
            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto list_build_exception_1;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 44;
            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[48], 0), mod_consts[46]);
            Py_DECREF(tmp_called_value_7);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 2, tmp_list_element_2);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_1;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[44]);
            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_1;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 48;
            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[49], 0), mod_consts[46]);
            Py_DECREF(tmp_called_value_8);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 3, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_4_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_5_1 = Py_None;
        tmp_kw_call_value_6_1 = Py_None;
        tmp_kw_call_value_7_1 = mod_consts[50];
        tmp_kw_call_value_8_1 = mod_consts[51];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 30;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

            tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_4_2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_14);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[54]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 58;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_3;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_6_2;
        PyObject *tmp_kw_call_value_7_2;
        PyObject *tmp_kw_call_value_8_2;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_kw_call_value_12_1;
        PyObject *tmp_kw_call_value_13_1;
        PyObject *tmp_kw_call_value_14_1;
        PyObject *tmp_kw_call_value_15_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[55]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[56];
        tmp_kw_call_value_1_3 = mod_consts[57];
        tmp_kw_call_value_2_3 = Py_None;
        tmp_kw_call_value_3_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_value_3_3 == NULL)) {
            tmp_kw_call_value_3_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_kw_call_value_3_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_3 = Py_None;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[58]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 68;
        tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_11);
        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_2 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_14;
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 0, tmp_list_element_3);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto list_build_exception_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[58]);
            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto list_build_exception_2;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 75;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_12);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 1, tmp_list_element_3);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_2;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[58]);
            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_2;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 82;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_13);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 2, tmp_list_element_3);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_2;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[58]);
            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_2;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 89;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_14);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 3, tmp_list_element_3);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_5_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_kw_call_value_6_2 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_2 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_2 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_1 = Py_None;
        tmp_kw_call_value_10_1 = Py_False;
        tmp_kw_call_value_11_1 = mod_consts[36];
        tmp_kw_call_value_12_1 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_1 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_1 = mod_consts[64];
        tmp_kw_call_value_15_1 = mod_consts[65];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 61;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1, tmp_kw_call_value_14_1, tmp_kw_call_value_15_1};

            tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_10, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_5_2);
        Py_DECREF(tmp_kw_call_value_6_2);
        Py_DECREF(tmp_kw_call_value_7_2);
        Py_DECREF(tmp_kw_call_value_8_2);
        Py_DECREF(tmp_kw_call_value_12_1);
        Py_DECREF(tmp_kw_call_value_13_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_kw_call_value_4_4;
        PyObject *tmp_kw_call_value_5_3;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_6_3;
        PyObject *tmp_kw_call_value_7_3;
        PyObject *tmp_kw_call_value_8_3;
        PyObject *tmp_kw_call_value_9_2;
        PyObject *tmp_kw_call_value_10_2;
        PyObject *tmp_kw_call_value_11_2;
        PyObject *tmp_kw_call_value_12_2;
        PyObject *tmp_kw_call_value_13_2;
        PyObject *tmp_kw_call_value_14_2;
        PyObject *tmp_kw_call_value_15_2;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[55]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = mod_consts[68];
        tmp_kw_call_value_1_4 = mod_consts[69];
        tmp_kw_call_value_2_4 = Py_None;
        tmp_kw_call_value_3_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_value_3_4 == NULL)) {
            tmp_kw_call_value_3_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_kw_call_value_3_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_4 = Py_None;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[58]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 119;
        tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_3 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_19;
            PyList_SET_ITEM(tmp_kw_call_value_5_3, 0, tmp_list_element_4);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto list_build_exception_3;
            }
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[58]);
            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto list_build_exception_3;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 126;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[71], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_17);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_3, 1, tmp_list_element_4);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_3;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[58]);
            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_3;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 133;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[72], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_18);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_3, 2, tmp_list_element_4);
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_3;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[58]);
            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_3;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 140;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[73], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_19);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_3, 3, tmp_list_element_4);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_value_5_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_kw_call_value_6_3 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_3 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_3 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_2 = Py_None;
        tmp_kw_call_value_10_2 = Py_False;
        tmp_kw_call_value_11_2 = mod_consts[36];
        tmp_kw_call_value_12_2 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_2 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_2 = mod_consts[74];
        tmp_kw_call_value_15_2 = mod_consts[75];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 112;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3, tmp_kw_call_value_8_3, tmp_kw_call_value_9_2, tmp_kw_call_value_10_2, tmp_kw_call_value_11_2, tmp_kw_call_value_12_2, tmp_kw_call_value_13_2, tmp_kw_call_value_14_2, tmp_kw_call_value_15_2};

            tmp_assign_source_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_15, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_value_5_3);
        Py_DECREF(tmp_kw_call_value_6_3);
        Py_DECREF(tmp_kw_call_value_7_3);
        Py_DECREF(tmp_kw_call_value_8_3);
        Py_DECREF(tmp_kw_call_value_12_2);
        Py_DECREF(tmp_kw_call_value_13_2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_kw_call_value_4_5;
        PyObject *tmp_kw_call_value_5_4;
        PyObject *tmp_list_element_5;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_6_4;
        PyObject *tmp_kw_call_value_7_4;
        PyObject *tmp_kw_call_value_8_4;
        PyObject *tmp_kw_call_value_9_3;
        PyObject *tmp_kw_call_value_10_3;
        PyObject *tmp_kw_call_value_11_3;
        PyObject *tmp_kw_call_value_12_3;
        PyObject *tmp_kw_call_value_13_3;
        PyObject *tmp_kw_call_value_14_3;
        PyObject *tmp_kw_call_value_15_3;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[55]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = mod_consts[77];
        tmp_kw_call_value_1_5 = mod_consts[78];
        tmp_kw_call_value_2_5 = Py_None;
        tmp_kw_call_value_3_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_value_3_5 == NULL)) {
            tmp_kw_call_value_3_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_kw_call_value_3_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_5 = Py_None;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[58]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 170;
        tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[79], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_21);
        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_4 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_23;
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 0, tmp_list_element_5);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto list_build_exception_4;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[58]);
            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto list_build_exception_4;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 177;
            tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[80], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_22);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 1, tmp_list_element_5);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto list_build_exception_4;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[58]);
            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto list_build_exception_4;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 184;
            tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[81], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_23);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 2, tmp_list_element_5);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_value_5_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_kw_call_value_6_4 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_4 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_4 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_3 = Py_None;
        tmp_kw_call_value_10_3 = Py_False;
        tmp_kw_call_value_11_3 = mod_consts[36];
        tmp_kw_call_value_12_3 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_3 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_3 = mod_consts[82];
        tmp_kw_call_value_15_3 = mod_consts[83];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 163;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5, tmp_kw_call_value_5_4, tmp_kw_call_value_6_4, tmp_kw_call_value_7_4, tmp_kw_call_value_8_4, tmp_kw_call_value_9_3, tmp_kw_call_value_10_3, tmp_kw_call_value_11_3, tmp_kw_call_value_12_3, tmp_kw_call_value_13_3, tmp_kw_call_value_14_3, tmp_kw_call_value_15_3};

            tmp_assign_source_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_20, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_value_5_4);
        Py_DECREF(tmp_kw_call_value_6_4);
        Py_DECREF(tmp_kw_call_value_7_4);
        Py_DECREF(tmp_kw_call_value_8_4);
        Py_DECREF(tmp_kw_call_value_12_3);
        Py_DECREF(tmp_kw_call_value_13_3);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_kw_call_value_4_6;
        PyObject *tmp_kw_call_value_5_5;
        PyObject *tmp_list_element_6;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_kw_call_value_6_6;
        PyObject *tmp_kw_call_value_7_6;
        PyObject *tmp_kw_call_value_8_6;
        PyObject *tmp_kw_call_value_9_5;
        PyObject *tmp_kw_call_value_10_5;
        PyObject *tmp_kw_call_value_11_5;
        PyObject *tmp_kw_call_value_12_5;
        PyObject *tmp_kw_call_value_13_5;
        PyObject *tmp_kw_call_value_14_5;
        PyObject *tmp_kw_call_value_15_4;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[55]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[85];
        tmp_kw_call_value_1_6 = mod_consts[86];
        tmp_kw_call_value_2_6 = Py_None;
        tmp_kw_call_value_3_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_value_3_6 == NULL)) {
            tmp_kw_call_value_3_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_kw_call_value_3_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_6 = Py_None;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[58]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 214;
        tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[87], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_25);
        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_5 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_kw_call_value_1_7;
            PyObject *tmp_kw_call_value_2_7;
            PyObject *tmp_kw_call_value_3_7;
            PyObject *tmp_kw_call_value_4_7;
            PyObject *tmp_kw_call_value_5_6;
            PyObject *tmp_kw_call_value_6_5;
            PyObject *tmp_kw_call_value_7_5;
            PyObject *tmp_kw_call_value_8_5;
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_kw_call_value_9_4;
            PyObject *tmp_kw_call_value_10_4;
            PyObject *tmp_kw_call_value_11_4;
            PyObject *tmp_kw_call_value_12_4;
            PyObject *tmp_kw_call_value_13_4;
            PyObject *tmp_kw_call_value_14_4;
            PyObject *tmp_called_value_30;
            PyObject *tmp_expression_value_29;
            PyList_SET_ITEM(tmp_kw_call_value_5_5, 0, tmp_list_element_6);
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto list_build_exception_5;
            }
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[58]);
            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto list_build_exception_5;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 221;
            tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[88], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_26);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_5, 1, tmp_list_element_6);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto list_build_exception_5;
            }
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[58]);
            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_0_7 = mod_consts[89];
            tmp_kw_call_value_1_7 = mod_consts[90];
            tmp_kw_call_value_2_7 = mod_consts[91];
            tmp_kw_call_value_3_7 = mod_consts[92];
            tmp_kw_call_value_4_7 = mod_consts[93];
            tmp_kw_call_value_5_6 = mod_consts[93];
            tmp_kw_call_value_6_5 = mod_consts[94];
            tmp_kw_call_value_7_5 = Py_False;
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 231;

                goto list_build_exception_5;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 231;
            tmp_expression_value_28 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[95]);

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 231;

                goto list_build_exception_5;
            }
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[96]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 231;

                goto list_build_exception_5;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 231;
            tmp_kw_call_value_8_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_28, mod_consts[97]);

            Py_DECREF(tmp_called_value_28);
            if (tmp_kw_call_value_8_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 231;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_9_4 = Py_None;
            tmp_kw_call_value_10_4 = Py_None;
            tmp_kw_call_value_11_4 = Py_None;
            tmp_kw_call_value_12_4 = Py_False;
            tmp_kw_call_value_13_4 = Py_None;
            tmp_kw_call_value_14_4 = Py_None;
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 228;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7, tmp_kw_call_value_5_6, tmp_kw_call_value_6_5, tmp_kw_call_value_7_5, tmp_kw_call_value_8_5, tmp_kw_call_value_9_4, tmp_kw_call_value_10_4, tmp_kw_call_value_11_4, tmp_kw_call_value_12_4, tmp_kw_call_value_13_4, tmp_kw_call_value_14_4};

                tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_27, kw_values, mod_consts[60]);
            }

            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_kw_call_value_8_5);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_5, 2, tmp_list_element_6);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto list_build_exception_5;
            }
            tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[58]);
            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto list_build_exception_5;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 235;
            tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_30);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_5, 3, tmp_list_element_6);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_value_5_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_kw_call_value_6_6 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_6 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_6 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_5 = Py_None;
        tmp_kw_call_value_10_5 = Py_False;
        tmp_kw_call_value_11_5 = mod_consts[36];
        tmp_kw_call_value_12_5 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_5 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_5 = mod_consts[99];
        tmp_kw_call_value_15_4 = mod_consts[100];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 207;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6, tmp_kw_call_value_5_5, tmp_kw_call_value_6_6, tmp_kw_call_value_7_6, tmp_kw_call_value_8_6, tmp_kw_call_value_9_5, tmp_kw_call_value_10_5, tmp_kw_call_value_11_5, tmp_kw_call_value_12_5, tmp_kw_call_value_13_5, tmp_kw_call_value_14_5, tmp_kw_call_value_15_4};

            tmp_assign_source_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_24, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_value_5_5);
        Py_DECREF(tmp_kw_call_value_6_6);
        Py_DECREF(tmp_kw_call_value_7_6);
        Py_DECREF(tmp_kw_call_value_8_6);
        Py_DECREF(tmp_kw_call_value_12_5);
        Py_DECREF(tmp_kw_call_value_13_5);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_kw_call_value_4_8;
        PyObject *tmp_kw_call_value_5_7;
        PyObject *tmp_list_element_7;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_kw_call_value_6_7;
        PyObject *tmp_kw_call_value_7_7;
        PyObject *tmp_list_element_8;
        PyObject *tmp_kw_call_value_8_7;
        PyObject *tmp_list_element_9;
        PyObject *tmp_kw_call_value_9_6;
        PyObject *tmp_kw_call_value_10_6;
        PyObject *tmp_kw_call_value_11_6;
        PyObject *tmp_kw_call_value_12_6;
        PyObject *tmp_kw_call_value_13_6;
        PyObject *tmp_kw_call_value_14_6;
        PyObject *tmp_kw_call_value_15_5;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[55]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = mod_consts[102];
        tmp_kw_call_value_1_8 = mod_consts[103];
        tmp_kw_call_value_2_8 = Py_None;
        tmp_kw_call_value_3_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_kw_call_value_3_8 == NULL)) {
            tmp_kw_call_value_3_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_kw_call_value_3_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_8 = Py_None;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[58]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 265;
        tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[104], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_32);
        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_7 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_call_args_kwsplit_1;
            PyList_SET_ITEM(tmp_kw_call_value_5_7, 0, tmp_list_element_7);
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto list_build_exception_6;
            }
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[58]);
            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto list_build_exception_6;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 272;
            tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[105], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_33);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_7, 1, tmp_list_element_7);
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto list_build_exception_6;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[58]);
            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto list_build_exception_6;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 279;
            tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_34);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_7, 2, tmp_list_element_7);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto list_build_exception_6;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[58]);
            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto list_build_exception_6;
            }
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 286;
            tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[107], 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_35);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_7, 3, tmp_list_element_7);
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto list_build_exception_6;
            }
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[58]);
            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto list_build_exception_6;
            }
            tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[108], "iiiiiiiiliiiiii");
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 293;
            tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_36, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[60]);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_call_args_kwsplit_1);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_7, 4, tmp_list_element_7);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_value_5_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_kw_call_value_6_7 = MAKE_LIST_EMPTY(0);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_kw_call_value_5_7);
            Py_DECREF(tmp_kw_call_value_6_7);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_7 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_kw_call_value_7_7, 0, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_7_7, 1, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_7_7, 2, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_7_7, 3, tmp_list_element_8);
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_value_5_7);
        Py_DECREF(tmp_kw_call_value_6_7);
        Py_DECREF(tmp_kw_call_value_7_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_kw_call_value_5_7);
            Py_DECREF(tmp_kw_call_value_6_7);
            Py_DECREF(tmp_kw_call_value_7_7);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_7 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_value_8_7, 0, tmp_list_element_9);
        tmp_kw_call_value_9_6 = Py_None;
        tmp_kw_call_value_10_6 = Py_False;
        tmp_kw_call_value_11_6 = mod_consts[36];
        tmp_kw_call_value_12_6 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_6 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_6 = mod_consts[109];
        tmp_kw_call_value_15_5 = mod_consts[51];
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 258;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8, tmp_kw_call_value_4_8, tmp_kw_call_value_5_7, tmp_kw_call_value_6_7, tmp_kw_call_value_7_7, tmp_kw_call_value_8_7, tmp_kw_call_value_9_6, tmp_kw_call_value_10_6, tmp_kw_call_value_11_6, tmp_kw_call_value_12_6, tmp_kw_call_value_13_6, tmp_kw_call_value_14_6, tmp_kw_call_value_15_5};

            tmp_assign_source_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_31, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_value_5_7);
        Py_DECREF(tmp_kw_call_value_6_7);
        Py_DECREF(tmp_kw_call_value_7_7);
        Py_DECREF(tmp_kw_call_value_8_7);
        Py_DECREF(tmp_kw_call_value_12_6);
        Py_DECREF(tmp_kw_call_value_13_6);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        assert(!(tmp_assattr_value_3 == NULL));
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[111], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[111], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[112]);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[113]);
        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[114];
        tmp_assattr_target_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[115], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assattr_value_6 == NULL)) {
            tmp_assattr_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[111], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[111], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_2;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[113]);
        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[116];
        tmp_assattr_target_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[117], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_3;
        tmp_assattr_value_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_assattr_value_9 == NULL)) {
            tmp_assattr_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[113]);
        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[118];
        tmp_assattr_target_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[115], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_4;
        tmp_assattr_value_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_value_10 == NULL)) {
            tmp_assattr_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[113]);
        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[119];
        tmp_assattr_target_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[115], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_5;
        tmp_assattr_value_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_assattr_value_11 == NULL)) {
            tmp_assattr_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[113]);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[120];
        tmp_assattr_target_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[115], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_6;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[113]);
        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[121];
        tmp_assattr_target_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[115], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[111], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[122]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[102];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[123]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[102];
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[124]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[56];
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[123]);
        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[56];
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[124]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_7, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[38];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_8, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[125];
        tmp_dict_value_2 = mod_consts[126];
        tmp_res = PyDict_SetItem(tmp_args_element_value_8, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_called_value_40;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[68];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto dict_build_exception_1;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[123]);
            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_9 = mod_consts[68];
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 339;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[124]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 339;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_10 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_element_value_10, 0, tmp_tuple_element_3);
            tmp_dict_key_3 = mod_consts[38];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_args_element_value_10);

                exception_lineno = 340;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_11 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_args_element_value_11, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[125];
            tmp_dict_value_3 = mod_consts[126];
            tmp_res = PyDict_SetItem(tmp_args_element_value_11, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 339;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_39, call_args);
            }

            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[77];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto dict_build_exception_1;
            }
            tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[123]);
            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_12 = mod_consts[77];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);

                exception_lineno = 346;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[124]);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);

                exception_lineno = 346;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_4);
            tmp_dict_key_4 = mod_consts[38];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[84]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_13);

                exception_lineno = 347;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_14 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_args_element_value_14, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[125];
            tmp_dict_value_4 = mod_consts[126];
            tmp_res = PyDict_SetItem(tmp_args_element_value_14, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 346;
            {
                PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_40, call_args);
            }

            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto dict_build_exception_1;
            }
            tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[123]);
            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_15 = mod_consts[85];
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);

                exception_lineno = 353;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[124]);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);

                exception_lineno = 353;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_16 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_element_value_16, 0, tmp_tuple_element_5);
            tmp_dict_key_5 = mod_consts[38];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_16);

                exception_lineno = 354;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_17 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_args_element_value_17, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[125];
            tmp_dict_value_5 = mod_consts[126];
            tmp_res = PyDict_SetItem(tmp_args_element_value_17, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 353;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_41, call_args);
            }

            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[38];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[125];
            tmp_dict_value_1 = mod_consts[126];
            tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_20);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_18;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[127]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 363;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_62;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[127]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[56]);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 364;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_64;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[127]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[68]);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 365;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_66;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[127]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[77]);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 366;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_68;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[127]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[85]);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 367;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = Py_True;
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[128], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_48;
        PyObject *tmp_assattr_target_15;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[129]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 371;
        tmp_args_element_value_23 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[130]);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 371;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_48, mod_consts[131]);

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        frame_4a55685d60249773308bfc6fb23f3962->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assattr_value_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[132], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a55685d60249773308bfc6fb23f3962, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a55685d60249773308bfc6fb23f3962->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a55685d60249773308bfc6fb23f3962, exception_lineno);
    }



    assertFrameObject(frame_4a55685d60249773308bfc6fb23f3962);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mediapipe$framework$formats$location_data_pb2", false);

    Py_INCREF(module_mediapipe$framework$formats$location_data_pb2);
    return module_mediapipe$framework$formats$location_data_pb2;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$framework$formats$location_data_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("mediapipe$framework$formats$location_data_pb2", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
