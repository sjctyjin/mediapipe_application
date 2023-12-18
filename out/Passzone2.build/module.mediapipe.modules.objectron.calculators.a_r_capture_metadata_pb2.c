/* Generated code for Python module 'mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2'
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

/* The "module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2;
PyDictObject *moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[367];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[367];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("mediapipe.modules.objectron.calculators.a_r_capture_metadata_pb2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 367; i++) {
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
void checkModuleConstants_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 367; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bf48a39a29728582d3fbe23a464ef104;
static PyCodeObject *codeobj_c41f98c6cc5d680f11f2e78db3c7b054;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[363]); CHECK_OBJECT(module_filename_obj);
    codeobj_bf48a39a29728582d3fbe23a464ef104 = MAKE_CODE_OBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[364], NULL, 1, 0, 0);
    codeobj_c41f98c6cc5d680f11f2e78db3c7b054 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[365], mod_consts[365], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2$$$function__2_lambda();


// The module function definitions.
static PyObject *impl_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_bf48a39a29728582d3fbe23a464ef104;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bf48a39a29728582d3fbe23a464ef104 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf48a39a29728582d3fbe23a464ef104)) {
        Py_XDECREF(cache_frame_bf48a39a29728582d3fbe23a464ef104);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf48a39a29728582d3fbe23a464ef104 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf48a39a29728582d3fbe23a464ef104 = MAKE_FUNCTION_FRAME(tstate, codeobj_bf48a39a29728582d3fbe23a464ef104, module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf48a39a29728582d3fbe23a464ef104->m_type_description == NULL);
    frame_bf48a39a29728582d3fbe23a464ef104 = cache_frame_bf48a39a29728582d3fbe23a464ef104;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bf48a39a29728582d3fbe23a464ef104);
    assert(Py_REFCNT(frame_bf48a39a29728582d3fbe23a464ef104) == 2);

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
        frame_bf48a39a29728582d3fbe23a464ef104->m_frame.f_lineno = 5;
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
        exception_tb = MAKE_TRACEBACK(frame_bf48a39a29728582d3fbe23a464ef104, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf48a39a29728582d3fbe23a464ef104->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf48a39a29728582d3fbe23a464ef104, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf48a39a29728582d3fbe23a464ef104,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_bf48a39a29728582d3fbe23a464ef104 == cache_frame_bf48a39a29728582d3fbe23a464ef104) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf48a39a29728582d3fbe23a464ef104);
        cache_frame_bf48a39a29728582d3fbe23a464ef104 = NULL;
    }

    assertFrameObject(frame_bf48a39a29728582d3fbe23a464ef104);

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



static PyObject *MAKE_FUNCTION_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2$$$function__2_lambda,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf48a39a29728582d3fbe23a464ef104,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
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

static function_impl_code const function_table_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2[] = {
    impl_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2$$$function__2_lambda,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2);

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
        module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
        sizeof(function_table_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2");

    // Store the module for future use.
    module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2 = module;

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
        PRINT_STRING("mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2\n");

    moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2 = MODULE_DICT(module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[366]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_c41f98c6cc5d680f11f2e78db3c7b054;
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
        UPDATE_STRING_DICT0(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    frame_c41f98c6cc5d680f11f2e78db3c7b054 = MAKE_MODULE_FRAME(codeobj_c41f98c6cc5d680f11f2e78db3c7b054, module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c41f98c6cc5d680f11f2e78db3c7b054);
    assert(Py_REFCNT(frame_c41f98c6cc5d680f11f2e78db3c7b054) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[4]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[4]);

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
        UPDATE_STRING_DICT0(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2$$$function__2_lambda();

        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
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
        tmp_globals_arg_value_1 = (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[12];
        tmp_level_value_1 = mod_consts[13];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[16];
        tmp_level_value_2 = mod_consts[13];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
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
        tmp_globals_arg_value_3 = (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[19];
        tmp_level_value_3 = mod_consts[13];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[22];
        tmp_level_value_4 = mod_consts[13];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 9;
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
                (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_9);
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
        tmp_globals_arg_value_5 = (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[25];
        tmp_level_value_5 = mod_consts[13];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 10;
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
                (PyObject *)moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2,
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
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 13;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_called_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[30];
        tmp_kw_call_value_1_1 = mod_consts[31];
        tmp_kw_call_value_2_1 = mod_consts[32];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 22;
        tmp_kw_call_value_3_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[33]);

        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 18;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_12);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[36]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 24;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[37]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[38];
        tmp_kw_call_value_1_2 = mod_consts[39];
        tmp_kw_call_value_2_2 = Py_None;
        tmp_kw_call_value_3_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_2 == NULL)) {
            tmp_kw_call_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[40]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 34;
        tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[41], 0), mod_consts[42]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_6;
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 0, tmp_list_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[40]);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto list_build_exception_1;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 38;
            tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[43], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_6);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 1, tmp_list_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto list_build_exception_1;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[40]);
            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto list_build_exception_1;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 42;
            tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[44], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_7);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_4_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_5_1 = Py_None;
        tmp_kw_call_value_6_1 = Py_None;
        tmp_kw_call_value_7_1 = mod_consts[45];
        tmp_kw_call_value_8_1 = mod_consts[46];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 28;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

            tmp_assign_source_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_13);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[49]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 52;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_kw_call_value_6_2;
        PyObject *tmp_kw_call_value_7_2;
        PyObject *tmp_kw_call_value_8_2;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[37]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[50];
        tmp_kw_call_value_1_3 = mod_consts[51];
        tmp_kw_call_value_2_3 = Py_None;
        tmp_kw_call_value_3_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_3 == NULL)) {
            tmp_kw_call_value_3_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[40]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 60;
        tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[42]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_2 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_11;
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 0, tmp_list_element_2);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto list_build_exception_2;
            }
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[40]);
            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto list_build_exception_2;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 64;
            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[53], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_11);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 1, tmp_list_element_2);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto list_build_exception_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[40]);
            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto list_build_exception_2;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 68;
            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[54], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_12);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_2, 2, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_value_4_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_kw_call_value_5_2 = Py_None;
        tmp_kw_call_value_6_2 = Py_None;
        tmp_kw_call_value_7_2 = mod_consts[55];
        tmp_kw_call_value_8_2 = mod_consts[56];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 54;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2};

            tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_value_4_2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_14);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[49]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 78;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_kw_call_value_4_3;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_5_3;
        PyObject *tmp_kw_call_value_6_3;
        PyObject *tmp_kw_call_value_7_3;
        PyObject *tmp_kw_call_value_8_3;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[37]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = mod_consts[58];
        tmp_kw_call_value_1_4 = mod_consts[59];
        tmp_kw_call_value_2_4 = Py_None;
        tmp_kw_call_value_3_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_4 == NULL)) {
            tmp_kw_call_value_3_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[40]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 86;
        tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[60], 0), mod_consts[42]);
        Py_DECREF(tmp_called_value_15);
        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_3 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_17;
            PyList_SET_ITEM(tmp_kw_call_value_4_3, 0, tmp_list_element_3);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_3;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[40]);
            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_3;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 90;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_16);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_3, 1, tmp_list_element_3);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_3;
            }
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[40]);
            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_3;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 94;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_17);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_3, 2, tmp_list_element_3);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_3;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[40]);
            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_3;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 98;
            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_18);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_3, 3, tmp_list_element_3);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_4_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_kw_call_value_5_3 = Py_None;
        tmp_kw_call_value_6_3 = Py_None;
        tmp_kw_call_value_7_3 = mod_consts[64];
        tmp_kw_call_value_8_3 = mod_consts[65];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 80;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3, tmp_kw_call_value_8_3};

            tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_14, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_4_3);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_15);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[49]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 108;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_kw_call_value_4_4;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_5_4;
        PyObject *tmp_kw_call_value_6_4;
        PyObject *tmp_kw_call_value_7_4;
        PyObject *tmp_kw_call_value_8_4;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[37]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = mod_consts[67];
        tmp_kw_call_value_1_5 = mod_consts[68];
        tmp_kw_call_value_2_5 = Py_None;
        tmp_kw_call_value_3_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_5 == NULL)) {
            tmp_kw_call_value_3_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[40]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 116;
        tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[69], 0), mod_consts[42]);
        Py_DECREF(tmp_called_value_21);
        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_4 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_25;
            PyList_SET_ITEM(tmp_kw_call_value_4_4, 0, tmp_list_element_4);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto list_build_exception_4;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[40]);
            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto list_build_exception_4;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 120;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_22);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_4, 1, tmp_list_element_4);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_4;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[40]);
            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_4;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 124;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[71], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_23);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_4, 2, tmp_list_element_4);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_4;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[40]);
            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_4;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 128;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[72], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_24);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_4, 3, tmp_list_element_4);
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto list_build_exception_4;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[40]);
            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto list_build_exception_4;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 132;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[73], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_25);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_4, 4, tmp_list_element_4);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto list_build_exception_4;
            }
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[40]);
            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto list_build_exception_4;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 136;
            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[74], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_26);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_4, 5, tmp_list_element_4);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_value_4_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_kw_call_value_5_4 = Py_None;
        tmp_kw_call_value_6_4 = Py_None;
        tmp_kw_call_value_7_4 = mod_consts[75];
        tmp_kw_call_value_8_4 = mod_consts[76];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 110;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_4, tmp_kw_call_value_5_4, tmp_kw_call_value_6_4, tmp_kw_call_value_7_4, tmp_kw_call_value_8_4};

            tmp_assign_source_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_20, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_value_4_4);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_16);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[49]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 146;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_kw_call_value_4_5;
        PyObject *tmp_list_element_5;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_kw_call_value_5_5;
        PyObject *tmp_kw_call_value_6_5;
        PyObject *tmp_kw_call_value_7_5;
        PyObject *tmp_kw_call_value_8_5;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[37]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[78];
        tmp_kw_call_value_1_6 = mod_consts[79];
        tmp_kw_call_value_2_6 = Py_None;
        tmp_kw_call_value_3_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_6 == NULL)) {
            tmp_kw_call_value_3_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[40]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 154;
        tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[80], 0), mod_consts[42]);
        Py_DECREF(tmp_called_value_29);
        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_5 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_30;
            PyList_SET_ITEM(tmp_kw_call_value_4_5, 0, tmp_list_element_5);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto list_build_exception_5;
            }
            tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[40]);
            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto list_build_exception_5;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 158;
            tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[81], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_30);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_5, 1, tmp_list_element_5);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto list_build_exception_5;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[40]);
            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto list_build_exception_5;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 162;
            tmp_list_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[82], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_31);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_5, 2, tmp_list_element_5);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_value_4_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_kw_call_value_5_5 = Py_None;
        tmp_kw_call_value_6_5 = Py_None;
        tmp_kw_call_value_7_5 = mod_consts[83];
        tmp_kw_call_value_8_5 = mod_consts[84];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 148;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_5, tmp_kw_call_value_5_5, tmp_kw_call_value_6_5, tmp_kw_call_value_7_5, tmp_kw_call_value_8_5};

            tmp_assign_source_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_28, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_value_4_5);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_17);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[49]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 172;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_32);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_kw_call_value_4_6;
        PyObject *tmp_list_element_6;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_kw_call_value_5_6;
        PyObject *tmp_kw_call_value_6_6;
        PyObject *tmp_kw_call_value_7_6;
        PyObject *tmp_kw_call_value_8_6;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[37]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = mod_consts[86];
        tmp_kw_call_value_1_7 = mod_consts[87];
        tmp_kw_call_value_2_7 = Py_None;
        tmp_kw_call_value_3_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_7 == NULL)) {
            tmp_kw_call_value_3_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[40]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 180;
        tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[88], 0), mod_consts[42]);
        Py_DECREF(tmp_called_value_34);
        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_6 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_called_value_38;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_38;
            PyList_SET_ITEM(tmp_kw_call_value_4_6, 0, tmp_list_element_6);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto list_build_exception_6;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[40]);
            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto list_build_exception_6;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 184;
            tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[89], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_35);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_6, 1, tmp_list_element_6);
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto list_build_exception_6;
            }
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[40]);
            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto list_build_exception_6;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 188;
            tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_36, &PyTuple_GET_ITEM(mod_consts[90], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_36);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_6, 2, tmp_list_element_6);
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto list_build_exception_6;
            }
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[40]);
            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto list_build_exception_6;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 192;
            tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_37, &PyTuple_GET_ITEM(mod_consts[91], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_37);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_6, 3, tmp_list_element_6);
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_6;
            }
            tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[40]);
            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_6;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 196;
            tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_38, &PyTuple_GET_ITEM(mod_consts[92], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_38);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_6, 4, tmp_list_element_6);
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto list_build_exception_6;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[40]);
            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto list_build_exception_6;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 200;
            tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_39, &PyTuple_GET_ITEM(mod_consts[93], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_39);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_6, 5, tmp_list_element_6);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_kw_call_value_4_6);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_kw_call_value_5_6 = Py_None;
        tmp_kw_call_value_6_6 = Py_None;
        tmp_kw_call_value_7_6 = mod_consts[94];
        tmp_kw_call_value_8_6 = mod_consts[95];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 174;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_6, tmp_kw_call_value_5_6, tmp_kw_call_value_6_6, tmp_kw_call_value_7_6, tmp_kw_call_value_8_6};

            tmp_assign_source_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_33, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_kw_call_value_4_6);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_18);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[49]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 210;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_kw_call_value_4_7;
        PyObject *tmp_list_element_7;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_kw_call_value_5_7;
        PyObject *tmp_kw_call_value_6_7;
        PyObject *tmp_kw_call_value_7_7;
        PyObject *tmp_kw_call_value_8_7;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[37]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = mod_consts[97];
        tmp_kw_call_value_1_8 = mod_consts[98];
        tmp_kw_call_value_2_8 = Py_None;
        tmp_kw_call_value_3_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_8 == NULL)) {
            tmp_kw_call_value_3_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[40]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 218;
        tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_42, &PyTuple_GET_ITEM(mod_consts[99], 0), mod_consts[42]);
        Py_DECREF(tmp_called_value_42);
        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_7 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_called_value_44;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_44;
            PyList_SET_ITEM(tmp_kw_call_value_4_7, 0, tmp_list_element_7);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto list_build_exception_7;
            }
            tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[40]);
            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto list_build_exception_7;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 222;
            tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_43);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_7, 1, tmp_list_element_7);
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto list_build_exception_7;
            }
            tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[40]);
            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto list_build_exception_7;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 226;
            tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_44, &PyTuple_GET_ITEM(mod_consts[100], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_44);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_7, 2, tmp_list_element_7);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto list_build_exception_7;
            }
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[40]);
            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto list_build_exception_7;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 230;
            tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[42]);
            Py_DECREF(tmp_called_value_45);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_kw_call_value_4_7, 3, tmp_list_element_7);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_kw_call_value_4_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_kw_call_value_5_7 = Py_None;
        tmp_kw_call_value_6_7 = Py_None;
        tmp_kw_call_value_7_7 = mod_consts[102];
        tmp_kw_call_value_8_7 = mod_consts[103];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 212;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8, tmp_kw_call_value_4_7, tmp_kw_call_value_5_7, tmp_kw_call_value_6_7, tmp_kw_call_value_7_7, tmp_kw_call_value_8_7};

            tmp_assign_source_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_41, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_kw_call_value_4_7);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_19);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[49]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 240;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_46);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_kw_call_value_4_8;
        PyObject *tmp_kw_call_value_5_8;
        PyObject *tmp_list_element_8;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_kw_call_value_4_9;
        PyObject *tmp_kw_call_value_5_9;
        PyObject *tmp_kw_call_value_6_8;
        PyObject *tmp_kw_call_value_7_8;
        PyObject *tmp_kw_call_value_8_8;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_kw_call_value_12_1;
        PyObject *tmp_kw_call_value_13_1;
        PyObject *tmp_kw_call_value_14_1;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_50;
        PyObject *tmp_kw_call_value_6_12;
        PyObject *tmp_kw_call_value_7_12;
        PyObject *tmp_kw_call_value_8_12;
        PyObject *tmp_kw_call_value_9_5;
        PyObject *tmp_kw_call_value_10_5;
        PyObject *tmp_kw_call_value_11_5;
        PyObject *tmp_kw_call_value_12_5;
        PyObject *tmp_kw_call_value_13_5;
        PyObject *tmp_kw_call_value_14_5;
        PyObject *tmp_kw_call_value_15_1;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[105]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = mod_consts[106];
        tmp_kw_call_value_1_9 = mod_consts[107];
        tmp_kw_call_value_2_9 = Py_None;
        tmp_kw_call_value_3_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_9 == NULL)) {
            tmp_kw_call_value_3_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_8 = Py_None;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[108]);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = mod_consts[109];
        tmp_kw_call_value_1_10 = mod_consts[110];
        tmp_kw_call_value_2_10 = mod_consts[13];
        tmp_kw_call_value_3_10 = mod_consts[111];
        tmp_kw_call_value_4_9 = mod_consts[112];
        tmp_kw_call_value_5_9 = mod_consts[113];
        tmp_kw_call_value_6_8 = mod_consts[114];
        tmp_kw_call_value_7_8 = Py_False;
        tmp_kw_call_value_8_8 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_1 = Py_None;
        tmp_kw_call_value_10_1 = Py_None;
        tmp_kw_call_value_11_1 = Py_None;
        tmp_kw_call_value_12_1 = Py_False;
        tmp_kw_call_value_13_1 = Py_None;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_value_8_8);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[115]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_value_8_8);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_value_8_8);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 256;
        tmp_args_element_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[116]);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_value_8_8);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_value_8_8);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 256;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_50, mod_consts[117]);

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_value_8_8);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_kw_call_value_14_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_49, call_args);
        }

        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_kw_call_value_14_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_value_8_8);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 250;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_10, tmp_kw_call_value_4_9, tmp_kw_call_value_5_9, tmp_kw_call_value_6_8, tmp_kw_call_value_7_8, tmp_kw_call_value_8_8, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1, tmp_kw_call_value_14_1};

            tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_48, kw_values, mod_consts[118]);
        }

        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_kw_call_value_8_8);
        Py_DECREF(tmp_kw_call_value_14_1);
        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_8 = MAKE_LIST_EMPTY(9);
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_called_value_52;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_called_value_53;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_kw_call_value_0_11;
            PyObject *tmp_kw_call_value_1_11;
            PyObject *tmp_kw_call_value_2_11;
            PyObject *tmp_kw_call_value_3_11;
            PyObject *tmp_kw_call_value_4_10;
            PyObject *tmp_kw_call_value_5_10;
            PyObject *tmp_kw_call_value_6_9;
            PyObject *tmp_kw_call_value_7_9;
            PyObject *tmp_kw_call_value_8_9;
            PyObject *tmp_kw_call_value_9_2;
            PyObject *tmp_kw_call_value_10_2;
            PyObject *tmp_kw_call_value_11_2;
            PyObject *tmp_kw_call_value_12_2;
            PyObject *tmp_kw_call_value_13_2;
            PyObject *tmp_kw_call_value_14_2;
            PyObject *tmp_called_value_54;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_called_value_55;
            PyObject *tmp_called_value_56;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_called_value_57;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_kw_call_value_0_12;
            PyObject *tmp_kw_call_value_1_12;
            PyObject *tmp_kw_call_value_2_12;
            PyObject *tmp_kw_call_value_3_12;
            PyObject *tmp_kw_call_value_4_11;
            PyObject *tmp_kw_call_value_5_11;
            PyObject *tmp_kw_call_value_6_10;
            PyObject *tmp_kw_call_value_7_10;
            PyObject *tmp_kw_call_value_8_10;
            PyObject *tmp_kw_call_value_9_3;
            PyObject *tmp_kw_call_value_10_3;
            PyObject *tmp_kw_call_value_11_3;
            PyObject *tmp_kw_call_value_12_3;
            PyObject *tmp_kw_call_value_13_3;
            PyObject *tmp_kw_call_value_14_3;
            PyObject *tmp_called_value_58;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_value_59;
            PyObject *tmp_called_value_60;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_kw_call_value_0_13;
            PyObject *tmp_kw_call_value_1_13;
            PyObject *tmp_kw_call_value_2_13;
            PyObject *tmp_kw_call_value_3_13;
            PyObject *tmp_kw_call_value_4_12;
            PyObject *tmp_kw_call_value_5_12;
            PyObject *tmp_kw_call_value_6_11;
            PyObject *tmp_kw_call_value_7_11;
            PyObject *tmp_kw_call_value_8_11;
            PyObject *tmp_kw_call_value_9_4;
            PyObject *tmp_kw_call_value_10_4;
            PyObject *tmp_kw_call_value_11_4;
            PyObject *tmp_kw_call_value_12_4;
            PyObject *tmp_kw_call_value_13_4;
            PyObject *tmp_kw_call_value_14_4;
            PyObject *tmp_called_value_61;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_62;
            PyObject *tmp_called_value_63;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_called_value_64;
            PyObject *tmp_expression_value_59;
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 0, tmp_list_element_8);
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto list_build_exception_8;
            }
            tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[108]);
            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 257;
            tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_51, &PyTuple_GET_ITEM(mod_consts[119], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_51);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 1, tmp_list_element_8);
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_8;
            }
            tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[108]);
            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 264;
            tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_52, &PyTuple_GET_ITEM(mod_consts[120], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_52);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 2, tmp_list_element_8);
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto list_build_exception_8;
            }
            tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[108]);
            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto list_build_exception_8;
            }
            tmp_kw_call_value_0_11 = mod_consts[121];
            tmp_kw_call_value_1_11 = mod_consts[122];
            tmp_kw_call_value_2_11 = mod_consts[114];
            tmp_kw_call_value_3_11 = mod_consts[123];
            tmp_kw_call_value_4_10 = mod_consts[112];
            tmp_kw_call_value_5_10 = mod_consts[113];
            tmp_kw_call_value_6_9 = mod_consts[114];
            tmp_kw_call_value_7_9 = Py_False;
            tmp_kw_call_value_8_9 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_2 = Py_None;
            tmp_kw_call_value_10_2 = Py_None;
            tmp_kw_call_value_11_2 = Py_None;
            tmp_kw_call_value_12_2 = Py_False;
            tmp_kw_call_value_13_2 = Py_None;
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 277;

                goto list_build_exception_8;
            }
            tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[115]);
            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 277;

                goto list_build_exception_8;
            }
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_kw_call_value_8_9);
                Py_DECREF(tmp_called_value_54);

                exception_lineno = 277;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 277;
            tmp_args_element_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[116]);
            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_kw_call_value_8_9);
                Py_DECREF(tmp_called_value_54);

                exception_lineno = 277;

                goto list_build_exception_8;
            }
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_kw_call_value_8_9);
                Py_DECREF(tmp_called_value_54);
                Py_DECREF(tmp_args_element_value_11);

                exception_lineno = 277;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 277;
            tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_55, mod_consts[117]);

            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_kw_call_value_8_9);
                Py_DECREF(tmp_called_value_54);
                Py_DECREF(tmp_args_element_value_11);

                exception_lineno = 277;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 277;
            {
                PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_kw_call_value_14_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_54, call_args);
            }

            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_kw_call_value_14_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 277;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 271;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_11, tmp_kw_call_value_4_10, tmp_kw_call_value_5_10, tmp_kw_call_value_6_9, tmp_kw_call_value_7_9, tmp_kw_call_value_8_9, tmp_kw_call_value_9_2, tmp_kw_call_value_10_2, tmp_kw_call_value_11_2, tmp_kw_call_value_12_2, tmp_kw_call_value_13_2, tmp_kw_call_value_14_2};

                tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_53, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_value_8_9);
            Py_DECREF(tmp_kw_call_value_14_2);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 3, tmp_list_element_8);
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto list_build_exception_8;
            }
            tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[108]);
            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 278;
            tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_56, &PyTuple_GET_ITEM(mod_consts[124], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_56);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 4, tmp_list_element_8);
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto list_build_exception_8;
            }
            tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[108]);
            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto list_build_exception_8;
            }
            tmp_kw_call_value_0_12 = mod_consts[125];
            tmp_kw_call_value_1_12 = mod_consts[126];
            tmp_kw_call_value_2_12 = mod_consts[127];
            tmp_kw_call_value_3_12 = mod_consts[113];
            tmp_kw_call_value_4_11 = mod_consts[112];
            tmp_kw_call_value_5_11 = mod_consts[113];
            tmp_kw_call_value_6_10 = mod_consts[114];
            tmp_kw_call_value_7_10 = Py_False;
            tmp_kw_call_value_8_10 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_3 = Py_None;
            tmp_kw_call_value_10_3 = Py_None;
            tmp_kw_call_value_11_3 = Py_None;
            tmp_kw_call_value_12_3 = Py_False;
            tmp_kw_call_value_13_3 = Py_None;
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_kw_call_value_8_10);

                exception_lineno = 291;

                goto list_build_exception_8;
            }
            tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[115]);
            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_kw_call_value_8_10);

                exception_lineno = 291;

                goto list_build_exception_8;
            }
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_kw_call_value_8_10);
                Py_DECREF(tmp_called_value_58);

                exception_lineno = 291;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 291;
            tmp_args_element_value_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[116]);
            if (tmp_args_element_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_kw_call_value_8_10);
                Py_DECREF(tmp_called_value_58);

                exception_lineno = 291;

                goto list_build_exception_8;
            }
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_kw_call_value_8_10);
                Py_DECREF(tmp_called_value_58);
                Py_DECREF(tmp_args_element_value_13);

                exception_lineno = 291;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 291;
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_59, mod_consts[117]);

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_kw_call_value_8_10);
                Py_DECREF(tmp_called_value_58);
                Py_DECREF(tmp_args_element_value_13);

                exception_lineno = 291;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 291;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_kw_call_value_14_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_58, call_args);
            }

            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_kw_call_value_14_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_kw_call_value_8_10);

                exception_lineno = 291;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 285;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_12, tmp_kw_call_value_4_11, tmp_kw_call_value_5_11, tmp_kw_call_value_6_10, tmp_kw_call_value_7_10, tmp_kw_call_value_8_10, tmp_kw_call_value_9_3, tmp_kw_call_value_10_3, tmp_kw_call_value_11_3, tmp_kw_call_value_12_3, tmp_kw_call_value_13_3, tmp_kw_call_value_14_3};

                tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_57, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_kw_call_value_8_10);
            Py_DECREF(tmp_kw_call_value_14_3);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 5, tmp_list_element_8);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto list_build_exception_8;
            }
            tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[108]);
            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto list_build_exception_8;
            }
            tmp_kw_call_value_0_13 = mod_consts[128];
            tmp_kw_call_value_1_13 = mod_consts[129];
            tmp_kw_call_value_2_13 = mod_consts[113];
            tmp_kw_call_value_3_13 = mod_consts[130];
            tmp_kw_call_value_4_12 = mod_consts[112];
            tmp_kw_call_value_5_12 = mod_consts[113];
            tmp_kw_call_value_6_11 = mod_consts[114];
            tmp_kw_call_value_7_11 = Py_False;
            tmp_kw_call_value_8_11 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_4 = Py_None;
            tmp_kw_call_value_10_4 = Py_None;
            tmp_kw_call_value_11_4 = Py_None;
            tmp_kw_call_value_12_4 = Py_False;
            tmp_kw_call_value_13_4 = Py_None;
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_kw_call_value_8_11);

                exception_lineno = 298;

                goto list_build_exception_8;
            }
            tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[115]);
            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_kw_call_value_8_11);

                exception_lineno = 298;

                goto list_build_exception_8;
            }
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_kw_call_value_8_11);
                Py_DECREF(tmp_called_value_61);

                exception_lineno = 298;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 298;
            tmp_args_element_value_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[116]);
            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_kw_call_value_8_11);
                Py_DECREF(tmp_called_value_61);

                exception_lineno = 298;

                goto list_build_exception_8;
            }
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_kw_call_value_8_11);
                Py_DECREF(tmp_called_value_61);
                Py_DECREF(tmp_args_element_value_15);

                exception_lineno = 298;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 298;
            tmp_args_element_value_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_62, mod_consts[117]);

            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_kw_call_value_8_11);
                Py_DECREF(tmp_called_value_61);
                Py_DECREF(tmp_args_element_value_15);

                exception_lineno = 298;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                tmp_kw_call_value_14_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_61, call_args);
            }

            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_kw_call_value_14_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_kw_call_value_8_11);

                exception_lineno = 298;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 292;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_13, tmp_kw_call_value_3_13, tmp_kw_call_value_4_12, tmp_kw_call_value_5_12, tmp_kw_call_value_6_11, tmp_kw_call_value_7_11, tmp_kw_call_value_8_11, tmp_kw_call_value_9_4, tmp_kw_call_value_10_4, tmp_kw_call_value_11_4, tmp_kw_call_value_12_4, tmp_kw_call_value_13_4, tmp_kw_call_value_14_4};

                tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_60, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_kw_call_value_8_11);
            Py_DECREF(tmp_kw_call_value_14_4);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 6, tmp_list_element_8);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto list_build_exception_8;
            }
            tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[108]);
            if (tmp_called_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 299;
            tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_63, &PyTuple_GET_ITEM(mod_consts[131], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_63);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 7, tmp_list_element_8);
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto list_build_exception_8;
            }
            tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[108]);
            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto list_build_exception_8;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 306;
            tmp_list_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_64, &PyTuple_GET_ITEM(mod_consts[132], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_64);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_8, 8, tmp_list_element_8);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_kw_call_value_5_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_kw_call_value_6_12 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_12 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_12 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_5 = Py_None;
        tmp_kw_call_value_10_5 = Py_False;
        tmp_kw_call_value_11_5 = mod_consts[32];
        tmp_kw_call_value_12_5 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_5 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_5 = mod_consts[133];
        tmp_kw_call_value_15_1 = mod_consts[134];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 243;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_9, tmp_kw_call_value_4_8, tmp_kw_call_value_5_8, tmp_kw_call_value_6_12, tmp_kw_call_value_7_12, tmp_kw_call_value_8_12, tmp_kw_call_value_9_5, tmp_kw_call_value_10_5, tmp_kw_call_value_11_5, tmp_kw_call_value_12_5, tmp_kw_call_value_13_5, tmp_kw_call_value_14_5, tmp_kw_call_value_15_1};

            tmp_assign_source_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_47, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_kw_call_value_5_8);
        Py_DECREF(tmp_kw_call_value_6_12);
        Py_DECREF(tmp_kw_call_value_7_12);
        Py_DECREF(tmp_kw_call_value_8_12);
        Py_DECREF(tmp_kw_call_value_12_5);
        Py_DECREF(tmp_kw_call_value_13_5);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_kw_call_value_1_14;
        PyObject *tmp_kw_call_value_2_14;
        PyObject *tmp_kw_call_value_3_14;
        PyObject *tmp_kw_call_value_4_13;
        PyObject *tmp_kw_call_value_5_13;
        PyObject *tmp_list_element_9;
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_kw_call_value_1_15;
        PyObject *tmp_kw_call_value_2_15;
        PyObject *tmp_kw_call_value_3_15;
        PyObject *tmp_kw_call_value_4_14;
        PyObject *tmp_kw_call_value_5_14;
        PyObject *tmp_kw_call_value_6_13;
        PyObject *tmp_kw_call_value_7_13;
        PyObject *tmp_kw_call_value_8_13;
        PyObject *tmp_called_value_67;
        PyObject *tmp_kw_call_value_9_6;
        PyObject *tmp_kw_call_value_10_6;
        PyObject *tmp_kw_call_value_11_6;
        PyObject *tmp_kw_call_value_12_6;
        PyObject *tmp_kw_call_value_13_6;
        PyObject *tmp_kw_call_value_14_6;
        PyObject *tmp_kw_call_value_6_16;
        PyObject *tmp_kw_call_value_7_16;
        PyObject *tmp_kw_call_value_8_16;
        PyObject *tmp_list_element_10;
        PyObject *tmp_kw_call_value_9_9;
        PyObject *tmp_kw_call_value_10_9;
        PyObject *tmp_kw_call_value_11_9;
        PyObject *tmp_kw_call_value_12_9;
        PyObject *tmp_kw_call_value_13_9;
        PyObject *tmp_kw_call_value_14_9;
        PyObject *tmp_kw_call_value_15_2;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[105]);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_14 = mod_consts[137];
        tmp_kw_call_value_1_14 = mod_consts[138];
        tmp_kw_call_value_2_14 = Py_None;
        tmp_kw_call_value_3_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_14 == NULL)) {
            tmp_kw_call_value_3_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_13 = Py_None;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[108]);
        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_15 = mod_consts[139];
        tmp_kw_call_value_1_15 = mod_consts[140];
        tmp_kw_call_value_2_15 = mod_consts[13];
        tmp_kw_call_value_3_15 = mod_consts[111];
        tmp_kw_call_value_4_14 = mod_consts[141];
        tmp_kw_call_value_5_14 = mod_consts[142];
        tmp_kw_call_value_6_13 = mod_consts[111];
        tmp_kw_call_value_7_13 = Py_False;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 340;
        tmp_kw_call_value_8_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_67, mod_consts[143]);

        if (tmp_kw_call_value_8_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_6 = Py_None;
        tmp_kw_call_value_10_6 = Py_None;
        tmp_kw_call_value_11_6 = Py_None;
        tmp_kw_call_value_12_6 = Py_False;
        tmp_kw_call_value_13_6 = Py_None;
        tmp_kw_call_value_14_6 = Py_None;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 337;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15, tmp_kw_call_value_2_15, tmp_kw_call_value_3_15, tmp_kw_call_value_4_14, tmp_kw_call_value_5_14, tmp_kw_call_value_6_13, tmp_kw_call_value_7_13, tmp_kw_call_value_8_13, tmp_kw_call_value_9_6, tmp_kw_call_value_10_6, tmp_kw_call_value_11_6, tmp_kw_call_value_12_6, tmp_kw_call_value_13_6, tmp_kw_call_value_14_6};

            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_66, kw_values, mod_consts[118]);
        }

        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_kw_call_value_8_13);
        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_13 = MAKE_LIST_EMPTY(11);
        {
            PyObject *tmp_called_value_68;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_kw_call_value_0_16;
            PyObject *tmp_kw_call_value_1_16;
            PyObject *tmp_kw_call_value_2_16;
            PyObject *tmp_kw_call_value_3_16;
            PyObject *tmp_kw_call_value_4_15;
            PyObject *tmp_kw_call_value_5_15;
            PyObject *tmp_kw_call_value_6_14;
            PyObject *tmp_kw_call_value_7_14;
            PyObject *tmp_kw_call_value_8_14;
            PyObject *tmp_called_value_69;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_called_value_70;
            PyObject *tmp_kw_call_value_9_7;
            PyObject *tmp_kw_call_value_10_7;
            PyObject *tmp_kw_call_value_11_7;
            PyObject *tmp_kw_call_value_12_7;
            PyObject *tmp_kw_call_value_13_7;
            PyObject *tmp_kw_call_value_14_7;
            PyObject *tmp_called_value_71;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_called_value_72;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_called_value_73;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_called_value_74;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_called_value_75;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_called_value_76;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_called_value_77;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_called_value_78;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_called_value_79;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_kw_call_value_0_17;
            PyObject *tmp_kw_call_value_1_17;
            PyObject *tmp_kw_call_value_2_17;
            PyObject *tmp_kw_call_value_3_17;
            PyObject *tmp_kw_call_value_4_16;
            PyObject *tmp_kw_call_value_5_16;
            PyObject *tmp_kw_call_value_6_15;
            PyObject *tmp_kw_call_value_7_15;
            PyObject *tmp_kw_call_value_8_15;
            PyObject *tmp_called_value_80;
            PyObject *tmp_kw_call_value_9_8;
            PyObject *tmp_kw_call_value_10_8;
            PyObject *tmp_kw_call_value_11_8;
            PyObject *tmp_kw_call_value_12_8;
            PyObject *tmp_kw_call_value_13_8;
            PyObject *tmp_kw_call_value_14_8;
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 0, tmp_list_element_9);
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto list_build_exception_9;
            }
            tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[108]);
            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto list_build_exception_9;
            }
            tmp_kw_call_value_0_16 = mod_consts[144];
            tmp_kw_call_value_1_16 = mod_consts[145];
            tmp_kw_call_value_2_16 = mod_consts[111];
            tmp_kw_call_value_3_16 = mod_consts[112];
            tmp_kw_call_value_4_15 = mod_consts[142];
            tmp_kw_call_value_5_15 = mod_consts[142];
            tmp_kw_call_value_6_14 = mod_consts[111];
            tmp_kw_call_value_7_14 = Py_False;
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_68);

                exception_lineno = 347;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 347;
            tmp_expression_value_63 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_70, mod_consts[143]);

            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_68);

                exception_lineno = 347;

                goto list_build_exception_9;
            }
            tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[146]);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_68);

                exception_lineno = 347;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 347;
            tmp_kw_call_value_8_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[147]);

            Py_DECREF(tmp_called_value_69);
            if (tmp_kw_call_value_8_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_68);

                exception_lineno = 347;

                goto list_build_exception_9;
            }
            tmp_kw_call_value_9_7 = Py_None;
            tmp_kw_call_value_10_7 = Py_None;
            tmp_kw_call_value_11_7 = Py_None;
            tmp_kw_call_value_12_7 = Py_False;
            tmp_kw_call_value_13_7 = Py_None;
            tmp_kw_call_value_14_7 = Py_None;
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 344;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16, tmp_kw_call_value_2_16, tmp_kw_call_value_3_16, tmp_kw_call_value_4_15, tmp_kw_call_value_5_15, tmp_kw_call_value_6_14, tmp_kw_call_value_7_14, tmp_kw_call_value_8_14, tmp_kw_call_value_9_7, tmp_kw_call_value_10_7, tmp_kw_call_value_11_7, tmp_kw_call_value_12_7, tmp_kw_call_value_13_7, tmp_kw_call_value_14_7};

                tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_68, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_kw_call_value_8_14);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 1, tmp_list_element_9);
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_9;
            }
            tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[108]);
            if (tmp_called_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 351;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_71, &PyTuple_GET_ITEM(mod_consts[148], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_71);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 2, tmp_list_element_9);
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto list_build_exception_9;
            }
            tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[108]);
            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 358;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_72, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_72);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 3, tmp_list_element_9);
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto list_build_exception_9;
            }
            tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[108]);
            if (tmp_called_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 365;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_73, &PyTuple_GET_ITEM(mod_consts[150], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_73);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 4, tmp_list_element_9);
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto list_build_exception_9;
            }
            tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[108]);
            if (tmp_called_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 372;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_74, &PyTuple_GET_ITEM(mod_consts[151], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_74);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 5, tmp_list_element_9);
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto list_build_exception_9;
            }
            tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[108]);
            if (tmp_called_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 379;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_75, &PyTuple_GET_ITEM(mod_consts[152], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_75);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 6, tmp_list_element_9);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto list_build_exception_9;
            }
            tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[108]);
            if (tmp_called_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 386;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_76, &PyTuple_GET_ITEM(mod_consts[153], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_76);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 7, tmp_list_element_9);
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto list_build_exception_9;
            }
            tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[108]);
            if (tmp_called_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 393;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_77, &PyTuple_GET_ITEM(mod_consts[154], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_77);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 8, tmp_list_element_9);
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;

                goto list_build_exception_9;
            }
            tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[108]);
            if (tmp_called_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 400;
            tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_78, &PyTuple_GET_ITEM(mod_consts[155], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_78);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 9, tmp_list_element_9);
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;

                goto list_build_exception_9;
            }
            tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[108]);
            if (tmp_called_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;

                goto list_build_exception_9;
            }
            tmp_kw_call_value_0_17 = mod_consts[156];
            tmp_kw_call_value_1_17 = mod_consts[157];
            tmp_kw_call_value_2_17 = mod_consts[158];
            tmp_kw_call_value_3_17 = mod_consts[159];
            tmp_kw_call_value_4_16 = mod_consts[141];
            tmp_kw_call_value_5_16 = mod_consts[142];
            tmp_kw_call_value_6_15 = mod_consts[111];
            tmp_kw_call_value_7_15 = Py_False;
            tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_80 == NULL)) {
                tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_79);

                exception_lineno = 410;

                goto list_build_exception_9;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 410;
            tmp_kw_call_value_8_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_80, mod_consts[143]);

            if (tmp_kw_call_value_8_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_79);

                exception_lineno = 410;

                goto list_build_exception_9;
            }
            tmp_kw_call_value_9_8 = Py_None;
            tmp_kw_call_value_10_8 = Py_None;
            tmp_kw_call_value_11_8 = Py_None;
            tmp_kw_call_value_12_8 = Py_False;
            tmp_kw_call_value_13_8 = Py_None;
            tmp_kw_call_value_14_8 = Py_None;
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 407;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_17, tmp_kw_call_value_2_17, tmp_kw_call_value_3_17, tmp_kw_call_value_4_16, tmp_kw_call_value_5_16, tmp_kw_call_value_6_15, tmp_kw_call_value_7_15, tmp_kw_call_value_8_15, tmp_kw_call_value_9_8, tmp_kw_call_value_10_8, tmp_kw_call_value_11_8, tmp_kw_call_value_12_8, tmp_kw_call_value_13_8, tmp_kw_call_value_14_8};

                tmp_list_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_79, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_kw_call_value_8_15);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_13, 10, tmp_list_element_9);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_kw_call_value_5_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_kw_call_value_6_16 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_16 = MAKE_LIST_EMPTY(0);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_kw_call_value_5_13);
            Py_DECREF(tmp_kw_call_value_6_16);
            Py_DECREF(tmp_kw_call_value_7_16);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_16 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_kw_call_value_8_16, 0, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_8_16, 1, tmp_list_element_10);
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_kw_call_value_5_13);
        Py_DECREF(tmp_kw_call_value_6_16);
        Py_DECREF(tmp_kw_call_value_7_16);
        Py_DECREF(tmp_kw_call_value_8_16);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_kw_call_value_9_9 = Py_None;
        tmp_kw_call_value_10_9 = Py_False;
        tmp_kw_call_value_11_9 = mod_consts[32];
        tmp_kw_call_value_12_9 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_9 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_9 = mod_consts[160];
        tmp_kw_call_value_15_2 = mod_consts[56];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 330;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14, tmp_kw_call_value_2_14, tmp_kw_call_value_3_14, tmp_kw_call_value_4_13, tmp_kw_call_value_5_13, tmp_kw_call_value_6_16, tmp_kw_call_value_7_16, tmp_kw_call_value_8_16, tmp_kw_call_value_9_9, tmp_kw_call_value_10_9, tmp_kw_call_value_11_9, tmp_kw_call_value_12_9, tmp_kw_call_value_13_9, tmp_kw_call_value_14_9, tmp_kw_call_value_15_2};

            tmp_assign_source_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_65, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_kw_call_value_5_13);
        Py_DECREF(tmp_kw_call_value_6_16);
        Py_DECREF(tmp_kw_call_value_7_16);
        Py_DECREF(tmp_kw_call_value_8_16);
        Py_DECREF(tmp_kw_call_value_12_9);
        Py_DECREF(tmp_kw_call_value_13_9);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_kw_call_value_1_18;
        PyObject *tmp_kw_call_value_2_18;
        PyObject *tmp_kw_call_value_3_18;
        PyObject *tmp_kw_call_value_4_17;
        PyObject *tmp_kw_call_value_5_17;
        PyObject *tmp_list_element_11;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_kw_call_value_6_17;
        PyObject *tmp_kw_call_value_7_17;
        PyObject *tmp_kw_call_value_8_17;
        PyObject *tmp_kw_call_value_9_10;
        PyObject *tmp_kw_call_value_10_10;
        PyObject *tmp_kw_call_value_11_10;
        PyObject *tmp_kw_call_value_12_10;
        PyObject *tmp_kw_call_value_13_10;
        PyObject *tmp_kw_call_value_14_10;
        PyObject *tmp_kw_call_value_15_3;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[105]);
        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_18 = mod_consts[162];
        tmp_kw_call_value_1_18 = mod_consts[163];
        tmp_kw_call_value_2_18 = Py_None;
        tmp_kw_call_value_3_18 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_18 == NULL)) {
            tmp_kw_call_value_3_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_17 = Py_None;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[108]);
        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 440;
        tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_82, &PyTuple_GET_ITEM(mod_consts[164], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_82);
        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_17 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_83;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_called_value_84;
            PyObject *tmp_expression_value_76;
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 0, tmp_list_element_11);
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;

                goto list_build_exception_11;
            }
            tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[108]);
            if (tmp_called_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;

                goto list_build_exception_11;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 447;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_83, &PyTuple_GET_ITEM(mod_consts[165], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_83);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 1, tmp_list_element_11);
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto list_build_exception_11;
            }
            tmp_called_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[108]);
            if (tmp_called_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto list_build_exception_11;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 454;
            tmp_list_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_84, &PyTuple_GET_ITEM(mod_consts[166], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_84);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_17, 2, tmp_list_element_11);
        }
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_kw_call_value_5_17);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_kw_call_value_6_17 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_17 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_17 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_10 = Py_None;
        tmp_kw_call_value_10_10 = Py_False;
        tmp_kw_call_value_11_10 = mod_consts[32];
        tmp_kw_call_value_12_10 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_10 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_10 = mod_consts[167];
        tmp_kw_call_value_15_3 = mod_consts[168];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 433;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_18, tmp_kw_call_value_2_18, tmp_kw_call_value_3_18, tmp_kw_call_value_4_17, tmp_kw_call_value_5_17, tmp_kw_call_value_6_17, tmp_kw_call_value_7_17, tmp_kw_call_value_8_17, tmp_kw_call_value_9_10, tmp_kw_call_value_10_10, tmp_kw_call_value_11_10, tmp_kw_call_value_12_10, tmp_kw_call_value_13_10, tmp_kw_call_value_14_10, tmp_kw_call_value_15_3};

            tmp_assign_source_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_81, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_kw_call_value_5_17);
        Py_DECREF(tmp_kw_call_value_6_17);
        Py_DECREF(tmp_kw_call_value_7_17);
        Py_DECREF(tmp_kw_call_value_8_17);
        Py_DECREF(tmp_kw_call_value_12_10);
        Py_DECREF(tmp_kw_call_value_13_10);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_kw_call_value_0_19;
        PyObject *tmp_kw_call_value_1_19;
        PyObject *tmp_kw_call_value_2_19;
        PyObject *tmp_kw_call_value_3_19;
        PyObject *tmp_kw_call_value_4_18;
        PyObject *tmp_kw_call_value_5_18;
        PyObject *tmp_list_element_12;
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_kw_call_value_6_19;
        PyObject *tmp_kw_call_value_7_19;
        PyObject *tmp_list_element_13;
        PyObject *tmp_kw_call_value_8_19;
        PyObject *tmp_kw_call_value_9_12;
        PyObject *tmp_kw_call_value_10_12;
        PyObject *tmp_kw_call_value_11_12;
        PyObject *tmp_kw_call_value_12_12;
        PyObject *tmp_kw_call_value_13_12;
        PyObject *tmp_kw_call_value_14_12;
        PyObject *tmp_kw_call_value_15_4;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[105]);
        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_19 = mod_consts[170];
        tmp_kw_call_value_1_19 = mod_consts[171];
        tmp_kw_call_value_2_19 = Py_None;
        tmp_kw_call_value_3_19 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_19 == NULL)) {
            tmp_kw_call_value_3_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_18 = Py_None;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[108]);
        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 484;
        tmp_list_element_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_86, &PyTuple_GET_ITEM(mod_consts[172], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_86);
        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_18 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_87;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_called_value_88;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_kw_call_value_0_20;
            PyObject *tmp_kw_call_value_1_20;
            PyObject *tmp_kw_call_value_2_20;
            PyObject *tmp_kw_call_value_3_20;
            PyObject *tmp_kw_call_value_4_19;
            PyObject *tmp_kw_call_value_5_19;
            PyObject *tmp_kw_call_value_6_18;
            PyObject *tmp_kw_call_value_7_18;
            PyObject *tmp_kw_call_value_8_18;
            PyObject *tmp_kw_call_value_9_11;
            PyObject *tmp_kw_call_value_10_11;
            PyObject *tmp_kw_call_value_11_11;
            PyObject *tmp_kw_call_value_12_11;
            PyObject *tmp_kw_call_value_13_11;
            PyObject *tmp_kw_call_value_14_11;
            PyObject *tmp_called_value_89;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_90;
            PyObject *tmp_called_value_91;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_called_value_92;
            PyObject *tmp_expression_value_83;
            PyList_SET_ITEM(tmp_kw_call_value_5_18, 0, tmp_list_element_12);
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto list_build_exception_12;
            }
            tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[108]);
            if (tmp_called_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto list_build_exception_12;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 491;
            tmp_list_element_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_87, &PyTuple_GET_ITEM(mod_consts[173], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_87);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_18, 1, tmp_list_element_12);
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto list_build_exception_12;
            }
            tmp_called_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[108]);
            if (tmp_called_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto list_build_exception_12;
            }
            tmp_kw_call_value_0_20 = mod_consts[174];
            tmp_kw_call_value_1_20 = mod_consts[175];
            tmp_kw_call_value_2_20 = mod_consts[112];
            tmp_kw_call_value_3_20 = mod_consts[114];
            tmp_kw_call_value_4_19 = mod_consts[112];
            tmp_kw_call_value_5_19 = mod_consts[113];
            tmp_kw_call_value_6_18 = mod_consts[114];
            tmp_kw_call_value_7_18 = Py_False;
            tmp_kw_call_value_8_18 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_11 = Py_None;
            tmp_kw_call_value_10_11 = Py_None;
            tmp_kw_call_value_11_11 = Py_None;
            tmp_kw_call_value_12_11 = Py_False;
            tmp_kw_call_value_13_11 = Py_None;
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_88);
                Py_DECREF(tmp_kw_call_value_8_18);

                exception_lineno = 504;

                goto list_build_exception_12;
            }
            tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[115]);
            if (tmp_called_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_88);
                Py_DECREF(tmp_kw_call_value_8_18);

                exception_lineno = 504;

                goto list_build_exception_12;
            }
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_88);
                Py_DECREF(tmp_kw_call_value_8_18);
                Py_DECREF(tmp_called_value_89);

                exception_lineno = 504;

                goto list_build_exception_12;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 504;
            tmp_args_element_value_17 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[116]);
            if (tmp_args_element_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_88);
                Py_DECREF(tmp_kw_call_value_8_18);
                Py_DECREF(tmp_called_value_89);

                exception_lineno = 504;

                goto list_build_exception_12;
            }
            tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_90 == NULL)) {
                tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_88);
                Py_DECREF(tmp_kw_call_value_8_18);
                Py_DECREF(tmp_called_value_89);
                Py_DECREF(tmp_args_element_value_17);

                exception_lineno = 504;

                goto list_build_exception_12;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 504;
            tmp_args_element_value_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_90, mod_consts[117]);

            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_88);
                Py_DECREF(tmp_kw_call_value_8_18);
                Py_DECREF(tmp_called_value_89);
                Py_DECREF(tmp_args_element_value_17);

                exception_lineno = 504;

                goto list_build_exception_12;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 504;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_kw_call_value_14_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_89, call_args);
            }

            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_kw_call_value_14_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_88);
                Py_DECREF(tmp_kw_call_value_8_18);

                exception_lineno = 504;

                goto list_build_exception_12;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 498;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_20, tmp_kw_call_value_1_20, tmp_kw_call_value_2_20, tmp_kw_call_value_3_20, tmp_kw_call_value_4_19, tmp_kw_call_value_5_19, tmp_kw_call_value_6_18, tmp_kw_call_value_7_18, tmp_kw_call_value_8_18, tmp_kw_call_value_9_11, tmp_kw_call_value_10_11, tmp_kw_call_value_11_11, tmp_kw_call_value_12_11, tmp_kw_call_value_13_11, tmp_kw_call_value_14_11};

                tmp_list_element_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_88, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_kw_call_value_8_18);
            Py_DECREF(tmp_kw_call_value_14_11);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_18, 2, tmp_list_element_12);
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto list_build_exception_12;
            }
            tmp_called_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[108]);
            if (tmp_called_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto list_build_exception_12;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 505;
            tmp_list_element_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_91, &PyTuple_GET_ITEM(mod_consts[176], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_91);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_18, 3, tmp_list_element_12);
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;

                goto list_build_exception_12;
            }
            tmp_called_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[108]);
            if (tmp_called_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;

                goto list_build_exception_12;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 512;
            tmp_list_element_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_92, &PyTuple_GET_ITEM(mod_consts[177], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_92);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_18, 4, tmp_list_element_12);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_kw_call_value_5_18);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_kw_call_value_6_19 = MAKE_LIST_EMPTY(0);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_kw_call_value_5_18);
            Py_DECREF(tmp_kw_call_value_6_19);

            exception_lineno = 522;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_19 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_value_7_19, 0, tmp_list_element_13);
        tmp_kw_call_value_8_19 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_12 = Py_None;
        tmp_kw_call_value_10_12 = Py_False;
        tmp_kw_call_value_11_12 = mod_consts[32];
        tmp_kw_call_value_12_12 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_12 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_12 = mod_consts[178];
        tmp_kw_call_value_15_4 = mod_consts[168];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 477;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_19, tmp_kw_call_value_1_19, tmp_kw_call_value_2_19, tmp_kw_call_value_3_19, tmp_kw_call_value_4_18, tmp_kw_call_value_5_18, tmp_kw_call_value_6_19, tmp_kw_call_value_7_19, tmp_kw_call_value_8_19, tmp_kw_call_value_9_12, tmp_kw_call_value_10_12, tmp_kw_call_value_11_12, tmp_kw_call_value_12_12, tmp_kw_call_value_13_12, tmp_kw_call_value_14_12, tmp_kw_call_value_15_4};

            tmp_assign_source_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_85, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_kw_call_value_5_18);
        Py_DECREF(tmp_kw_call_value_6_19);
        Py_DECREF(tmp_kw_call_value_7_19);
        Py_DECREF(tmp_kw_call_value_8_19);
        Py_DECREF(tmp_kw_call_value_12_12);
        Py_DECREF(tmp_kw_call_value_13_12);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_kw_call_value_0_21;
        PyObject *tmp_kw_call_value_1_21;
        PyObject *tmp_kw_call_value_2_21;
        PyObject *tmp_kw_call_value_3_21;
        PyObject *tmp_kw_call_value_4_20;
        PyObject *tmp_kw_call_value_5_20;
        PyObject *tmp_list_element_14;
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_kw_call_value_6_20;
        PyObject *tmp_kw_call_value_7_20;
        PyObject *tmp_kw_call_value_8_20;
        PyObject *tmp_kw_call_value_9_13;
        PyObject *tmp_kw_call_value_10_13;
        PyObject *tmp_kw_call_value_11_13;
        PyObject *tmp_kw_call_value_12_13;
        PyObject *tmp_kw_call_value_13_13;
        PyObject *tmp_kw_call_value_14_13;
        PyObject *tmp_kw_call_value_15_5;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[105]);
        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_21 = mod_consts[180];
        tmp_kw_call_value_1_21 = mod_consts[181];
        tmp_kw_call_value_2_21 = Py_None;
        tmp_kw_call_value_3_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_21 == NULL)) {
            tmp_kw_call_value_3_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_20 = Py_None;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[108]);
        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 543;
        tmp_list_element_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_94, &PyTuple_GET_ITEM(mod_consts[182], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_94);
        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_20 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_95;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_called_value_96;
            PyObject *tmp_expression_value_87;
            PyList_SET_ITEM(tmp_kw_call_value_5_20, 0, tmp_list_element_14);
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto list_build_exception_13;
            }
            tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[108]);
            if (tmp_called_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto list_build_exception_13;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 550;
            tmp_list_element_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_95, &PyTuple_GET_ITEM(mod_consts[183], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_95);
            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_20, 1, tmp_list_element_14);
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto list_build_exception_13;
            }
            tmp_called_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[108]);
            if (tmp_called_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto list_build_exception_13;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 557;
            tmp_list_element_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_96, &PyTuple_GET_ITEM(mod_consts[184], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_96);
            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_20, 2, tmp_list_element_14);
        }
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_kw_call_value_5_20);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_kw_call_value_6_20 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_20 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_20 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_13 = Py_None;
        tmp_kw_call_value_10_13 = Py_False;
        tmp_kw_call_value_11_13 = mod_consts[32];
        tmp_kw_call_value_12_13 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_13 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_13 = mod_consts[185];
        tmp_kw_call_value_15_5 = mod_consts[186];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 536;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_21, tmp_kw_call_value_1_21, tmp_kw_call_value_2_21, tmp_kw_call_value_3_21, tmp_kw_call_value_4_20, tmp_kw_call_value_5_20, tmp_kw_call_value_6_20, tmp_kw_call_value_7_20, tmp_kw_call_value_8_20, tmp_kw_call_value_9_13, tmp_kw_call_value_10_13, tmp_kw_call_value_11_13, tmp_kw_call_value_12_13, tmp_kw_call_value_13_13, tmp_kw_call_value_14_13, tmp_kw_call_value_15_5};

            tmp_assign_source_24 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_93, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_kw_call_value_5_20);
        Py_DECREF(tmp_kw_call_value_6_20);
        Py_DECREF(tmp_kw_call_value_7_20);
        Py_DECREF(tmp_kw_call_value_8_20);
        Py_DECREF(tmp_kw_call_value_12_13);
        Py_DECREF(tmp_kw_call_value_13_13);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_kw_call_value_0_22;
        PyObject *tmp_kw_call_value_1_22;
        PyObject *tmp_kw_call_value_2_22;
        PyObject *tmp_kw_call_value_3_22;
        PyObject *tmp_kw_call_value_4_21;
        PyObject *tmp_kw_call_value_5_21;
        PyObject *tmp_list_element_15;
        PyObject *tmp_called_value_98;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_kw_call_value_6_25;
        PyObject *tmp_kw_call_value_7_25;
        PyObject *tmp_list_element_16;
        PyObject *tmp_kw_call_value_8_25;
        PyObject *tmp_list_element_17;
        PyObject *tmp_kw_call_value_9_18;
        PyObject *tmp_kw_call_value_10_18;
        PyObject *tmp_kw_call_value_11_18;
        PyObject *tmp_kw_call_value_12_18;
        PyObject *tmp_kw_call_value_13_18;
        PyObject *tmp_kw_call_value_14_18;
        PyObject *tmp_kw_call_value_15_6;
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[105]);
        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_22 = mod_consts[188];
        tmp_kw_call_value_1_22 = mod_consts[189];
        tmp_kw_call_value_2_22 = Py_None;
        tmp_kw_call_value_3_22 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_22 == NULL)) {
            tmp_kw_call_value_3_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_21 = Py_None;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_called_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[108]);
        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 587;
        tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_98, &PyTuple_GET_ITEM(mod_consts[190], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_98);
        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_21 = MAKE_LIST_EMPTY(9);
        {
            PyObject *tmp_called_value_99;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_called_value_100;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_kw_call_value_0_23;
            PyObject *tmp_kw_call_value_1_23;
            PyObject *tmp_kw_call_value_2_23;
            PyObject *tmp_kw_call_value_3_23;
            PyObject *tmp_kw_call_value_4_22;
            PyObject *tmp_kw_call_value_5_22;
            PyObject *tmp_kw_call_value_6_21;
            PyObject *tmp_kw_call_value_7_21;
            PyObject *tmp_kw_call_value_8_21;
            PyObject *tmp_kw_call_value_9_14;
            PyObject *tmp_kw_call_value_10_14;
            PyObject *tmp_kw_call_value_11_14;
            PyObject *tmp_kw_call_value_12_14;
            PyObject *tmp_kw_call_value_13_14;
            PyObject *tmp_kw_call_value_14_14;
            PyObject *tmp_called_value_101;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_called_value_102;
            PyObject *tmp_called_value_103;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_called_value_104;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_called_value_105;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_called_value_106;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_kw_call_value_0_24;
            PyObject *tmp_kw_call_value_1_24;
            PyObject *tmp_kw_call_value_2_24;
            PyObject *tmp_kw_call_value_3_24;
            PyObject *tmp_kw_call_value_4_23;
            PyObject *tmp_kw_call_value_5_23;
            PyObject *tmp_kw_call_value_6_22;
            PyObject *tmp_kw_call_value_7_22;
            PyObject *tmp_kw_call_value_8_22;
            PyObject *tmp_kw_call_value_9_15;
            PyObject *tmp_kw_call_value_10_15;
            PyObject *tmp_kw_call_value_11_15;
            PyObject *tmp_kw_call_value_12_15;
            PyObject *tmp_kw_call_value_13_15;
            PyObject *tmp_kw_call_value_14_15;
            PyObject *tmp_called_value_107;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_108;
            PyObject *tmp_called_value_109;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_kw_call_value_0_25;
            PyObject *tmp_kw_call_value_1_25;
            PyObject *tmp_kw_call_value_2_25;
            PyObject *tmp_kw_call_value_3_25;
            PyObject *tmp_kw_call_value_4_24;
            PyObject *tmp_kw_call_value_5_24;
            PyObject *tmp_kw_call_value_6_23;
            PyObject *tmp_kw_call_value_7_23;
            PyObject *tmp_kw_call_value_8_23;
            PyObject *tmp_kw_call_value_9_16;
            PyObject *tmp_kw_call_value_10_16;
            PyObject *tmp_kw_call_value_11_16;
            PyObject *tmp_kw_call_value_12_16;
            PyObject *tmp_kw_call_value_13_16;
            PyObject *tmp_kw_call_value_14_16;
            PyObject *tmp_called_value_110;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_value_111;
            PyObject *tmp_called_value_112;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_kw_call_value_0_26;
            PyObject *tmp_kw_call_value_1_26;
            PyObject *tmp_kw_call_value_2_26;
            PyObject *tmp_kw_call_value_3_26;
            PyObject *tmp_kw_call_value_4_25;
            PyObject *tmp_kw_call_value_5_25;
            PyObject *tmp_kw_call_value_6_24;
            PyObject *tmp_kw_call_value_7_24;
            PyObject *tmp_kw_call_value_8_24;
            PyObject *tmp_kw_call_value_9_17;
            PyObject *tmp_kw_call_value_10_17;
            PyObject *tmp_kw_call_value_11_17;
            PyObject *tmp_kw_call_value_12_17;
            PyObject *tmp_kw_call_value_13_17;
            PyObject *tmp_kw_call_value_14_17;
            PyObject *tmp_called_value_113;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_called_value_114;
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 0, tmp_list_element_15);
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;

                goto list_build_exception_14;
            }
            tmp_called_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[108]);
            if (tmp_called_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 594;
            tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_99, &PyTuple_GET_ITEM(mod_consts[191], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_99);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 1, tmp_list_element_15);
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;

                goto list_build_exception_14;
            }
            tmp_called_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[108]);
            if (tmp_called_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;

                goto list_build_exception_14;
            }
            tmp_kw_call_value_0_23 = mod_consts[192];
            tmp_kw_call_value_1_23 = mod_consts[193];
            tmp_kw_call_value_2_23 = mod_consts[112];
            tmp_kw_call_value_3_23 = mod_consts[114];
            tmp_kw_call_value_4_22 = mod_consts[112];
            tmp_kw_call_value_5_22 = mod_consts[113];
            tmp_kw_call_value_6_21 = mod_consts[114];
            tmp_kw_call_value_7_21 = Py_False;
            tmp_kw_call_value_8_21 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_14 = Py_None;
            tmp_kw_call_value_10_14 = Py_None;
            tmp_kw_call_value_11_14 = Py_None;
            tmp_kw_call_value_12_14 = Py_False;
            tmp_kw_call_value_13_14 = Py_None;
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);
                Py_DECREF(tmp_kw_call_value_8_21);

                exception_lineno = 607;

                goto list_build_exception_14;
            }
            tmp_called_value_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[115]);
            if (tmp_called_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);
                Py_DECREF(tmp_kw_call_value_8_21);

                exception_lineno = 607;

                goto list_build_exception_14;
            }
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);
                Py_DECREF(tmp_kw_call_value_8_21);
                Py_DECREF(tmp_called_value_101);

                exception_lineno = 607;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 607;
            tmp_args_element_value_19 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[116]);
            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);
                Py_DECREF(tmp_kw_call_value_8_21);
                Py_DECREF(tmp_called_value_101);

                exception_lineno = 607;

                goto list_build_exception_14;
            }
            tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_102 == NULL)) {
                tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);
                Py_DECREF(tmp_kw_call_value_8_21);
                Py_DECREF(tmp_called_value_101);
                Py_DECREF(tmp_args_element_value_19);

                exception_lineno = 607;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 607;
            tmp_args_element_value_20 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_102, mod_consts[117]);

            if (tmp_args_element_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);
                Py_DECREF(tmp_kw_call_value_8_21);
                Py_DECREF(tmp_called_value_101);
                Py_DECREF(tmp_args_element_value_19);

                exception_lineno = 607;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 607;
            {
                PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
                tmp_kw_call_value_14_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_101, call_args);
            }

            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_kw_call_value_14_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);
                Py_DECREF(tmp_kw_call_value_8_21);

                exception_lineno = 607;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 601;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_23, tmp_kw_call_value_1_23, tmp_kw_call_value_2_23, tmp_kw_call_value_3_23, tmp_kw_call_value_4_22, tmp_kw_call_value_5_22, tmp_kw_call_value_6_21, tmp_kw_call_value_7_21, tmp_kw_call_value_8_21, tmp_kw_call_value_9_14, tmp_kw_call_value_10_14, tmp_kw_call_value_11_14, tmp_kw_call_value_12_14, tmp_kw_call_value_13_14, tmp_kw_call_value_14_14};

                tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_100, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_kw_call_value_8_21);
            Py_DECREF(tmp_kw_call_value_14_14);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 2, tmp_list_element_15);
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;

                goto list_build_exception_14;
            }
            tmp_called_value_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[108]);
            if (tmp_called_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 608;
            tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_103, &PyTuple_GET_ITEM(mod_consts[194], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_103);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 3, tmp_list_element_15);
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;

                goto list_build_exception_14;
            }
            tmp_called_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[108]);
            if (tmp_called_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 615;
            tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_104, &PyTuple_GET_ITEM(mod_consts[195], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_104);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 4, tmp_list_element_15);
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 622;

                goto list_build_exception_14;
            }
            tmp_called_value_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[108]);
            if (tmp_called_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 622;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 622;
            tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_105, &PyTuple_GET_ITEM(mod_consts[196], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_105);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 622;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 5, tmp_list_element_15);
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto list_build_exception_14;
            }
            tmp_called_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[108]);
            if (tmp_called_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto list_build_exception_14;
            }
            tmp_kw_call_value_0_24 = mod_consts[197];
            tmp_kw_call_value_1_24 = mod_consts[198];
            tmp_kw_call_value_2_24 = mod_consts[113];
            tmp_kw_call_value_3_24 = mod_consts[130];
            tmp_kw_call_value_4_23 = mod_consts[112];
            tmp_kw_call_value_5_23 = mod_consts[113];
            tmp_kw_call_value_6_22 = mod_consts[114];
            tmp_kw_call_value_7_22 = Py_False;
            tmp_kw_call_value_8_22 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_15 = Py_None;
            tmp_kw_call_value_10_15 = Py_None;
            tmp_kw_call_value_11_15 = Py_None;
            tmp_kw_call_value_12_15 = Py_False;
            tmp_kw_call_value_13_15 = Py_None;
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);
                Py_DECREF(tmp_kw_call_value_8_22);

                exception_lineno = 635;

                goto list_build_exception_14;
            }
            tmp_called_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[115]);
            if (tmp_called_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);
                Py_DECREF(tmp_kw_call_value_8_22);

                exception_lineno = 635;

                goto list_build_exception_14;
            }
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);
                Py_DECREF(tmp_kw_call_value_8_22);
                Py_DECREF(tmp_called_value_107);

                exception_lineno = 635;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 635;
            tmp_args_element_value_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[116]);
            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);
                Py_DECREF(tmp_kw_call_value_8_22);
                Py_DECREF(tmp_called_value_107);

                exception_lineno = 635;

                goto list_build_exception_14;
            }
            tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_108 == NULL)) {
                tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);
                Py_DECREF(tmp_kw_call_value_8_22);
                Py_DECREF(tmp_called_value_107);
                Py_DECREF(tmp_args_element_value_21);

                exception_lineno = 635;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 635;
            tmp_args_element_value_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_108, mod_consts[117]);

            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);
                Py_DECREF(tmp_kw_call_value_8_22);
                Py_DECREF(tmp_called_value_107);
                Py_DECREF(tmp_args_element_value_21);

                exception_lineno = 635;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 635;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
                tmp_kw_call_value_14_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_107, call_args);
            }

            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_kw_call_value_14_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_106);
                Py_DECREF(tmp_kw_call_value_8_22);

                exception_lineno = 635;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 629;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_24, tmp_kw_call_value_1_24, tmp_kw_call_value_2_24, tmp_kw_call_value_3_24, tmp_kw_call_value_4_23, tmp_kw_call_value_5_23, tmp_kw_call_value_6_22, tmp_kw_call_value_7_22, tmp_kw_call_value_8_22, tmp_kw_call_value_9_15, tmp_kw_call_value_10_15, tmp_kw_call_value_11_15, tmp_kw_call_value_12_15, tmp_kw_call_value_13_15, tmp_kw_call_value_14_15};

                tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_106, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_kw_call_value_8_22);
            Py_DECREF(tmp_kw_call_value_14_15);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 6, tmp_list_element_15);
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto list_build_exception_14;
            }
            tmp_called_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[108]);
            if (tmp_called_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto list_build_exception_14;
            }
            tmp_kw_call_value_0_25 = mod_consts[199];
            tmp_kw_call_value_1_25 = mod_consts[200];
            tmp_kw_call_value_2_25 = mod_consts[130];
            tmp_kw_call_value_3_25 = mod_consts[201];
            tmp_kw_call_value_4_24 = mod_consts[112];
            tmp_kw_call_value_5_24 = mod_consts[113];
            tmp_kw_call_value_6_23 = mod_consts[114];
            tmp_kw_call_value_7_23 = Py_False;
            tmp_kw_call_value_8_23 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_16 = Py_None;
            tmp_kw_call_value_10_16 = Py_None;
            tmp_kw_call_value_11_16 = Py_None;
            tmp_kw_call_value_12_16 = Py_False;
            tmp_kw_call_value_13_16 = Py_None;
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);
                Py_DECREF(tmp_kw_call_value_8_23);

                exception_lineno = 642;

                goto list_build_exception_14;
            }
            tmp_called_value_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[115]);
            if (tmp_called_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);
                Py_DECREF(tmp_kw_call_value_8_23);

                exception_lineno = 642;

                goto list_build_exception_14;
            }
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);
                Py_DECREF(tmp_kw_call_value_8_23);
                Py_DECREF(tmp_called_value_110);

                exception_lineno = 642;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 642;
            tmp_args_element_value_23 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[116]);
            if (tmp_args_element_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);
                Py_DECREF(tmp_kw_call_value_8_23);
                Py_DECREF(tmp_called_value_110);

                exception_lineno = 642;

                goto list_build_exception_14;
            }
            tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_111 == NULL)) {
                tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);
                Py_DECREF(tmp_kw_call_value_8_23);
                Py_DECREF(tmp_called_value_110);
                Py_DECREF(tmp_args_element_value_23);

                exception_lineno = 642;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 642;
            tmp_args_element_value_24 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_111, mod_consts[117]);

            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);
                Py_DECREF(tmp_kw_call_value_8_23);
                Py_DECREF(tmp_called_value_110);
                Py_DECREF(tmp_args_element_value_23);

                exception_lineno = 642;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 642;
            {
                PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_kw_call_value_14_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_110, call_args);
            }

            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_kw_call_value_14_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);
                Py_DECREF(tmp_kw_call_value_8_23);

                exception_lineno = 642;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 636;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_25, tmp_kw_call_value_1_25, tmp_kw_call_value_2_25, tmp_kw_call_value_3_25, tmp_kw_call_value_4_24, tmp_kw_call_value_5_24, tmp_kw_call_value_6_23, tmp_kw_call_value_7_23, tmp_kw_call_value_8_23, tmp_kw_call_value_9_16, tmp_kw_call_value_10_16, tmp_kw_call_value_11_16, tmp_kw_call_value_12_16, tmp_kw_call_value_13_16, tmp_kw_call_value_14_16};

                tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_109, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_kw_call_value_8_23);
            Py_DECREF(tmp_kw_call_value_14_16);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 7, tmp_list_element_15);
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto list_build_exception_14;
            }
            tmp_called_value_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[108]);
            if (tmp_called_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto list_build_exception_14;
            }
            tmp_kw_call_value_0_26 = mod_consts[202];
            tmp_kw_call_value_1_26 = mod_consts[203];
            tmp_kw_call_value_2_26 = mod_consts[201];
            tmp_kw_call_value_3_26 = mod_consts[142];
            tmp_kw_call_value_4_25 = mod_consts[112];
            tmp_kw_call_value_5_25 = mod_consts[113];
            tmp_kw_call_value_6_24 = mod_consts[114];
            tmp_kw_call_value_7_24 = Py_False;
            tmp_kw_call_value_8_24 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_17 = Py_None;
            tmp_kw_call_value_10_17 = Py_None;
            tmp_kw_call_value_11_17 = Py_None;
            tmp_kw_call_value_12_17 = Py_False;
            tmp_kw_call_value_13_17 = Py_None;
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_kw_call_value_8_24);

                exception_lineno = 649;

                goto list_build_exception_14;
            }
            tmp_called_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[115]);
            if (tmp_called_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_kw_call_value_8_24);

                exception_lineno = 649;

                goto list_build_exception_14;
            }
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_kw_call_value_8_24);
                Py_DECREF(tmp_called_value_113);

                exception_lineno = 649;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 649;
            tmp_args_element_value_25 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts[116]);
            if (tmp_args_element_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_kw_call_value_8_24);
                Py_DECREF(tmp_called_value_113);

                exception_lineno = 649;

                goto list_build_exception_14;
            }
            tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_114 == NULL)) {
                tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_kw_call_value_8_24);
                Py_DECREF(tmp_called_value_113);
                Py_DECREF(tmp_args_element_value_25);

                exception_lineno = 649;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 649;
            tmp_args_element_value_26 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_114, mod_consts[117]);

            if (tmp_args_element_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_kw_call_value_8_24);
                Py_DECREF(tmp_called_value_113);
                Py_DECREF(tmp_args_element_value_25);

                exception_lineno = 649;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 649;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
                tmp_kw_call_value_14_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_113, call_args);
            }

            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_kw_call_value_14_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_kw_call_value_8_24);

                exception_lineno = 649;

                goto list_build_exception_14;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 643;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_26, tmp_kw_call_value_1_26, tmp_kw_call_value_2_26, tmp_kw_call_value_3_26, tmp_kw_call_value_4_25, tmp_kw_call_value_5_25, tmp_kw_call_value_6_24, tmp_kw_call_value_7_24, tmp_kw_call_value_8_24, tmp_kw_call_value_9_17, tmp_kw_call_value_10_17, tmp_kw_call_value_11_17, tmp_kw_call_value_12_17, tmp_kw_call_value_13_17, tmp_kw_call_value_14_17};

                tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_112, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_kw_call_value_8_24);
            Py_DECREF(tmp_kw_call_value_14_17);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_21, 8, tmp_list_element_15);
        }
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_kw_call_value_5_21);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_kw_call_value_6_25 = MAKE_LIST_EMPTY(0);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_kw_call_value_5_21);
            Py_DECREF(tmp_kw_call_value_6_25);

            exception_lineno = 653;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_25 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_value_7_25, 0, tmp_list_element_16);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_kw_call_value_5_21);
            Py_DECREF(tmp_kw_call_value_6_25);
            Py_DECREF(tmp_kw_call_value_7_25);

            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_25 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_kw_call_value_8_25, 0, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto list_build_exception_15;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_8_25, 1, tmp_list_element_17);
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_kw_call_value_5_21);
        Py_DECREF(tmp_kw_call_value_6_25);
        Py_DECREF(tmp_kw_call_value_7_25);
        Py_DECREF(tmp_kw_call_value_8_25);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_kw_call_value_9_18 = Py_None;
        tmp_kw_call_value_10_18 = Py_False;
        tmp_kw_call_value_11_18 = mod_consts[32];
        tmp_kw_call_value_12_18 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_18 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_18 = mod_consts[204];
        tmp_kw_call_value_15_6 = mod_consts[76];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 580;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_22, tmp_kw_call_value_1_22, tmp_kw_call_value_2_22, tmp_kw_call_value_3_22, tmp_kw_call_value_4_21, tmp_kw_call_value_5_21, tmp_kw_call_value_6_25, tmp_kw_call_value_7_25, tmp_kw_call_value_8_25, tmp_kw_call_value_9_18, tmp_kw_call_value_10_18, tmp_kw_call_value_11_18, tmp_kw_call_value_12_18, tmp_kw_call_value_13_18, tmp_kw_call_value_14_18, tmp_kw_call_value_15_6};

            tmp_assign_source_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_97, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_kw_call_value_5_21);
        Py_DECREF(tmp_kw_call_value_6_25);
        Py_DECREF(tmp_kw_call_value_7_25);
        Py_DECREF(tmp_kw_call_value_8_25);
        Py_DECREF(tmp_kw_call_value_12_18);
        Py_DECREF(tmp_kw_call_value_13_18);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_kw_call_value_0_27;
        PyObject *tmp_kw_call_value_1_27;
        PyObject *tmp_kw_call_value_2_27;
        PyObject *tmp_kw_call_value_3_27;
        PyObject *tmp_kw_call_value_4_26;
        PyObject *tmp_kw_call_value_5_26;
        PyObject *tmp_list_element_18;
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_kw_call_value_6_26;
        PyObject *tmp_kw_call_value_7_26;
        PyObject *tmp_kw_call_value_8_26;
        PyObject *tmp_kw_call_value_9_19;
        PyObject *tmp_kw_call_value_10_19;
        PyObject *tmp_kw_call_value_11_19;
        PyObject *tmp_kw_call_value_12_19;
        PyObject *tmp_kw_call_value_13_19;
        PyObject *tmp_kw_call_value_14_19;
        PyObject *tmp_kw_call_value_15_7;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[105]);
        if (tmp_called_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_27 = mod_consts[206];
        tmp_kw_call_value_1_27 = mod_consts[207];
        tmp_kw_call_value_2_27 = Py_None;
        tmp_kw_call_value_3_27 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_27 == NULL)) {
            tmp_kw_call_value_3_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 673;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_26 = Py_None;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 676;

            goto frame_exception_exit_1;
        }
        tmp_called_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[108]);
        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 676;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 676;
        tmp_list_element_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_116, &PyTuple_GET_ITEM(mod_consts[208], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_116);
        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 676;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_26 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_117;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_called_value_118;
            PyObject *tmp_expression_value_105;
            PyList_SET_ITEM(tmp_kw_call_value_5_26, 0, tmp_list_element_18);
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 683;

                goto list_build_exception_16;
            }
            tmp_called_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[108]);
            if (tmp_called_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 683;

                goto list_build_exception_16;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 683;
            tmp_list_element_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_117, &PyTuple_GET_ITEM(mod_consts[209], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_117);
            if (tmp_list_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 683;

                goto list_build_exception_16;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_26, 1, tmp_list_element_18);
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;

                goto list_build_exception_16;
            }
            tmp_called_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[108]);
            if (tmp_called_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;

                goto list_build_exception_16;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 690;
            tmp_list_element_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_118, &PyTuple_GET_ITEM(mod_consts[210], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_118);
            if (tmp_list_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;

                goto list_build_exception_16;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_26, 2, tmp_list_element_18);
        }
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_kw_call_value_5_26);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_kw_call_value_6_26 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_26 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_26 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_19 = Py_None;
        tmp_kw_call_value_10_19 = Py_False;
        tmp_kw_call_value_11_19 = mod_consts[32];
        tmp_kw_call_value_12_19 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_19 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_19 = mod_consts[211];
        tmp_kw_call_value_15_7 = mod_consts[212];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 669;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_27, tmp_kw_call_value_1_27, tmp_kw_call_value_2_27, tmp_kw_call_value_3_27, tmp_kw_call_value_4_26, tmp_kw_call_value_5_26, tmp_kw_call_value_6_26, tmp_kw_call_value_7_26, tmp_kw_call_value_8_26, tmp_kw_call_value_9_19, tmp_kw_call_value_10_19, tmp_kw_call_value_11_19, tmp_kw_call_value_12_19, tmp_kw_call_value_13_19, tmp_kw_call_value_14_19, tmp_kw_call_value_15_7};

            tmp_assign_source_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_115, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_kw_call_value_5_26);
        Py_DECREF(tmp_kw_call_value_6_26);
        Py_DECREF(tmp_kw_call_value_7_26);
        Py_DECREF(tmp_kw_call_value_8_26);
        Py_DECREF(tmp_kw_call_value_12_19);
        Py_DECREF(tmp_kw_call_value_13_19);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_119;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_kw_call_value_0_28;
        PyObject *tmp_kw_call_value_1_28;
        PyObject *tmp_kw_call_value_2_28;
        PyObject *tmp_kw_call_value_3_28;
        PyObject *tmp_kw_call_value_4_27;
        PyObject *tmp_kw_call_value_5_27;
        PyObject *tmp_list_element_19;
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_kw_call_value_6_27;
        PyObject *tmp_kw_call_value_7_27;
        PyObject *tmp_kw_call_value_8_27;
        PyObject *tmp_kw_call_value_9_20;
        PyObject *tmp_kw_call_value_10_20;
        PyObject *tmp_kw_call_value_11_20;
        PyObject *tmp_kw_call_value_12_20;
        PyObject *tmp_kw_call_value_13_20;
        PyObject *tmp_kw_call_value_14_20;
        PyObject *tmp_kw_call_value_15_8;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;

            goto frame_exception_exit_1;
        }
        tmp_called_value_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[105]);
        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_28 = mod_consts[214];
        tmp_kw_call_value_1_28 = mod_consts[215];
        tmp_kw_call_value_2_28 = Py_None;
        tmp_kw_call_value_3_28 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_28 == NULL)) {
            tmp_kw_call_value_3_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);

            exception_lineno = 717;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_27 = Py_None;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);

            exception_lineno = 720;

            goto frame_exception_exit_1;
        }
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[108]);
        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);

            exception_lineno = 720;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 720;
        tmp_list_element_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_120, &PyTuple_GET_ITEM(mod_consts[216], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_120);
        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);

            exception_lineno = 720;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_27 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_121;
            PyObject *tmp_expression_value_108;
            PyList_SET_ITEM(tmp_kw_call_value_5_27, 0, tmp_list_element_19);
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;

                goto list_build_exception_17;
            }
            tmp_called_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[108]);
            if (tmp_called_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;

                goto list_build_exception_17;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 727;
            tmp_list_element_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_121, &PyTuple_GET_ITEM(mod_consts[217], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_121);
            if (tmp_list_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;

                goto list_build_exception_17;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_27, 1, tmp_list_element_19);
        }
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_called_value_119);
        Py_DECREF(tmp_kw_call_value_5_27);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_kw_call_value_6_27 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_27 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_27 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_20 = Py_None;
        tmp_kw_call_value_10_20 = Py_False;
        tmp_kw_call_value_11_20 = mod_consts[32];
        tmp_kw_call_value_12_20 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_20 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_20 = mod_consts[218];
        tmp_kw_call_value_15_8 = mod_consts[219];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 713;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_28, tmp_kw_call_value_1_28, tmp_kw_call_value_2_28, tmp_kw_call_value_3_28, tmp_kw_call_value_4_27, tmp_kw_call_value_5_27, tmp_kw_call_value_6_27, tmp_kw_call_value_7_27, tmp_kw_call_value_8_27, tmp_kw_call_value_9_20, tmp_kw_call_value_10_20, tmp_kw_call_value_11_20, tmp_kw_call_value_12_20, tmp_kw_call_value_13_20, tmp_kw_call_value_14_20, tmp_kw_call_value_15_8};

            tmp_assign_source_27 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_119, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_119);
        Py_DECREF(tmp_kw_call_value_5_27);
        Py_DECREF(tmp_kw_call_value_6_27);
        Py_DECREF(tmp_kw_call_value_7_27);
        Py_DECREF(tmp_kw_call_value_8_27);
        Py_DECREF(tmp_kw_call_value_12_20);
        Py_DECREF(tmp_kw_call_value_13_20);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_kw_call_value_0_29;
        PyObject *tmp_kw_call_value_1_29;
        PyObject *tmp_kw_call_value_2_29;
        PyObject *tmp_kw_call_value_3_29;
        PyObject *tmp_kw_call_value_4_28;
        PyObject *tmp_kw_call_value_5_28;
        PyObject *tmp_list_element_20;
        PyObject *tmp_called_value_123;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_call_args_kwsplit_1;
        PyObject *tmp_kw_call_value_6_29;
        PyObject *tmp_kw_call_value_7_29;
        PyObject *tmp_list_element_21;
        PyObject *tmp_kw_call_value_8_29;
        PyObject *tmp_kw_call_value_9_22;
        PyObject *tmp_kw_call_value_10_22;
        PyObject *tmp_kw_call_value_11_22;
        PyObject *tmp_kw_call_value_12_22;
        PyObject *tmp_kw_call_value_13_22;
        PyObject *tmp_kw_call_value_14_22;
        PyObject *tmp_kw_call_value_15_9;
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;

            goto frame_exception_exit_1;
        }
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[105]);
        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_29 = mod_consts[221];
        tmp_kw_call_value_1_29 = mod_consts[222];
        tmp_kw_call_value_2_29 = Py_None;
        tmp_kw_call_value_3_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_29 == NULL)) {
            tmp_kw_call_value_3_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 754;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_28 = Py_None;
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 757;

            goto frame_exception_exit_1;
        }
        tmp_called_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[108]);
        if (tmp_called_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 757;

            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[223], "iiiiiiiiliiiiii");
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 757;
        tmp_list_element_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_123, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_123);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 757;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_28 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_124;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_called_value_125;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_call_args_kwsplit_2;
            PyObject *tmp_called_value_126;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_called_value_127;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_kw_call_value_0_30;
            PyObject *tmp_kw_call_value_1_30;
            PyObject *tmp_kw_call_value_2_30;
            PyObject *tmp_kw_call_value_3_30;
            PyObject *tmp_kw_call_value_4_29;
            PyObject *tmp_kw_call_value_5_29;
            PyObject *tmp_kw_call_value_6_28;
            PyObject *tmp_kw_call_value_7_28;
            PyObject *tmp_kw_call_value_8_28;
            PyObject *tmp_kw_call_value_9_21;
            PyObject *tmp_kw_call_value_10_21;
            PyObject *tmp_kw_call_value_11_21;
            PyObject *tmp_kw_call_value_12_21;
            PyObject *tmp_kw_call_value_13_21;
            PyObject *tmp_kw_call_value_14_21;
            PyObject *tmp_called_value_128;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_129;
            PyObject *tmp_called_value_130;
            PyObject *tmp_expression_value_116;
            PyList_SET_ITEM(tmp_kw_call_value_5_28, 0, tmp_list_element_20);
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 764;

                goto list_build_exception_18;
            }
            tmp_called_value_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[108]);
            if (tmp_called_value_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 764;

                goto list_build_exception_18;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 764;
            tmp_list_element_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_124, &PyTuple_GET_ITEM(mod_consts[224], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_124);
            if (tmp_list_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 764;

                goto list_build_exception_18;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_28, 1, tmp_list_element_20);
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 771;

                goto list_build_exception_18;
            }
            tmp_called_value_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[108]);
            if (tmp_called_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 771;

                goto list_build_exception_18;
            }
            tmp_call_args_kwsplit_2 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[225], "iiiiiiiiliiiiii");
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 771;
            tmp_list_element_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_125, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_2, 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_call_args_kwsplit_2);
            if (tmp_list_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 771;

                goto list_build_exception_18;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_28, 2, tmp_list_element_20);
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;

                goto list_build_exception_18;
            }
            tmp_called_value_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[108]);
            if (tmp_called_value_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;

                goto list_build_exception_18;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 778;
            tmp_list_element_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_126, &PyTuple_GET_ITEM(mod_consts[226], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_126);
            if (tmp_list_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;

                goto list_build_exception_18;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_28, 3, tmp_list_element_20);
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 785;

                goto list_build_exception_18;
            }
            tmp_called_value_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[108]);
            if (tmp_called_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 785;

                goto list_build_exception_18;
            }
            tmp_kw_call_value_0_30 = mod_consts[227];
            tmp_kw_call_value_1_30 = mod_consts[228];
            tmp_kw_call_value_2_30 = mod_consts[123];
            tmp_kw_call_value_3_30 = mod_consts[127];
            tmp_kw_call_value_4_29 = mod_consts[127];
            tmp_kw_call_value_5_29 = mod_consts[111];
            tmp_kw_call_value_6_28 = mod_consts[114];
            tmp_kw_call_value_7_28 = Py_False;
            tmp_kw_call_value_8_28 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_21 = Py_None;
            tmp_kw_call_value_10_21 = Py_None;
            tmp_kw_call_value_11_21 = Py_None;
            tmp_kw_call_value_12_21 = Py_False;
            tmp_kw_call_value_13_21 = Py_None;
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_127);
                Py_DECREF(tmp_kw_call_value_8_28);

                exception_lineno = 791;

                goto list_build_exception_18;
            }
            tmp_called_value_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[115]);
            if (tmp_called_value_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_127);
                Py_DECREF(tmp_kw_call_value_8_28);

                exception_lineno = 791;

                goto list_build_exception_18;
            }
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_127);
                Py_DECREF(tmp_kw_call_value_8_28);
                Py_DECREF(tmp_called_value_128);

                exception_lineno = 791;

                goto list_build_exception_18;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 791;
            tmp_args_element_value_27 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[116]);
            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_127);
                Py_DECREF(tmp_kw_call_value_8_28);
                Py_DECREF(tmp_called_value_128);

                exception_lineno = 791;

                goto list_build_exception_18;
            }
            tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_129 == NULL)) {
                tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_127);
                Py_DECREF(tmp_kw_call_value_8_28);
                Py_DECREF(tmp_called_value_128);
                Py_DECREF(tmp_args_element_value_27);

                exception_lineno = 791;

                goto list_build_exception_18;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 791;
            tmp_args_element_value_28 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_129, mod_consts[117]);

            if (tmp_args_element_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_127);
                Py_DECREF(tmp_kw_call_value_8_28);
                Py_DECREF(tmp_called_value_128);
                Py_DECREF(tmp_args_element_value_27);

                exception_lineno = 791;

                goto list_build_exception_18;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 791;
            {
                PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
                tmp_kw_call_value_14_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_128, call_args);
            }

            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_kw_call_value_14_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_127);
                Py_DECREF(tmp_kw_call_value_8_28);

                exception_lineno = 791;

                goto list_build_exception_18;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 785;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_30, tmp_kw_call_value_1_30, tmp_kw_call_value_2_30, tmp_kw_call_value_3_30, tmp_kw_call_value_4_29, tmp_kw_call_value_5_29, tmp_kw_call_value_6_28, tmp_kw_call_value_7_28, tmp_kw_call_value_8_28, tmp_kw_call_value_9_21, tmp_kw_call_value_10_21, tmp_kw_call_value_11_21, tmp_kw_call_value_12_21, tmp_kw_call_value_13_21, tmp_kw_call_value_14_21};

                tmp_list_element_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_127, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_kw_call_value_8_28);
            Py_DECREF(tmp_kw_call_value_14_21);
            if (tmp_list_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 785;

                goto list_build_exception_18;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_28, 4, tmp_list_element_20);
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 792;

                goto list_build_exception_18;
            }
            tmp_called_value_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[108]);
            if (tmp_called_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 792;

                goto list_build_exception_18;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 792;
            tmp_list_element_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_130, &PyTuple_GET_ITEM(mod_consts[229], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_130);
            if (tmp_list_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 792;

                goto list_build_exception_18;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_28, 5, tmp_list_element_20);
        }
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_kw_call_value_5_28);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_kw_call_value_6_29 = MAKE_LIST_EMPTY(0);
        tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_list_element_21 == NULL)) {
            tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_kw_call_value_5_28);
            Py_DECREF(tmp_kw_call_value_6_29);

            exception_lineno = 802;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_29 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_kw_call_value_7_29, 0, tmp_list_element_21);
        tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_list_element_21 == NULL)) {
            tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 802;

            goto list_build_exception_19;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_7_29, 1, tmp_list_element_21);
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_kw_call_value_5_28);
        Py_DECREF(tmp_kw_call_value_6_29);
        Py_DECREF(tmp_kw_call_value_7_29);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_kw_call_value_8_29 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_22 = Py_None;
        tmp_kw_call_value_10_22 = Py_False;
        tmp_kw_call_value_11_22 = mod_consts[32];
        tmp_kw_call_value_12_22 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_22 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_22 = mod_consts[230];
        tmp_kw_call_value_15_9 = mod_consts[219];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 750;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_29, tmp_kw_call_value_1_29, tmp_kw_call_value_2_29, tmp_kw_call_value_3_29, tmp_kw_call_value_4_28, tmp_kw_call_value_5_28, tmp_kw_call_value_6_29, tmp_kw_call_value_7_29, tmp_kw_call_value_8_29, tmp_kw_call_value_9_22, tmp_kw_call_value_10_22, tmp_kw_call_value_11_22, tmp_kw_call_value_12_22, tmp_kw_call_value_13_22, tmp_kw_call_value_14_22, tmp_kw_call_value_15_9};

            tmp_assign_source_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_122, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_kw_call_value_5_28);
        Py_DECREF(tmp_kw_call_value_6_29);
        Py_DECREF(tmp_kw_call_value_7_29);
        Py_DECREF(tmp_kw_call_value_8_29);
        Py_DECREF(tmp_kw_call_value_12_22);
        Py_DECREF(tmp_kw_call_value_13_22);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_131;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_kw_call_value_0_31;
        PyObject *tmp_kw_call_value_1_31;
        PyObject *tmp_kw_call_value_2_31;
        PyObject *tmp_kw_call_value_3_31;
        PyObject *tmp_kw_call_value_4_30;
        PyObject *tmp_kw_call_value_5_30;
        PyObject *tmp_list_element_22;
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_kw_call_value_0_32;
        PyObject *tmp_kw_call_value_1_32;
        PyObject *tmp_kw_call_value_2_32;
        PyObject *tmp_kw_call_value_3_32;
        PyObject *tmp_kw_call_value_4_31;
        PyObject *tmp_kw_call_value_5_31;
        PyObject *tmp_kw_call_value_6_30;
        PyObject *tmp_kw_call_value_7_30;
        PyObject *tmp_kw_call_value_8_30;
        PyObject *tmp_called_value_133;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_called_value_134;
        PyObject *tmp_kw_call_value_9_23;
        PyObject *tmp_kw_call_value_10_23;
        PyObject *tmp_kw_call_value_11_23;
        PyObject *tmp_kw_call_value_12_23;
        PyObject *tmp_kw_call_value_13_23;
        PyObject *tmp_kw_call_value_14_23;
        PyObject *tmp_kw_call_value_6_31;
        PyObject *tmp_kw_call_value_7_31;
        PyObject *tmp_kw_call_value_8_31;
        PyObject *tmp_kw_call_value_9_24;
        PyObject *tmp_kw_call_value_10_24;
        PyObject *tmp_kw_call_value_11_24;
        PyObject *tmp_kw_call_value_12_24;
        PyObject *tmp_kw_call_value_13_24;
        PyObject *tmp_kw_call_value_14_24;
        PyObject *tmp_kw_call_value_15_10;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;

            goto frame_exception_exit_1;
        }
        tmp_called_value_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[105]);
        if (tmp_called_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_31 = mod_consts[232];
        tmp_kw_call_value_1_31 = mod_consts[233];
        tmp_kw_call_value_2_31 = Py_None;
        tmp_kw_call_value_3_31 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_31 == NULL)) {
            tmp_kw_call_value_3_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 820;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_30 = Py_None;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 823;

            goto frame_exception_exit_1;
        }
        tmp_called_value_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[108]);
        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 823;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_32 = mod_consts[234];
        tmp_kw_call_value_1_32 = mod_consts[235];
        tmp_kw_call_value_2_32 = mod_consts[13];
        tmp_kw_call_value_3_32 = mod_consts[111];
        tmp_kw_call_value_4_31 = mod_consts[142];
        tmp_kw_call_value_5_31 = mod_consts[142];
        tmp_kw_call_value_6_30 = mod_consts[111];
        tmp_kw_call_value_7_30 = Py_False;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 826;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 826;
        tmp_expression_value_119 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_134, mod_consts[143]);

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 826;

            goto frame_exception_exit_1;
        }
        tmp_called_value_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[146]);
        Py_DECREF(tmp_expression_value_119);
        if (tmp_called_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 826;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 826;
        tmp_kw_call_value_8_30 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_133, mod_consts[147]);

        Py_DECREF(tmp_called_value_133);
        if (tmp_kw_call_value_8_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 826;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_23 = Py_None;
        tmp_kw_call_value_10_23 = Py_None;
        tmp_kw_call_value_11_23 = Py_None;
        tmp_kw_call_value_12_23 = Py_False;
        tmp_kw_call_value_13_23 = Py_None;
        tmp_kw_call_value_14_23 = Py_None;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 823;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_32, tmp_kw_call_value_1_32, tmp_kw_call_value_2_32, tmp_kw_call_value_3_32, tmp_kw_call_value_4_31, tmp_kw_call_value_5_31, tmp_kw_call_value_6_30, tmp_kw_call_value_7_30, tmp_kw_call_value_8_30, tmp_kw_call_value_9_23, tmp_kw_call_value_10_23, tmp_kw_call_value_11_23, tmp_kw_call_value_12_23, tmp_kw_call_value_13_23, tmp_kw_call_value_14_23};

            tmp_list_element_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_132, kw_values, mod_consts[118]);
        }

        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_kw_call_value_8_30);
        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 823;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_30 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_135;
            PyObject *tmp_expression_value_120;
            PyList_SET_ITEM(tmp_kw_call_value_5_30, 0, tmp_list_element_22);
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 830;

                goto list_build_exception_20;
            }
            tmp_called_value_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[108]);
            if (tmp_called_value_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 830;

                goto list_build_exception_20;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 830;
            tmp_list_element_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_135, &PyTuple_GET_ITEM(mod_consts[236], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_135);
            if (tmp_list_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 830;

                goto list_build_exception_20;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_30, 1, tmp_list_element_22);
        }
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_called_value_131);
        Py_DECREF(tmp_kw_call_value_5_30);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_kw_call_value_6_31 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_31 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_31 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_24 = Py_None;
        tmp_kw_call_value_10_24 = Py_False;
        tmp_kw_call_value_11_24 = mod_consts[32];
        tmp_kw_call_value_12_24 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_24 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_24 = mod_consts[237];
        tmp_kw_call_value_15_10 = mod_consts[238];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 816;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_31, tmp_kw_call_value_1_31, tmp_kw_call_value_2_31, tmp_kw_call_value_3_31, tmp_kw_call_value_4_30, tmp_kw_call_value_5_30, tmp_kw_call_value_6_31, tmp_kw_call_value_7_31, tmp_kw_call_value_8_31, tmp_kw_call_value_9_24, tmp_kw_call_value_10_24, tmp_kw_call_value_11_24, tmp_kw_call_value_12_24, tmp_kw_call_value_13_24, tmp_kw_call_value_14_24, tmp_kw_call_value_15_10};

            tmp_assign_source_29 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_131, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_131);
        Py_DECREF(tmp_kw_call_value_5_30);
        Py_DECREF(tmp_kw_call_value_6_31);
        Py_DECREF(tmp_kw_call_value_7_31);
        Py_DECREF(tmp_kw_call_value_8_31);
        Py_DECREF(tmp_kw_call_value_12_24);
        Py_DECREF(tmp_kw_call_value_13_24);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_136;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_kw_call_value_0_33;
        PyObject *tmp_kw_call_value_1_33;
        PyObject *tmp_kw_call_value_2_33;
        PyObject *tmp_kw_call_value_3_33;
        PyObject *tmp_kw_call_value_4_32;
        PyObject *tmp_kw_call_value_5_32;
        PyObject *tmp_list_element_23;
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_call_args_kwsplit_3;
        PyObject *tmp_kw_call_value_6_32;
        PyObject *tmp_kw_call_value_7_32;
        PyObject *tmp_list_element_24;
        PyObject *tmp_kw_call_value_8_32;
        PyObject *tmp_kw_call_value_9_25;
        PyObject *tmp_kw_call_value_10_25;
        PyObject *tmp_kw_call_value_11_25;
        PyObject *tmp_kw_call_value_12_25;
        PyObject *tmp_kw_call_value_13_25;
        PyObject *tmp_kw_call_value_14_25;
        PyObject *tmp_kw_call_value_15_11;
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;

            goto frame_exception_exit_1;
        }
        tmp_called_value_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[105]);
        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_33 = mod_consts[240];
        tmp_kw_call_value_1_33 = mod_consts[241];
        tmp_kw_call_value_2_33 = Py_None;
        tmp_kw_call_value_3_33 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_33 == NULL)) {
            tmp_kw_call_value_3_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 857;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_32 = Py_None;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 860;

            goto frame_exception_exit_1;
        }
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[108]);
        if (tmp_called_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 860;

            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_3 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[242], "iiiiiiiiliiiiii");
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 860;
        tmp_list_element_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_137, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_3, 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_call_args_kwsplit_3);
        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 860;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_32 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_value_5_32, 0, tmp_list_element_23);
        tmp_kw_call_value_6_32 = MAKE_LIST_EMPTY(0);
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[239]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_kw_call_value_5_32);
            Py_DECREF(tmp_kw_call_value_6_32);

            exception_lineno = 870;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_32 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_value_7_32, 0, tmp_list_element_24);
        tmp_kw_call_value_8_32 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_25 = Py_None;
        tmp_kw_call_value_10_25 = Py_False;
        tmp_kw_call_value_11_25 = mod_consts[32];
        tmp_kw_call_value_12_25 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_25 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_25 = mod_consts[243];
        tmp_kw_call_value_15_11 = mod_consts[238];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 853;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_33, tmp_kw_call_value_1_33, tmp_kw_call_value_2_33, tmp_kw_call_value_3_33, tmp_kw_call_value_4_32, tmp_kw_call_value_5_32, tmp_kw_call_value_6_32, tmp_kw_call_value_7_32, tmp_kw_call_value_8_32, tmp_kw_call_value_9_25, tmp_kw_call_value_10_25, tmp_kw_call_value_11_25, tmp_kw_call_value_12_25, tmp_kw_call_value_13_25, tmp_kw_call_value_14_25, tmp_kw_call_value_15_11};

            tmp_assign_source_30 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_136, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_kw_call_value_5_32);
        Py_DECREF(tmp_kw_call_value_6_32);
        Py_DECREF(tmp_kw_call_value_7_32);
        Py_DECREF(tmp_kw_call_value_8_32);
        Py_DECREF(tmp_kw_call_value_12_25);
        Py_DECREF(tmp_kw_call_value_13_25);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_138;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_kw_call_value_0_34;
        PyObject *tmp_kw_call_value_1_34;
        PyObject *tmp_kw_call_value_2_34;
        PyObject *tmp_kw_call_value_3_34;
        PyObject *tmp_kw_call_value_4_33;
        PyObject *tmp_kw_call_value_5_33;
        PyObject *tmp_list_element_25;
        PyObject *tmp_called_value_139;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_kw_call_value_6_33;
        PyObject *tmp_kw_call_value_7_33;
        PyObject *tmp_kw_call_value_8_33;
        PyObject *tmp_kw_call_value_9_26;
        PyObject *tmp_kw_call_value_10_26;
        PyObject *tmp_kw_call_value_11_26;
        PyObject *tmp_kw_call_value_12_26;
        PyObject *tmp_kw_call_value_13_26;
        PyObject *tmp_kw_call_value_14_26;
        PyObject *tmp_kw_call_value_15_12;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;

            goto frame_exception_exit_1;
        }
        tmp_called_value_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[105]);
        if (tmp_called_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_34 = mod_consts[245];
        tmp_kw_call_value_1_34 = mod_consts[246];
        tmp_kw_call_value_2_34 = Py_None;
        tmp_kw_call_value_3_34 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_34 == NULL)) {
            tmp_kw_call_value_3_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 888;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_33 = Py_None;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 891;

            goto frame_exception_exit_1;
        }
        tmp_called_value_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[108]);
        if (tmp_called_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 891;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 891;
        tmp_list_element_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_139, &PyTuple_GET_ITEM(mod_consts[247], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_139);
        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 891;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_33 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_140;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_called_value_141;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_call_args_kwsplit_4;
            PyObject *tmp_called_value_142;
            PyObject *tmp_expression_value_127;
            PyList_SET_ITEM(tmp_kw_call_value_5_33, 0, tmp_list_element_25);
            tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_125 == NULL)) {
                tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 898;

                goto list_build_exception_21;
            }
            tmp_called_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[108]);
            if (tmp_called_value_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 898;

                goto list_build_exception_21;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 898;
            tmp_list_element_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_140, &PyTuple_GET_ITEM(mod_consts[248], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_140);
            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 898;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_33, 1, tmp_list_element_25);
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 905;

                goto list_build_exception_21;
            }
            tmp_called_value_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[108]);
            if (tmp_called_value_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 905;

                goto list_build_exception_21;
            }
            tmp_call_args_kwsplit_4 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[249], "iiiiiiiiliiiiii");
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 905;
            tmp_list_element_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_141, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_4, 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_call_args_kwsplit_4);
            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 905;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_33, 2, tmp_list_element_25);
            tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_127 == NULL)) {
                tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 912;

                goto list_build_exception_21;
            }
            tmp_called_value_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[108]);
            if (tmp_called_value_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 912;

                goto list_build_exception_21;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 912;
            tmp_list_element_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_142, &PyTuple_GET_ITEM(mod_consts[250], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_142);
            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 912;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_33, 3, tmp_list_element_25);
        }
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_kw_call_value_5_33);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_kw_call_value_6_33 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_33 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_33 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_26 = Py_None;
        tmp_kw_call_value_10_26 = Py_False;
        tmp_kw_call_value_11_26 = mod_consts[32];
        tmp_kw_call_value_12_26 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_26 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_26 = mod_consts[251];
        tmp_kw_call_value_15_12 = mod_consts[252];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 884;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_34, tmp_kw_call_value_1_34, tmp_kw_call_value_2_34, tmp_kw_call_value_3_34, tmp_kw_call_value_4_33, tmp_kw_call_value_5_33, tmp_kw_call_value_6_33, tmp_kw_call_value_7_33, tmp_kw_call_value_8_33, tmp_kw_call_value_9_26, tmp_kw_call_value_10_26, tmp_kw_call_value_11_26, tmp_kw_call_value_12_26, tmp_kw_call_value_13_26, tmp_kw_call_value_14_26, tmp_kw_call_value_15_12};

            tmp_assign_source_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_138, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_kw_call_value_5_33);
        Py_DECREF(tmp_kw_call_value_6_33);
        Py_DECREF(tmp_kw_call_value_7_33);
        Py_DECREF(tmp_kw_call_value_8_33);
        Py_DECREF(tmp_kw_call_value_12_26);
        Py_DECREF(tmp_kw_call_value_13_26);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_143;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_kw_call_value_0_35;
        PyObject *tmp_kw_call_value_1_35;
        PyObject *tmp_kw_call_value_2_35;
        PyObject *tmp_kw_call_value_3_35;
        PyObject *tmp_kw_call_value_4_34;
        PyObject *tmp_kw_call_value_5_34;
        PyObject *tmp_list_element_26;
        PyObject *tmp_called_value_144;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_kw_call_value_6_34;
        PyObject *tmp_kw_call_value_7_34;
        PyObject *tmp_kw_call_value_8_34;
        PyObject *tmp_kw_call_value_9_27;
        PyObject *tmp_kw_call_value_10_27;
        PyObject *tmp_kw_call_value_11_27;
        PyObject *tmp_kw_call_value_12_27;
        PyObject *tmp_kw_call_value_13_27;
        PyObject *tmp_kw_call_value_14_27;
        PyObject *tmp_kw_call_value_15_13;
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto frame_exception_exit_1;
        }
        tmp_called_value_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[105]);
        if (tmp_called_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_35 = mod_consts[206];
        tmp_kw_call_value_1_35 = mod_consts[254];
        tmp_kw_call_value_2_35 = Py_None;
        tmp_kw_call_value_3_35 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_35 == NULL)) {
            tmp_kw_call_value_3_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);

            exception_lineno = 940;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_34 = Py_None;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);

            exception_lineno = 943;

            goto frame_exception_exit_1;
        }
        tmp_called_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[108]);
        if (tmp_called_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);

            exception_lineno = 943;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 943;
        tmp_list_element_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_144, &PyTuple_GET_ITEM(mod_consts[255], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_144);
        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);

            exception_lineno = 943;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_34 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_145;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_called_value_146;
            PyObject *tmp_expression_value_131;
            PyList_SET_ITEM(tmp_kw_call_value_5_34, 0, tmp_list_element_26);
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 950;

                goto list_build_exception_22;
            }
            tmp_called_value_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[108]);
            if (tmp_called_value_145 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 950;

                goto list_build_exception_22;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 950;
            tmp_list_element_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_145, &PyTuple_GET_ITEM(mod_consts[256], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_145);
            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 950;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_34, 1, tmp_list_element_26);
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 957;

                goto list_build_exception_22;
            }
            tmp_called_value_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[108]);
            if (tmp_called_value_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 957;

                goto list_build_exception_22;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 957;
            tmp_list_element_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_146, &PyTuple_GET_ITEM(mod_consts[257], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_146);
            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 957;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_34, 2, tmp_list_element_26);
        }
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_called_value_143);
        Py_DECREF(tmp_kw_call_value_5_34);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_kw_call_value_6_34 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_34 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_34 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_27 = Py_None;
        tmp_kw_call_value_10_27 = Py_False;
        tmp_kw_call_value_11_27 = mod_consts[32];
        tmp_kw_call_value_12_27 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_27 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_27 = mod_consts[211];
        tmp_kw_call_value_15_13 = mod_consts[212];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 936;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_35, tmp_kw_call_value_1_35, tmp_kw_call_value_2_35, tmp_kw_call_value_3_35, tmp_kw_call_value_4_34, tmp_kw_call_value_5_34, tmp_kw_call_value_6_34, tmp_kw_call_value_7_34, tmp_kw_call_value_8_34, tmp_kw_call_value_9_27, tmp_kw_call_value_10_27, tmp_kw_call_value_11_27, tmp_kw_call_value_12_27, tmp_kw_call_value_13_27, tmp_kw_call_value_14_27, tmp_kw_call_value_15_13};

            tmp_assign_source_32 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_143, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_143);
        Py_DECREF(tmp_kw_call_value_5_34);
        Py_DECREF(tmp_kw_call_value_6_34);
        Py_DECREF(tmp_kw_call_value_7_34);
        Py_DECREF(tmp_kw_call_value_8_34);
        Py_DECREF(tmp_kw_call_value_12_27);
        Py_DECREF(tmp_kw_call_value_13_27);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_147;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_kw_call_value_0_36;
        PyObject *tmp_kw_call_value_1_36;
        PyObject *tmp_kw_call_value_2_36;
        PyObject *tmp_kw_call_value_3_36;
        PyObject *tmp_kw_call_value_4_35;
        PyObject *tmp_kw_call_value_5_35;
        PyObject *tmp_list_element_27;
        PyObject *tmp_called_value_148;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_kw_call_value_6_35;
        PyObject *tmp_kw_call_value_7_35;
        PyObject *tmp_kw_call_value_8_35;
        PyObject *tmp_kw_call_value_9_28;
        PyObject *tmp_kw_call_value_10_28;
        PyObject *tmp_kw_call_value_11_28;
        PyObject *tmp_kw_call_value_12_28;
        PyObject *tmp_kw_call_value_13_28;
        PyObject *tmp_kw_call_value_14_28;
        PyObject *tmp_kw_call_value_15_14;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 980;

            goto frame_exception_exit_1;
        }
        tmp_called_value_147 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[105]);
        if (tmp_called_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 980;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_36 = mod_consts[214];
        tmp_kw_call_value_1_36 = mod_consts[259];
        tmp_kw_call_value_2_36 = Py_None;
        tmp_kw_call_value_3_36 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_36 == NULL)) {
            tmp_kw_call_value_3_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);

            exception_lineno = 984;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_35 = Py_None;
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);

            exception_lineno = 987;

            goto frame_exception_exit_1;
        }
        tmp_called_value_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[108]);
        if (tmp_called_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);

            exception_lineno = 987;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 987;
        tmp_list_element_27 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_148, &PyTuple_GET_ITEM(mod_consts[260], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_148);
        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);

            exception_lineno = 987;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_35 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_149;
            PyObject *tmp_expression_value_134;
            PyList_SET_ITEM(tmp_kw_call_value_5_35, 0, tmp_list_element_27);
            tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_134 == NULL)) {
                tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 994;

                goto list_build_exception_23;
            }
            tmp_called_value_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[108]);
            if (tmp_called_value_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 994;

                goto list_build_exception_23;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 994;
            tmp_list_element_27 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_149, &PyTuple_GET_ITEM(mod_consts[261], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_149);
            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 994;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_35, 1, tmp_list_element_27);
        }
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_called_value_147);
        Py_DECREF(tmp_kw_call_value_5_35);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_kw_call_value_6_35 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_35 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_35 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_28 = Py_None;
        tmp_kw_call_value_10_28 = Py_False;
        tmp_kw_call_value_11_28 = mod_consts[32];
        tmp_kw_call_value_12_28 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_28 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_28 = mod_consts[218];
        tmp_kw_call_value_15_14 = mod_consts[219];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 980;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_36, tmp_kw_call_value_1_36, tmp_kw_call_value_2_36, tmp_kw_call_value_3_36, tmp_kw_call_value_4_35, tmp_kw_call_value_5_35, tmp_kw_call_value_6_35, tmp_kw_call_value_7_35, tmp_kw_call_value_8_35, tmp_kw_call_value_9_28, tmp_kw_call_value_10_28, tmp_kw_call_value_11_28, tmp_kw_call_value_12_28, tmp_kw_call_value_13_28, tmp_kw_call_value_14_28, tmp_kw_call_value_15_14};

            tmp_assign_source_33 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_147, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_147);
        Py_DECREF(tmp_kw_call_value_5_35);
        Py_DECREF(tmp_kw_call_value_6_35);
        Py_DECREF(tmp_kw_call_value_7_35);
        Py_DECREF(tmp_kw_call_value_8_35);
        Py_DECREF(tmp_kw_call_value_12_28);
        Py_DECREF(tmp_kw_call_value_13_28);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 980;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_150;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_kw_call_value_0_37;
        PyObject *tmp_kw_call_value_1_37;
        PyObject *tmp_kw_call_value_2_37;
        PyObject *tmp_kw_call_value_3_37;
        PyObject *tmp_kw_call_value_4_36;
        PyObject *tmp_kw_call_value_5_36;
        PyObject *tmp_list_element_28;
        PyObject *tmp_called_value_151;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_call_args_kwsplit_5;
        PyObject *tmp_kw_call_value_6_37;
        PyObject *tmp_kw_call_value_7_37;
        PyObject *tmp_list_element_29;
        PyObject *tmp_kw_call_value_8_37;
        PyObject *tmp_kw_call_value_9_30;
        PyObject *tmp_kw_call_value_10_30;
        PyObject *tmp_kw_call_value_11_30;
        PyObject *tmp_kw_call_value_12_30;
        PyObject *tmp_kw_call_value_13_30;
        PyObject *tmp_kw_call_value_14_30;
        PyObject *tmp_kw_call_value_15_15;
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;

            goto frame_exception_exit_1;
        }
        tmp_called_value_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[105]);
        if (tmp_called_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_37 = mod_consts[263];
        tmp_kw_call_value_1_37 = mod_consts[264];
        tmp_kw_call_value_2_37 = Py_None;
        tmp_kw_call_value_3_37 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_37 == NULL)) {
            tmp_kw_call_value_3_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 1021;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_36 = Py_None;
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        tmp_called_value_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[108]);
        if (tmp_called_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_5 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[265], "iiiiiiiiliiiiii");
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1024;
        tmp_list_element_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_151, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_5, 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_151);
        Py_DECREF(tmp_call_args_kwsplit_5);
        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_36 = MAKE_LIST_EMPTY(8);
        {
            PyObject *tmp_called_value_152;
            PyObject *tmp_expression_value_137;
            PyObject *tmp_called_value_153;
            PyObject *tmp_expression_value_138;
            PyObject *tmp_call_args_kwsplit_6;
            PyObject *tmp_called_value_154;
            PyObject *tmp_expression_value_139;
            PyObject *tmp_called_value_155;
            PyObject *tmp_expression_value_140;
            PyObject *tmp_kw_call_value_0_38;
            PyObject *tmp_kw_call_value_1_38;
            PyObject *tmp_kw_call_value_2_38;
            PyObject *tmp_kw_call_value_3_38;
            PyObject *tmp_kw_call_value_4_37;
            PyObject *tmp_kw_call_value_5_37;
            PyObject *tmp_kw_call_value_6_36;
            PyObject *tmp_kw_call_value_7_36;
            PyObject *tmp_kw_call_value_8_36;
            PyObject *tmp_kw_call_value_9_29;
            PyObject *tmp_kw_call_value_10_29;
            PyObject *tmp_kw_call_value_11_29;
            PyObject *tmp_kw_call_value_12_29;
            PyObject *tmp_kw_call_value_13_29;
            PyObject *tmp_kw_call_value_14_29;
            PyObject *tmp_called_value_156;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_157;
            PyObject *tmp_called_value_158;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_called_value_159;
            PyObject *tmp_expression_value_143;
            PyObject *tmp_call_args_kwsplit_7;
            PyObject *tmp_called_value_160;
            PyObject *tmp_expression_value_144;
            PyList_SET_ITEM(tmp_kw_call_value_5_36, 0, tmp_list_element_28);
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1031;

                goto list_build_exception_24;
            }
            tmp_called_value_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[108]);
            if (tmp_called_value_152 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1031;

                goto list_build_exception_24;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1031;
            tmp_list_element_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_152, &PyTuple_GET_ITEM(mod_consts[266], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_152);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1031;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_36, 1, tmp_list_element_28);
            tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_138 == NULL)) {
                tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1038;

                goto list_build_exception_24;
            }
            tmp_called_value_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[108]);
            if (tmp_called_value_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1038;

                goto list_build_exception_24;
            }
            tmp_call_args_kwsplit_6 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[267], "iiiiiiiiliiiiii");
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1038;
            tmp_list_element_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_153, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_6, 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_153);
            Py_DECREF(tmp_call_args_kwsplit_6);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1038;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_36, 2, tmp_list_element_28);
            tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_139 == NULL)) {
                tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_139 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1045;

                goto list_build_exception_24;
            }
            tmp_called_value_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[108]);
            if (tmp_called_value_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1045;

                goto list_build_exception_24;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1045;
            tmp_list_element_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_154, &PyTuple_GET_ITEM(mod_consts[268], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_154);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1045;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_36, 3, tmp_list_element_28);
            tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_140 == NULL)) {
                tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1052;

                goto list_build_exception_24;
            }
            tmp_called_value_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[108]);
            if (tmp_called_value_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1052;

                goto list_build_exception_24;
            }
            tmp_kw_call_value_0_38 = mod_consts[227];
            tmp_kw_call_value_1_38 = mod_consts[269];
            tmp_kw_call_value_2_38 = mod_consts[123];
            tmp_kw_call_value_3_38 = mod_consts[127];
            tmp_kw_call_value_4_37 = mod_consts[127];
            tmp_kw_call_value_5_37 = mod_consts[111];
            tmp_kw_call_value_6_36 = mod_consts[114];
            tmp_kw_call_value_7_36 = Py_False;
            tmp_kw_call_value_8_36 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_29 = Py_None;
            tmp_kw_call_value_10_29 = Py_None;
            tmp_kw_call_value_11_29 = Py_None;
            tmp_kw_call_value_12_29 = Py_False;
            tmp_kw_call_value_13_29 = Py_None;
            tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_141 == NULL)) {
                tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_155);
                Py_DECREF(tmp_kw_call_value_8_36);

                exception_lineno = 1058;

                goto list_build_exception_24;
            }
            tmp_called_value_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[115]);
            if (tmp_called_value_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_155);
                Py_DECREF(tmp_kw_call_value_8_36);

                exception_lineno = 1058;

                goto list_build_exception_24;
            }
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_155);
                Py_DECREF(tmp_kw_call_value_8_36);
                Py_DECREF(tmp_called_value_156);

                exception_lineno = 1058;

                goto list_build_exception_24;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1058;
            tmp_args_element_value_29 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[116]);
            if (tmp_args_element_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_155);
                Py_DECREF(tmp_kw_call_value_8_36);
                Py_DECREF(tmp_called_value_156);

                exception_lineno = 1058;

                goto list_build_exception_24;
            }
            tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_157 == NULL)) {
                tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_157 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_155);
                Py_DECREF(tmp_kw_call_value_8_36);
                Py_DECREF(tmp_called_value_156);
                Py_DECREF(tmp_args_element_value_29);

                exception_lineno = 1058;

                goto list_build_exception_24;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1058;
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_157, mod_consts[117]);

            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_155);
                Py_DECREF(tmp_kw_call_value_8_36);
                Py_DECREF(tmp_called_value_156);
                Py_DECREF(tmp_args_element_value_29);

                exception_lineno = 1058;

                goto list_build_exception_24;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1058;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
                tmp_kw_call_value_14_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_156, call_args);
            }

            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_kw_call_value_14_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_155);
                Py_DECREF(tmp_kw_call_value_8_36);

                exception_lineno = 1058;

                goto list_build_exception_24;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1052;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_38, tmp_kw_call_value_1_38, tmp_kw_call_value_2_38, tmp_kw_call_value_3_38, tmp_kw_call_value_4_37, tmp_kw_call_value_5_37, tmp_kw_call_value_6_36, tmp_kw_call_value_7_36, tmp_kw_call_value_8_36, tmp_kw_call_value_9_29, tmp_kw_call_value_10_29, tmp_kw_call_value_11_29, tmp_kw_call_value_12_29, tmp_kw_call_value_13_29, tmp_kw_call_value_14_29};

                tmp_list_element_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_155, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_kw_call_value_8_36);
            Py_DECREF(tmp_kw_call_value_14_29);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1052;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_36, 4, tmp_list_element_28);
            tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_142 == NULL)) {
                tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1059;

                goto list_build_exception_24;
            }
            tmp_called_value_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[108]);
            if (tmp_called_value_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1059;

                goto list_build_exception_24;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1059;
            tmp_list_element_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_158, &PyTuple_GET_ITEM(mod_consts[270], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_158);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1059;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_36, 5, tmp_list_element_28);
            tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_143 == NULL)) {
                tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_143 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1066;

                goto list_build_exception_24;
            }
            tmp_called_value_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[108]);
            if (tmp_called_value_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1066;

                goto list_build_exception_24;
            }
            tmp_call_args_kwsplit_7 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[271], "iiiiiiiiliiiiii");
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1066;
            tmp_list_element_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_159, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_7, 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_159);
            Py_DECREF(tmp_call_args_kwsplit_7);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1066;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_36, 6, tmp_list_element_28);
            tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_144 == NULL)) {
                tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1073;

                goto list_build_exception_24;
            }
            tmp_called_value_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[108]);
            if (tmp_called_value_160 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1073;

                goto list_build_exception_24;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1073;
            tmp_list_element_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_160, &PyTuple_GET_ITEM(mod_consts[272], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_160);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1073;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_36, 7, tmp_list_element_28);
        }
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_kw_call_value_5_36);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_kw_call_value_6_37 = MAKE_LIST_EMPTY(0);
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_kw_call_value_5_36);
            Py_DECREF(tmp_kw_call_value_6_37);

            exception_lineno = 1083;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_37 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_kw_call_value_7_37, 0, tmp_list_element_29);
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[262]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_7_37, 1, tmp_list_element_29);
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_kw_call_value_5_36);
        Py_DECREF(tmp_kw_call_value_6_37);
        Py_DECREF(tmp_kw_call_value_7_37);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_kw_call_value_8_37 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_30 = Py_None;
        tmp_kw_call_value_10_30 = Py_False;
        tmp_kw_call_value_11_30 = mod_consts[32];
        tmp_kw_call_value_12_30 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_30 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_30 = mod_consts[273];
        tmp_kw_call_value_15_15 = mod_consts[274];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1017;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_37, tmp_kw_call_value_1_37, tmp_kw_call_value_2_37, tmp_kw_call_value_3_37, tmp_kw_call_value_4_36, tmp_kw_call_value_5_36, tmp_kw_call_value_6_37, tmp_kw_call_value_7_37, tmp_kw_call_value_8_37, tmp_kw_call_value_9_30, tmp_kw_call_value_10_30, tmp_kw_call_value_11_30, tmp_kw_call_value_12_30, tmp_kw_call_value_13_30, tmp_kw_call_value_14_30, tmp_kw_call_value_15_15};

            tmp_assign_source_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_150, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_kw_call_value_5_36);
        Py_DECREF(tmp_kw_call_value_6_37);
        Py_DECREF(tmp_kw_call_value_7_37);
        Py_DECREF(tmp_kw_call_value_8_37);
        Py_DECREF(tmp_kw_call_value_12_30);
        Py_DECREF(tmp_kw_call_value_13_30);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_161;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_kw_call_value_0_39;
        PyObject *tmp_kw_call_value_1_39;
        PyObject *tmp_kw_call_value_2_39;
        PyObject *tmp_kw_call_value_3_39;
        PyObject *tmp_kw_call_value_4_38;
        PyObject *tmp_kw_call_value_5_38;
        PyObject *tmp_list_element_30;
        PyObject *tmp_called_value_162;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_kw_call_value_6_38;
        PyObject *tmp_kw_call_value_7_38;
        PyObject *tmp_kw_call_value_8_38;
        PyObject *tmp_kw_call_value_9_31;
        PyObject *tmp_kw_call_value_10_31;
        PyObject *tmp_kw_call_value_11_31;
        PyObject *tmp_kw_call_value_12_31;
        PyObject *tmp_kw_call_value_13_31;
        PyObject *tmp_kw_call_value_14_31;
        PyObject *tmp_kw_call_value_15_16;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1097;

            goto frame_exception_exit_1;
        }
        tmp_called_value_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[105]);
        if (tmp_called_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1097;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_39 = mod_consts[276];
        tmp_kw_call_value_1_39 = mod_consts[277];
        tmp_kw_call_value_2_39 = Py_None;
        tmp_kw_call_value_3_39 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_39 == NULL)) {
            tmp_kw_call_value_3_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);

            exception_lineno = 1101;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_38 = Py_None;
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);

            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        tmp_called_value_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[108]);
        if (tmp_called_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);

            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1104;
        tmp_list_element_30 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_162, &PyTuple_GET_ITEM(mod_consts[278], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_162);
        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);

            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_38 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_163;
            PyObject *tmp_expression_value_147;
            PyObject *tmp_called_value_164;
            PyObject *tmp_expression_value_148;
            PyList_SET_ITEM(tmp_kw_call_value_5_38, 0, tmp_list_element_30);
            tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_147 == NULL)) {
                tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_147 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1111;

                goto list_build_exception_26;
            }
            tmp_called_value_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[108]);
            if (tmp_called_value_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1111;

                goto list_build_exception_26;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1111;
            tmp_list_element_30 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_163, &PyTuple_GET_ITEM(mod_consts[279], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_163);
            if (tmp_list_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1111;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_38, 1, tmp_list_element_30);
            tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_148 == NULL)) {
                tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1118;

                goto list_build_exception_26;
            }
            tmp_called_value_164 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[108]);
            if (tmp_called_value_164 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1118;

                goto list_build_exception_26;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1118;
            tmp_list_element_30 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_164, &PyTuple_GET_ITEM(mod_consts[280], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_164);
            if (tmp_list_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1118;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_38, 2, tmp_list_element_30);
        }
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_called_value_161);
        Py_DECREF(tmp_kw_call_value_5_38);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_kw_call_value_6_38 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_38 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_38 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_31 = Py_None;
        tmp_kw_call_value_10_31 = Py_False;
        tmp_kw_call_value_11_31 = mod_consts[32];
        tmp_kw_call_value_12_31 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_31 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_31 = mod_consts[281];
        tmp_kw_call_value_15_16 = mod_consts[282];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1097;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_39, tmp_kw_call_value_1_39, tmp_kw_call_value_2_39, tmp_kw_call_value_3_39, tmp_kw_call_value_4_38, tmp_kw_call_value_5_38, tmp_kw_call_value_6_38, tmp_kw_call_value_7_38, tmp_kw_call_value_8_38, tmp_kw_call_value_9_31, tmp_kw_call_value_10_31, tmp_kw_call_value_11_31, tmp_kw_call_value_12_31, tmp_kw_call_value_13_31, tmp_kw_call_value_14_31, tmp_kw_call_value_15_16};

            tmp_assign_source_35 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_161, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_161);
        Py_DECREF(tmp_kw_call_value_5_38);
        Py_DECREF(tmp_kw_call_value_6_38);
        Py_DECREF(tmp_kw_call_value_7_38);
        Py_DECREF(tmp_kw_call_value_8_38);
        Py_DECREF(tmp_kw_call_value_12_31);
        Py_DECREF(tmp_kw_call_value_13_31);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1097;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_165;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_kw_call_value_0_40;
        PyObject *tmp_kw_call_value_1_40;
        PyObject *tmp_kw_call_value_2_40;
        PyObject *tmp_kw_call_value_3_40;
        PyObject *tmp_kw_call_value_4_39;
        PyObject *tmp_kw_call_value_5_39;
        PyObject *tmp_list_element_31;
        PyObject *tmp_called_value_166;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_kw_call_value_0_41;
        PyObject *tmp_kw_call_value_1_41;
        PyObject *tmp_kw_call_value_2_41;
        PyObject *tmp_kw_call_value_3_41;
        PyObject *tmp_kw_call_value_4_40;
        PyObject *tmp_kw_call_value_5_40;
        PyObject *tmp_kw_call_value_6_39;
        PyObject *tmp_kw_call_value_7_39;
        PyObject *tmp_kw_call_value_8_39;
        PyObject *tmp_called_value_167;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_called_value_168;
        PyObject *tmp_kw_call_value_9_32;
        PyObject *tmp_kw_call_value_10_32;
        PyObject *tmp_kw_call_value_11_32;
        PyObject *tmp_kw_call_value_12_32;
        PyObject *tmp_kw_call_value_13_32;
        PyObject *tmp_kw_call_value_14_32;
        PyObject *tmp_kw_call_value_6_40;
        PyObject *tmp_kw_call_value_7_40;
        PyObject *tmp_list_element_32;
        PyObject *tmp_kw_call_value_8_40;
        PyObject *tmp_list_element_33;
        PyObject *tmp_kw_call_value_9_33;
        PyObject *tmp_kw_call_value_10_33;
        PyObject *tmp_kw_call_value_11_33;
        PyObject *tmp_kw_call_value_12_33;
        PyObject *tmp_kw_call_value_13_33;
        PyObject *tmp_kw_call_value_14_33;
        PyObject *tmp_kw_call_value_15_17;
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto frame_exception_exit_1;
        }
        tmp_called_value_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[105]);
        if (tmp_called_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_40 = mod_consts[284];
        tmp_kw_call_value_1_40 = mod_consts[285];
        tmp_kw_call_value_2_40 = Py_None;
        tmp_kw_call_value_3_40 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_40 == NULL)) {
            tmp_kw_call_value_3_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);

            exception_lineno = 1145;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_39 = Py_None;
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);

            exception_lineno = 1148;

            goto frame_exception_exit_1;
        }
        tmp_called_value_166 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[108]);
        if (tmp_called_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);

            exception_lineno = 1148;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_41 = mod_consts[286];
        tmp_kw_call_value_1_41 = mod_consts[287];
        tmp_kw_call_value_2_41 = mod_consts[13];
        tmp_kw_call_value_3_41 = mod_consts[111];
        tmp_kw_call_value_4_40 = mod_consts[142];
        tmp_kw_call_value_5_40 = mod_consts[142];
        tmp_kw_call_value_6_39 = mod_consts[111];
        tmp_kw_call_value_7_39 = Py_False;
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 1151;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1151;
        tmp_expression_value_151 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_168, mod_consts[143]);

        if (tmp_expression_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 1151;

            goto frame_exception_exit_1;
        }
        tmp_called_value_167 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[146]);
        Py_DECREF(tmp_expression_value_151);
        if (tmp_called_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 1151;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1151;
        tmp_kw_call_value_8_39 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_167, mod_consts[147]);

        Py_DECREF(tmp_called_value_167);
        if (tmp_kw_call_value_8_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 1151;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_32 = Py_None;
        tmp_kw_call_value_10_32 = Py_None;
        tmp_kw_call_value_11_32 = Py_None;
        tmp_kw_call_value_12_32 = Py_False;
        tmp_kw_call_value_13_32 = Py_None;
        tmp_kw_call_value_14_32 = Py_None;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1148;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_41, tmp_kw_call_value_1_41, tmp_kw_call_value_2_41, tmp_kw_call_value_3_41, tmp_kw_call_value_4_40, tmp_kw_call_value_5_40, tmp_kw_call_value_6_39, tmp_kw_call_value_7_39, tmp_kw_call_value_8_39, tmp_kw_call_value_9_32, tmp_kw_call_value_10_32, tmp_kw_call_value_11_32, tmp_kw_call_value_12_32, tmp_kw_call_value_13_32, tmp_kw_call_value_14_32};

            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_166, kw_values, mod_consts[118]);
        }

        Py_DECREF(tmp_called_value_166);
        Py_DECREF(tmp_kw_call_value_8_39);
        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);

            exception_lineno = 1148;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_39 = MAKE_LIST_EMPTY(9);
        {
            PyObject *tmp_called_value_169;
            PyObject *tmp_expression_value_152;
            PyObject *tmp_call_args_kwsplit_8;
            PyObject *tmp_called_value_170;
            PyObject *tmp_expression_value_153;
            PyObject *tmp_called_value_171;
            PyObject *tmp_expression_value_154;
            PyObject *tmp_called_value_172;
            PyObject *tmp_expression_value_155;
            PyObject *tmp_called_value_173;
            PyObject *tmp_expression_value_156;
            PyObject *tmp_called_value_174;
            PyObject *tmp_expression_value_157;
            PyObject *tmp_called_value_175;
            PyObject *tmp_expression_value_158;
            PyObject *tmp_called_value_176;
            PyObject *tmp_expression_value_159;
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 0, tmp_list_element_31);
            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_152 == NULL)) {
                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_152 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1155;

                goto list_build_exception_27;
            }
            tmp_called_value_169 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[108]);
            if (tmp_called_value_169 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1155;

                goto list_build_exception_27;
            }
            tmp_call_args_kwsplit_8 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[288], "iiiiiiiiliiiiii");
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1155;
            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_169, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_8, 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_169);
            Py_DECREF(tmp_call_args_kwsplit_8);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1155;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 1, tmp_list_element_31);
            tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_153 == NULL)) {
                tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1162;

                goto list_build_exception_27;
            }
            tmp_called_value_170 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[108]);
            if (tmp_called_value_170 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1162;

                goto list_build_exception_27;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1162;
            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_170, &PyTuple_GET_ITEM(mod_consts[289], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_170);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1162;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 2, tmp_list_element_31);
            tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_154 == NULL)) {
                tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1169;

                goto list_build_exception_27;
            }
            tmp_called_value_171 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[108]);
            if (tmp_called_value_171 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1169;

                goto list_build_exception_27;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1169;
            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_171, &PyTuple_GET_ITEM(mod_consts[290], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_171);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1169;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 3, tmp_list_element_31);
            tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_155 == NULL)) {
                tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1176;

                goto list_build_exception_27;
            }
            tmp_called_value_172 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[108]);
            if (tmp_called_value_172 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1176;

                goto list_build_exception_27;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1176;
            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_172, &PyTuple_GET_ITEM(mod_consts[291], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_172);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1176;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 4, tmp_list_element_31);
            tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_156 == NULL)) {
                tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1183;

                goto list_build_exception_27;
            }
            tmp_called_value_173 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[108]);
            if (tmp_called_value_173 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1183;

                goto list_build_exception_27;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1183;
            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_173, &PyTuple_GET_ITEM(mod_consts[292], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_173);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1183;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 5, tmp_list_element_31);
            tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_157 == NULL)) {
                tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_157 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1190;

                goto list_build_exception_27;
            }
            tmp_called_value_174 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[108]);
            if (tmp_called_value_174 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1190;

                goto list_build_exception_27;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1190;
            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_174, &PyTuple_GET_ITEM(mod_consts[293], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_174);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1190;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 6, tmp_list_element_31);
            tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_158 == NULL)) {
                tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1197;

                goto list_build_exception_27;
            }
            tmp_called_value_175 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[108]);
            if (tmp_called_value_175 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1197;

                goto list_build_exception_27;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1197;
            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_175, &PyTuple_GET_ITEM(mod_consts[294], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_175);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1197;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 7, tmp_list_element_31);
            tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_159 == NULL)) {
                tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1204;

                goto list_build_exception_27;
            }
            tmp_called_value_176 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[108]);
            if (tmp_called_value_176 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1204;

                goto list_build_exception_27;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1204;
            tmp_list_element_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_176, &PyTuple_GET_ITEM(mod_consts[295], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_176);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1204;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_39, 8, tmp_list_element_31);
        }
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_called_value_165);
        Py_DECREF(tmp_kw_call_value_5_39);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_kw_call_value_6_40 = MAKE_LIST_EMPTY(0);
        tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_list_element_32 == NULL)) {
            tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[283]);
        }

        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_kw_call_value_5_39);
            Py_DECREF(tmp_kw_call_value_6_40);

            exception_lineno = 1214;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_40 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_value_7_40, 0, tmp_list_element_32);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_kw_call_value_5_39);
            Py_DECREF(tmp_kw_call_value_6_40);
            Py_DECREF(tmp_kw_call_value_7_40);

            exception_lineno = 1216;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_40 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_kw_call_value_8_40, 0, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1217;

            goto list_build_exception_28;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_8_40, 1, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1218;

            goto list_build_exception_28;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_8_40, 2, tmp_list_element_33);
        goto list_build_noexception_28;
        // Exception handling pass through code for list_build:
        list_build_exception_28:;
        Py_DECREF(tmp_called_value_165);
        Py_DECREF(tmp_kw_call_value_5_39);
        Py_DECREF(tmp_kw_call_value_6_40);
        Py_DECREF(tmp_kw_call_value_7_40);
        Py_DECREF(tmp_kw_call_value_8_40);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_28:;
        tmp_kw_call_value_9_33 = Py_None;
        tmp_kw_call_value_10_33 = Py_False;
        tmp_kw_call_value_11_33 = mod_consts[32];
        tmp_kw_call_value_12_33 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_33 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_33 = mod_consts[296];
        tmp_kw_call_value_15_17 = mod_consts[103];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1141;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_40, tmp_kw_call_value_1_40, tmp_kw_call_value_2_40, tmp_kw_call_value_3_40, tmp_kw_call_value_4_39, tmp_kw_call_value_5_39, tmp_kw_call_value_6_40, tmp_kw_call_value_7_40, tmp_kw_call_value_8_40, tmp_kw_call_value_9_33, tmp_kw_call_value_10_33, tmp_kw_call_value_11_33, tmp_kw_call_value_12_33, tmp_kw_call_value_13_33, tmp_kw_call_value_14_33, tmp_kw_call_value_15_17};

            tmp_assign_source_36 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_165, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_165);
        Py_DECREF(tmp_kw_call_value_5_39);
        Py_DECREF(tmp_kw_call_value_6_40);
        Py_DECREF(tmp_kw_call_value_7_40);
        Py_DECREF(tmp_kw_call_value_8_40);
        Py_DECREF(tmp_kw_call_value_12_33);
        Py_DECREF(tmp_kw_call_value_13_33);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_177;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_kw_call_value_0_42;
        PyObject *tmp_kw_call_value_1_42;
        PyObject *tmp_kw_call_value_2_42;
        PyObject *tmp_kw_call_value_3_42;
        PyObject *tmp_kw_call_value_4_41;
        PyObject *tmp_kw_call_value_5_41;
        PyObject *tmp_list_element_34;
        PyObject *tmp_called_value_178;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_kw_call_value_6_41;
        PyObject *tmp_kw_call_value_7_41;
        PyObject *tmp_kw_call_value_8_41;
        PyObject *tmp_kw_call_value_9_34;
        PyObject *tmp_kw_call_value_10_34;
        PyObject *tmp_kw_call_value_11_34;
        PyObject *tmp_kw_call_value_12_34;
        PyObject *tmp_kw_call_value_13_34;
        PyObject *tmp_kw_call_value_14_34;
        PyObject *tmp_kw_call_value_15_18;
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1231;

            goto frame_exception_exit_1;
        }
        tmp_called_value_177 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[105]);
        if (tmp_called_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1231;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_42 = mod_consts[298];
        tmp_kw_call_value_1_42 = mod_consts[299];
        tmp_kw_call_value_2_42 = Py_None;
        tmp_kw_call_value_3_42 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_42 == NULL)) {
            tmp_kw_call_value_3_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 1235;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_41 = Py_None;
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 1238;

            goto frame_exception_exit_1;
        }
        tmp_called_value_178 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[108]);
        if (tmp_called_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 1238;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1238;
        tmp_list_element_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_178, &PyTuple_GET_ITEM(mod_consts[300], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_178);
        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 1238;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_41 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_179;
            PyObject *tmp_expression_value_162;
            PyObject *tmp_called_value_180;
            PyObject *tmp_expression_value_163;
            PyList_SET_ITEM(tmp_kw_call_value_5_41, 0, tmp_list_element_34);
            tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_162 == NULL)) {
                tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1245;

                goto list_build_exception_29;
            }
            tmp_called_value_179 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[108]);
            if (tmp_called_value_179 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1245;

                goto list_build_exception_29;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1245;
            tmp_list_element_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_179, &PyTuple_GET_ITEM(mod_consts[301], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_179);
            if (tmp_list_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1245;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_41, 1, tmp_list_element_34);
            tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_163 == NULL)) {
                tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1252;

                goto list_build_exception_29;
            }
            tmp_called_value_180 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[108]);
            if (tmp_called_value_180 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1252;

                goto list_build_exception_29;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1252;
            tmp_list_element_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_180, &PyTuple_GET_ITEM(mod_consts[302], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_180);
            if (tmp_list_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1252;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_41, 2, tmp_list_element_34);
        }
        goto list_build_noexception_29;
        // Exception handling pass through code for list_build:
        list_build_exception_29:;
        Py_DECREF(tmp_called_value_177);
        Py_DECREF(tmp_kw_call_value_5_41);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_29:;
        tmp_kw_call_value_6_41 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_41 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_41 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_34 = Py_None;
        tmp_kw_call_value_10_34 = Py_False;
        tmp_kw_call_value_11_34 = mod_consts[32];
        tmp_kw_call_value_12_34 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_34 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_34 = mod_consts[303];
        tmp_kw_call_value_15_18 = mod_consts[304];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1231;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_42, tmp_kw_call_value_1_42, tmp_kw_call_value_2_42, tmp_kw_call_value_3_42, tmp_kw_call_value_4_41, tmp_kw_call_value_5_41, tmp_kw_call_value_6_41, tmp_kw_call_value_7_41, tmp_kw_call_value_8_41, tmp_kw_call_value_9_34, tmp_kw_call_value_10_34, tmp_kw_call_value_11_34, tmp_kw_call_value_12_34, tmp_kw_call_value_13_34, tmp_kw_call_value_14_34, tmp_kw_call_value_15_18};

            tmp_assign_source_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_177, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_177);
        Py_DECREF(tmp_kw_call_value_5_41);
        Py_DECREF(tmp_kw_call_value_6_41);
        Py_DECREF(tmp_kw_call_value_7_41);
        Py_DECREF(tmp_kw_call_value_8_41);
        Py_DECREF(tmp_kw_call_value_12_34);
        Py_DECREF(tmp_kw_call_value_13_34);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_181;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_kw_call_value_0_43;
        PyObject *tmp_kw_call_value_1_43;
        PyObject *tmp_kw_call_value_2_43;
        PyObject *tmp_kw_call_value_3_43;
        PyObject *tmp_kw_call_value_4_42;
        PyObject *tmp_kw_call_value_5_42;
        PyObject *tmp_list_element_35;
        PyObject *tmp_called_value_182;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_kw_call_value_6_43;
        PyObject *tmp_kw_call_value_7_43;
        PyObject *tmp_list_element_36;
        PyObject *tmp_kw_call_value_8_43;
        PyObject *tmp_kw_call_value_9_36;
        PyObject *tmp_kw_call_value_10_36;
        PyObject *tmp_kw_call_value_11_36;
        PyObject *tmp_kw_call_value_12_36;
        PyObject *tmp_kw_call_value_13_36;
        PyObject *tmp_kw_call_value_14_36;
        PyObject *tmp_kw_call_value_15_19;
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1275;

            goto frame_exception_exit_1;
        }
        tmp_called_value_181 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[105]);
        if (tmp_called_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1275;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_43 = mod_consts[306];
        tmp_kw_call_value_1_43 = mod_consts[307];
        tmp_kw_call_value_2_43 = Py_None;
        tmp_kw_call_value_3_43 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_43 == NULL)) {
            tmp_kw_call_value_3_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 1279;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_42 = Py_None;
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 1282;

            goto frame_exception_exit_1;
        }
        tmp_called_value_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[108]);
        if (tmp_called_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 1282;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1282;
        tmp_list_element_35 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_182, &PyTuple_GET_ITEM(mod_consts[308], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_182);
        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 1282;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_42 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_183;
            PyObject *tmp_expression_value_166;
            PyObject *tmp_call_args_kwsplit_9;
            PyObject *tmp_called_value_184;
            PyObject *tmp_expression_value_167;
            PyObject *tmp_kw_call_value_0_44;
            PyObject *tmp_kw_call_value_1_44;
            PyObject *tmp_kw_call_value_2_44;
            PyObject *tmp_kw_call_value_3_44;
            PyObject *tmp_kw_call_value_4_43;
            PyObject *tmp_kw_call_value_5_43;
            PyObject *tmp_kw_call_value_6_42;
            PyObject *tmp_kw_call_value_7_42;
            PyObject *tmp_kw_call_value_8_42;
            PyObject *tmp_kw_call_value_9_35;
            PyObject *tmp_kw_call_value_10_35;
            PyObject *tmp_kw_call_value_11_35;
            PyObject *tmp_kw_call_value_12_35;
            PyObject *tmp_kw_call_value_13_35;
            PyObject *tmp_kw_call_value_14_35;
            PyObject *tmp_called_value_185;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_called_value_186;
            PyList_SET_ITEM(tmp_kw_call_value_5_42, 0, tmp_list_element_35);
            tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_166 == NULL)) {
                tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_166 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1289;

                goto list_build_exception_30;
            }
            tmp_called_value_183 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[108]);
            if (tmp_called_value_183 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1289;

                goto list_build_exception_30;
            }
            tmp_call_args_kwsplit_9 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[309], "iiiiiiiiliiiiii");
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1289;
            tmp_list_element_35 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_183, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_9, 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_183);
            Py_DECREF(tmp_call_args_kwsplit_9);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1289;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_42, 1, tmp_list_element_35);
            tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_167 == NULL)) {
                tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_167 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1296;

                goto list_build_exception_30;
            }
            tmp_called_value_184 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[108]);
            if (tmp_called_value_184 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1296;

                goto list_build_exception_30;
            }
            tmp_kw_call_value_0_44 = mod_consts[286];
            tmp_kw_call_value_1_44 = mod_consts[310];
            tmp_kw_call_value_2_44 = mod_consts[112];
            tmp_kw_call_value_3_44 = mod_consts[114];
            tmp_kw_call_value_4_43 = mod_consts[114];
            tmp_kw_call_value_5_43 = mod_consts[112];
            tmp_kw_call_value_6_42 = mod_consts[114];
            tmp_kw_call_value_7_42 = Py_False;
            tmp_kw_call_value_8_42 = MAKE_LIST_EMPTY(0);
            tmp_kw_call_value_9_35 = Py_None;
            tmp_kw_call_value_10_35 = Py_None;
            tmp_kw_call_value_11_35 = Py_None;
            tmp_kw_call_value_12_35 = Py_False;
            tmp_kw_call_value_13_35 = Py_None;
            tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_168 == NULL)) {
                tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_168 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_184);
                Py_DECREF(tmp_kw_call_value_8_42);

                exception_lineno = 1302;

                goto list_build_exception_30;
            }
            tmp_called_value_185 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[115]);
            if (tmp_called_value_185 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_184);
                Py_DECREF(tmp_kw_call_value_8_42);

                exception_lineno = 1302;

                goto list_build_exception_30;
            }
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_184);
                Py_DECREF(tmp_kw_call_value_8_42);
                Py_DECREF(tmp_called_value_185);

                exception_lineno = 1302;

                goto list_build_exception_30;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1302;
            tmp_args_element_value_31 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[116]);
            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_184);
                Py_DECREF(tmp_kw_call_value_8_42);
                Py_DECREF(tmp_called_value_185);

                exception_lineno = 1302;

                goto list_build_exception_30;
            }
            tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_186 == NULL)) {
                tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_called_value_186 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_184);
                Py_DECREF(tmp_kw_call_value_8_42);
                Py_DECREF(tmp_called_value_185);
                Py_DECREF(tmp_args_element_value_31);

                exception_lineno = 1302;

                goto list_build_exception_30;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1302;
            tmp_args_element_value_32 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_186, mod_consts[117]);

            if (tmp_args_element_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_184);
                Py_DECREF(tmp_kw_call_value_8_42);
                Py_DECREF(tmp_called_value_185);
                Py_DECREF(tmp_args_element_value_31);

                exception_lineno = 1302;

                goto list_build_exception_30;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1302;
            {
                PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
                tmp_kw_call_value_14_35 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_185, call_args);
            }

            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_kw_call_value_14_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_184);
                Py_DECREF(tmp_kw_call_value_8_42);

                exception_lineno = 1302;

                goto list_build_exception_30;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1296;
            {
                PyObject *kw_values[15] = {tmp_kw_call_value_0_44, tmp_kw_call_value_1_44, tmp_kw_call_value_2_44, tmp_kw_call_value_3_44, tmp_kw_call_value_4_43, tmp_kw_call_value_5_43, tmp_kw_call_value_6_42, tmp_kw_call_value_7_42, tmp_kw_call_value_8_42, tmp_kw_call_value_9_35, tmp_kw_call_value_10_35, tmp_kw_call_value_11_35, tmp_kw_call_value_12_35, tmp_kw_call_value_13_35, tmp_kw_call_value_14_35};

                tmp_list_element_35 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_184, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_kw_call_value_8_42);
            Py_DECREF(tmp_kw_call_value_14_35);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1296;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_42, 2, tmp_list_element_35);
        }
        goto list_build_noexception_30;
        // Exception handling pass through code for list_build:
        list_build_exception_30:;
        Py_DECREF(tmp_called_value_181);
        Py_DECREF(tmp_kw_call_value_5_42);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_30:;
        tmp_kw_call_value_6_43 = MAKE_LIST_EMPTY(0);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[305]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[305]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_kw_call_value_5_42);
            Py_DECREF(tmp_kw_call_value_6_43);

            exception_lineno = 1306;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_43 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_value_7_43, 0, tmp_list_element_36);
        tmp_kw_call_value_8_43 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_36 = Py_None;
        tmp_kw_call_value_10_36 = Py_False;
        tmp_kw_call_value_11_36 = mod_consts[32];
        tmp_kw_call_value_12_36 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_36 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_36 = mod_consts[311];
        tmp_kw_call_value_15_19 = mod_consts[304];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1275;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_43, tmp_kw_call_value_1_43, tmp_kw_call_value_2_43, tmp_kw_call_value_3_43, tmp_kw_call_value_4_42, tmp_kw_call_value_5_42, tmp_kw_call_value_6_43, tmp_kw_call_value_7_43, tmp_kw_call_value_8_43, tmp_kw_call_value_9_36, tmp_kw_call_value_10_36, tmp_kw_call_value_11_36, tmp_kw_call_value_12_36, tmp_kw_call_value_13_36, tmp_kw_call_value_14_36, tmp_kw_call_value_15_19};

            tmp_assign_source_38 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_181, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_181);
        Py_DECREF(tmp_kw_call_value_5_42);
        Py_DECREF(tmp_kw_call_value_6_43);
        Py_DECREF(tmp_kw_call_value_7_43);
        Py_DECREF(tmp_kw_call_value_8_43);
        Py_DECREF(tmp_kw_call_value_12_36);
        Py_DECREF(tmp_kw_call_value_13_36);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_187;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_kw_call_value_0_45;
        PyObject *tmp_kw_call_value_1_45;
        PyObject *tmp_kw_call_value_2_45;
        PyObject *tmp_kw_call_value_3_45;
        PyObject *tmp_kw_call_value_4_44;
        PyObject *tmp_kw_call_value_5_44;
        PyObject *tmp_list_element_37;
        PyObject *tmp_called_value_188;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_kw_call_value_6_44;
        PyObject *tmp_kw_call_value_7_44;
        PyObject *tmp_kw_call_value_8_44;
        PyObject *tmp_kw_call_value_9_37;
        PyObject *tmp_kw_call_value_10_37;
        PyObject *tmp_kw_call_value_11_37;
        PyObject *tmp_kw_call_value_12_37;
        PyObject *tmp_kw_call_value_13_37;
        PyObject *tmp_kw_call_value_14_37;
        PyObject *tmp_kw_call_value_15_20;
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1320;

            goto frame_exception_exit_1;
        }
        tmp_called_value_187 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[105]);
        if (tmp_called_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1320;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_45 = mod_consts[313];
        tmp_kw_call_value_1_45 = mod_consts[314];
        tmp_kw_call_value_2_45 = Py_None;
        tmp_kw_call_value_3_45 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_3_45 == NULL)) {
            tmp_kw_call_value_3_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_kw_call_value_3_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);

            exception_lineno = 1324;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_44 = Py_None;
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);

            exception_lineno = 1327;

            goto frame_exception_exit_1;
        }
        tmp_called_value_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[108]);
        if (tmp_called_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);

            exception_lineno = 1327;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1327;
        tmp_list_element_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_188, &PyTuple_GET_ITEM(mod_consts[315], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_188);
        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);

            exception_lineno = 1327;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_44 = MAKE_LIST_EMPTY(8);
        {
            PyObject *tmp_called_value_189;
            PyObject *tmp_expression_value_171;
            PyObject *tmp_called_value_190;
            PyObject *tmp_expression_value_172;
            PyObject *tmp_called_value_191;
            PyObject *tmp_expression_value_173;
            PyObject *tmp_called_value_192;
            PyObject *tmp_expression_value_174;
            PyObject *tmp_called_value_193;
            PyObject *tmp_expression_value_175;
            PyObject *tmp_called_value_194;
            PyObject *tmp_expression_value_176;
            PyObject *tmp_call_args_kwsplit_10;
            PyObject *tmp_called_value_195;
            PyObject *tmp_expression_value_177;
            PyList_SET_ITEM(tmp_kw_call_value_5_44, 0, tmp_list_element_37);
            tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_171 == NULL)) {
                tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_171 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1334;

                goto list_build_exception_31;
            }
            tmp_called_value_189 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[108]);
            if (tmp_called_value_189 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1334;

                goto list_build_exception_31;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1334;
            tmp_list_element_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_189, &PyTuple_GET_ITEM(mod_consts[316], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_189);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1334;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_44, 1, tmp_list_element_37);
            tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_172 == NULL)) {
                tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_172 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1341;

                goto list_build_exception_31;
            }
            tmp_called_value_190 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[108]);
            if (tmp_called_value_190 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1341;

                goto list_build_exception_31;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1341;
            tmp_list_element_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_190, &PyTuple_GET_ITEM(mod_consts[317], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_190);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1341;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_44, 2, tmp_list_element_37);
            tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_173 == NULL)) {
                tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_173 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1348;

                goto list_build_exception_31;
            }
            tmp_called_value_191 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[108]);
            if (tmp_called_value_191 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1348;

                goto list_build_exception_31;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1348;
            tmp_list_element_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_191, &PyTuple_GET_ITEM(mod_consts[318], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_191);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1348;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_44, 3, tmp_list_element_37);
            tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_174 == NULL)) {
                tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_174 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1355;

                goto list_build_exception_31;
            }
            tmp_called_value_192 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[108]);
            if (tmp_called_value_192 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1355;

                goto list_build_exception_31;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1355;
            tmp_list_element_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_192, &PyTuple_GET_ITEM(mod_consts[319], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_192);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1355;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_44, 4, tmp_list_element_37);
            tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_175 == NULL)) {
                tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_175 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1362;

                goto list_build_exception_31;
            }
            tmp_called_value_193 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[108]);
            if (tmp_called_value_193 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1362;

                goto list_build_exception_31;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1362;
            tmp_list_element_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_193, &PyTuple_GET_ITEM(mod_consts[320], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_193);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1362;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_44, 5, tmp_list_element_37);
            tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_176 == NULL)) {
                tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_176 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1369;

                goto list_build_exception_31;
            }
            tmp_called_value_194 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[108]);
            if (tmp_called_value_194 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1369;

                goto list_build_exception_31;
            }
            tmp_call_args_kwsplit_10 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[321], "iiiiiiiiliiiiii");
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1369;
            tmp_list_element_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_194, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_10, 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_call_args_kwsplit_10);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1369;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_44, 6, tmp_list_element_37);
            tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_177 == NULL)) {
                tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_177 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1376;

                goto list_build_exception_31;
            }
            tmp_called_value_195 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[108]);
            if (tmp_called_value_195 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1376;

                goto list_build_exception_31;
            }
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1376;
            tmp_list_element_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_195, &PyTuple_GET_ITEM(mod_consts[322], 0), mod_consts[118]);
            Py_DECREF(tmp_called_value_195);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1376;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_44, 7, tmp_list_element_37);
        }
        goto list_build_noexception_31;
        // Exception handling pass through code for list_build:
        list_build_exception_31:;
        Py_DECREF(tmp_called_value_187);
        Py_DECREF(tmp_kw_call_value_5_44);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_31:;
        tmp_kw_call_value_6_44 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_7_44 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_8_44 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_9_37 = Py_None;
        tmp_kw_call_value_10_37 = Py_False;
        tmp_kw_call_value_11_37 = mod_consts[32];
        tmp_kw_call_value_12_37 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_13_37 = MAKE_LIST_EMPTY(0);
        tmp_kw_call_value_14_37 = mod_consts[323];
        tmp_kw_call_value_15_20 = mod_consts[324];
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1320;
        {
            PyObject *kw_values[16] = {tmp_kw_call_value_0_45, tmp_kw_call_value_1_45, tmp_kw_call_value_2_45, tmp_kw_call_value_3_45, tmp_kw_call_value_4_44, tmp_kw_call_value_5_44, tmp_kw_call_value_6_44, tmp_kw_call_value_7_44, tmp_kw_call_value_8_44, tmp_kw_call_value_9_37, tmp_kw_call_value_10_37, tmp_kw_call_value_11_37, tmp_kw_call_value_12_37, tmp_kw_call_value_13_37, tmp_kw_call_value_14_37, tmp_kw_call_value_15_20};

            tmp_assign_source_39 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_187, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_187);
        Py_DECREF(tmp_kw_call_value_5_44);
        Py_DECREF(tmp_kw_call_value_6_44);
        Py_DECREF(tmp_kw_call_value_7_44);
        Py_DECREF(tmp_kw_call_value_8_44);
        Py_DECREF(tmp_kw_call_value_12_37);
        Py_DECREF(tmp_kw_call_value_13_37);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1320;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_subscript_value_1;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1399;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1399;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[326]);
        if (tmp_expression_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1399;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[327];
        tmp_assattr_target_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_178, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_178);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1399;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[328], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1399;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_subscript_value_2;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1400;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1400;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_180 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[326]);
        if (tmp_expression_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1400;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[329];
        tmp_assattr_target_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_180, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_180);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1400;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[328], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1400;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_subscript_value_3;
        tmp_assattr_value_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assattr_value_5 == NULL)) {
            tmp_assattr_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1401;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1401;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts[326]);
        if (tmp_expression_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1401;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[330];
        tmp_assattr_target_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_182, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_182);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1401;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[331], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1401;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_assattr_value_6 == NULL)) {
            tmp_assattr_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1402;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1402;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[332], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1402;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1403;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1403;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[332], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1403;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1404;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1404;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[332], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1404;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_subscript_value_4;
        tmp_assattr_value_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_assattr_value_9 == NULL)) {
            tmp_assattr_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1405;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1405;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_184 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts[326]);
        if (tmp_expression_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1405;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[333];
        tmp_assattr_target_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_184, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_184);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1405;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[331], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1405;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_value_10 == NULL)) {
            tmp_assattr_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1406;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1406;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[332], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1406;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_subscript_value_5;
        tmp_assattr_value_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_assattr_value_11 == NULL)) {
            tmp_assattr_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1407;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1407;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts[326]);
        if (tmp_expression_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1407;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[334];
        tmp_assattr_target_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_186, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_186);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1407;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[328], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1407;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_subscript_value_6;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1408;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1408;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts[326]);
        if (tmp_expression_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1408;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[335];
        tmp_assattr_target_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_188, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_188);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1408;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[328], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1408;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_subscript_value_7;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1409;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1409;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_190 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts[326]);
        if (tmp_expression_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1409;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[336];
        tmp_assattr_target_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_190, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_190);
        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1409;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[331], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1409;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_value_14 == NULL)) {
            tmp_assattr_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1410;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1410;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[332], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1410;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_value_15 == NULL)) {
            tmp_assattr_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1411;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1411;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[332], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1411;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_assattr_value_16 == NULL)) {
            tmp_assattr_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1412;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1412;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[332], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1412;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_value_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_assattr_value_17 == NULL)) {
            tmp_assattr_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_assattr_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1413;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1413;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[332], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1413;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_subscript_value_8;
        tmp_assattr_value_18 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_assattr_value_18 == NULL)) {
            tmp_assattr_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1414;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1414;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_192 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts[326]);
        if (tmp_expression_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1414;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[337];
        tmp_assattr_target_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_192, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_192);
        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1414;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[331], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1414;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_subscript_value_9;
        tmp_assattr_value_19 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_assattr_value_19 == NULL)) {
            tmp_assattr_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1415;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1415;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_195, mod_consts[326]);
        if (tmp_expression_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1415;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = mod_consts[338];
        tmp_assattr_target_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_194, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_194);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1415;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[331], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1415;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_value_20 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_assattr_value_20 == NULL)) {
            tmp_assattr_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[244]);
        }

        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1416;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[239]);
        }

        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1416;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[332], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1416;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_subscript_value_10;
        tmp_assattr_value_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_assattr_value_21 == NULL)) {
            tmp_assattr_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[239]);
        }

        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1417;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[244]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1417;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_196 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_197, mod_consts[326]);
        if (tmp_expression_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1417;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[339];
        tmp_assattr_target_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_196, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_196);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1417;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[331], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1417;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_subscript_value_11;
        tmp_assattr_value_22 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_assattr_value_22 == NULL)) {
            tmp_assattr_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_assattr_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1418;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[253]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[253]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1418;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts[326]);
        if (tmp_expression_value_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1418;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[340];
        tmp_assattr_target_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_198, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_198);
        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1418;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[331], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1418;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_subscript_value_12;
        tmp_assattr_value_23 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_assattr_value_23 == NULL)) {
            tmp_assattr_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[244]);
        }

        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[253]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[253]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_200 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_201, mod_consts[326]);
        if (tmp_expression_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = mod_consts[341];
        tmp_assattr_target_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_200, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_200);
        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[331], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1420;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1420;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[332], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1420;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        tmp_assattr_value_25 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_assattr_value_25 == NULL)) {
            tmp_assattr_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_assattr_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1421;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[262]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1421;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[332], tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1421;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_subscript_value_13;
        tmp_assattr_value_26 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_assattr_value_26 == NULL)) {
            tmp_assattr_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1422;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1422;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_202 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_203, mod_consts[326]);
        if (tmp_expression_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1422;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[337];
        tmp_assattr_target_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_202, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_202);
        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1422;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[331], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_target_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1422;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_subscript_value_14;
        tmp_assattr_value_27 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_assattr_value_27 == NULL)) {
            tmp_assattr_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[262]);
        }

        if (tmp_assattr_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1423;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1423;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_204 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_205, mod_consts[326]);
        if (tmp_expression_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1423;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[338];
        tmp_assattr_target_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_204, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_204);
        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1423;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[331], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_target_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1423;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_assattr_target_28;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_15;
        tmp_assattr_value_28 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_assattr_value_28 == NULL)) {
            tmp_assattr_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_assattr_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1424;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1424;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_206 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_207, mod_consts[326]);
        if (tmp_expression_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1424;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[342];
        tmp_assattr_target_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_206, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_206);
        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1424;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[331], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_target_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1424;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_assattr_target_29;
        tmp_assattr_value_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_assattr_value_29 == NULL)) {
            tmp_assattr_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1425;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[283]);
        }

        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1425;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[332], tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1425;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_assattr_target_30;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_subscript_value_16;
        tmp_assattr_value_30 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_assattr_value_30 == NULL)) {
            tmp_assattr_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_assattr_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1426;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1426;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_208 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_209, mod_consts[326]);
        if (tmp_expression_value_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1426;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[343];
        tmp_assattr_target_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_208, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_208);
        if (tmp_assattr_target_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1426;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[328], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_target_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1426;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_assattr_target_31;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_subscript_value_17;
        tmp_assattr_value_31 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_assattr_value_31 == NULL)) {
            tmp_assattr_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_assattr_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_210 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_211, mod_consts[326]);
        if (tmp_expression_value_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = mod_consts[340];
        tmp_assattr_target_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_210, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_210);
        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[331], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_target_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1427;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_assattr_target_32;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_subscript_value_18;
        tmp_assattr_value_32 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_assattr_value_32 == NULL)) {
            tmp_assattr_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[283]);
        }

        if (tmp_assattr_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1428;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1428;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_212 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_213, mod_consts[326]);
        if (tmp_expression_value_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1428;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = mod_consts[344];
        tmp_assattr_target_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_212, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_212);
        if (tmp_assattr_target_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1428;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[331], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_target_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1428;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_assattr_target_33;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_subscript_value_19;
        tmp_assattr_value_33 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_assattr_value_33 == NULL)) {
            tmp_assattr_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[283]);
        }

        if (tmp_assattr_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1429;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1429;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_215, mod_consts[326]);
        if (tmp_expression_value_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1429;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = mod_consts[345];
        tmp_assattr_target_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_214, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_214);
        if (tmp_assattr_target_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1429;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[331], tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_target_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1429;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_assattr_target_34;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_subscript_value_20;
        tmp_assattr_value_34 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_value_34 == NULL)) {
            tmp_assattr_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_assattr_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_216 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_217, mod_consts[326]);
        if (tmp_expression_value_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = mod_consts[346];
        tmp_assattr_target_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_216, tmp_subscript_value_20);
        Py_DECREF(tmp_expression_value_216);
        if (tmp_assattr_target_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[328], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_target_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_assattr_target_35;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_subscript_value_21;
        tmp_assattr_value_35 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_assattr_value_35 == NULL)) {
            tmp_assattr_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_assattr_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1431;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1431;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_219, mod_consts[326]);
        if (tmp_expression_value_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1431;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = mod_consts[347];
        tmp_assattr_target_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_218, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_218);
        if (tmp_assattr_target_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1431;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[328], tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_target_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1431;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_assattr_target_36;
        tmp_assattr_value_36 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_assattr_value_36 == NULL)) {
            tmp_assattr_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_assattr_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1432;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_36 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_assattr_target_36 == NULL)) {
            tmp_assattr_target_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_assattr_target_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1432;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[332], tmp_assattr_value_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1432;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_assattr_target_37;
        tmp_assattr_value_37 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_assattr_value_37 == NULL)) {
            tmp_assattr_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_assattr_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1433;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_37 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_37 == NULL)) {
            tmp_assattr_target_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_assattr_target_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1433;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[332], tmp_assattr_value_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1433;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_assattr_target_38;
        tmp_assattr_value_38 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_assattr_value_38 == NULL)) {
            tmp_assattr_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_assattr_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1434;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_38 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_assattr_target_38 == NULL)) {
            tmp_assattr_target_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_assattr_target_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1434;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[332], tmp_assattr_value_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1434;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_assattr_target_39;
        tmp_assattr_value_39 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_assattr_value_39 == NULL)) {
            tmp_assattr_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_assattr_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1435;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_39 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[305]);

        if (unlikely(tmp_assattr_target_39 == NULL)) {
            tmp_assattr_target_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[305]);
        }

        if (tmp_assattr_target_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1435;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[332], tmp_assattr_value_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1435;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_assattr_target_40;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_subscript_value_22;
        tmp_assattr_value_40 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[305]);

        if (unlikely(tmp_assattr_value_40 == NULL)) {
            tmp_assattr_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[305]);
        }

        if (tmp_assattr_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1436;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1436;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_220 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_221, mod_consts[326]);
        if (tmp_expression_value_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1436;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = mod_consts[348];
        tmp_assattr_target_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_220, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_220);
        if (tmp_assattr_target_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1436;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[331], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_target_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1436;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_assattr_target_41;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_subscript_value_23;
        tmp_assattr_value_41 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_assattr_value_41 == NULL)) {
            tmp_assattr_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_assattr_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1437;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_expression_value_223 == NULL)) {
            tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_expression_value_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1437;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_222 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_223, mod_consts[326]);
        if (tmp_expression_value_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1437;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[349];
        tmp_assattr_target_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_222, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_222);
        if (tmp_assattr_target_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1437;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[331], tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_target_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1437;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_assattr_target_42;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_subscript_value_24;
        tmp_assattr_value_42 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_value_42 == NULL)) {
            tmp_assattr_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_assattr_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1438;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1438;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_224 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_225, mod_consts[326]);
        if (tmp_expression_value_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1438;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = mod_consts[350];
        tmp_assattr_target_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_224, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_224);
        if (tmp_assattr_target_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1438;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[331], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_target_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1438;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_assattr_target_43;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_subscript_value_25;
        tmp_assattr_value_43 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assattr_value_43 == NULL)) {
            tmp_assattr_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_assattr_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1439;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1439;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_226 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_227, mod_consts[326]);
        if (tmp_expression_value_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1439;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = mod_consts[351];
        tmp_assattr_target_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_226, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_226);
        if (tmp_assattr_target_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1439;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[331], tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_target_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1439;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_assattr_target_44;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_subscript_value_26;
        tmp_assattr_value_44 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[253]);

        if (unlikely(tmp_assattr_value_44 == NULL)) {
            tmp_assattr_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[253]);
        }

        if (tmp_assattr_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1440;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1440;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_228 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_229, mod_consts[326]);
        if (tmp_expression_value_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1440;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = mod_consts[352];
        tmp_assattr_target_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_228, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_228);
        if (tmp_assattr_target_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1440;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[331], tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_target_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1440;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_assattr_target_45;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_subscript_value_27;
        tmp_assattr_value_45 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_assattr_value_45 == NULL)) {
            tmp_assattr_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_assattr_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1441;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_expression_value_231 == NULL)) {
            tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1441;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_230 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_231, mod_consts[326]);
        if (tmp_expression_value_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1441;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_27 = mod_consts[353];
        tmp_assattr_target_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_230, tmp_subscript_value_27);
        Py_DECREF(tmp_expression_value_230);
        if (tmp_assattr_target_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1441;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[331], tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_target_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1441;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_assattr_target_46;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_subscript_value_28;
        tmp_assattr_value_46 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_assattr_value_46 == NULL)) {
            tmp_assattr_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_assattr_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1442;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_expression_value_233 == NULL)) {
            tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_expression_value_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1442;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_232 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_233, mod_consts[326]);
        if (tmp_expression_value_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1442;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_28 = mod_consts[354];
        tmp_assattr_target_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_232, tmp_subscript_value_28);
        Py_DECREF(tmp_expression_value_232);
        if (tmp_assattr_target_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1442;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[331], tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_target_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1442;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1443;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_234 == NULL)) {
            tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1443;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_234, mod_consts[355]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1443;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[106];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1443;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1444;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_235 == NULL)) {
            tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1444;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_235, mod_consts[355]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1444;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[137];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1444;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_ass_subvalue_3 == NULL)) {
            tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1445;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_236 == NULL)) {
            tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1445;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_236, mod_consts[355]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1445;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[170];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1445;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_ass_subvalue_4 == NULL)) {
            tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1446;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_237 == NULL)) {
            tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1446;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_237, mod_consts[355]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1446;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[188];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1446;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_ass_subvalue_5 == NULL)) {
            tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_ass_subvalue_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1447;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_238 == NULL)) {
            tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1447;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_238, mod_consts[355]);
        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1447;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[221];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscribed_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1447;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_ass_subvalue_6 == NULL)) {
            tmp_ass_subvalue_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[244]);
        }

        if (tmp_ass_subvalue_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1448;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_239 == NULL)) {
            tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1448;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_239, mod_consts[355]);
        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1448;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[240];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscribed_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1448;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[253]);

        if (unlikely(tmp_ass_subvalue_7 == NULL)) {
            tmp_ass_subvalue_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[253]);
        }

        if (tmp_ass_subvalue_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1449;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_240 == NULL)) {
            tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1449;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_240, mod_consts[355]);
        if (tmp_ass_subscribed_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1449;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[245];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subscribed_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1449;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_ass_subvalue_8 == NULL)) {
            tmp_ass_subvalue_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_ass_subvalue_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1450;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_241 == NULL)) {
            tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1450;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_241, mod_consts[355]);
        if (tmp_ass_subscribed_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1450;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[263];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subscribed_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1450;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_ass_subvalue_9 == NULL)) {
            tmp_ass_subvalue_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_ass_subvalue_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1451;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_242 == NULL)) {
            tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1451;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_242, mod_consts[355]);
        if (tmp_ass_subscribed_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1451;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[284];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subscribed_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1451;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_ass_subvalue_10 == NULL)) {
            tmp_ass_subvalue_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_ass_subvalue_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1452;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_243 == NULL)) {
            tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1452;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_243, mod_consts[355]);
        if (tmp_ass_subscribed_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1452;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = mod_consts[306];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        Py_DECREF(tmp_ass_subscribed_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1452;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_ass_subscript_11;
        tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_ass_subvalue_11 == NULL)) {
            tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_ass_subvalue_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1453;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_244 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_244 == NULL)) {
            tmp_expression_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1453;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_244, mod_consts[355]);
        if (tmp_ass_subscribed_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1453;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_11 = mod_consts[313];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        Py_DECREF(tmp_ass_subscribed_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1453;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_196;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_245 == NULL)) {
            tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1455;

            goto frame_exception_exit_1;
        }
        tmp_called_value_196 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_245, mod_consts[356]);
        if (tmp_called_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1455;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = mod_consts[106];
        tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_246 == NULL)) {
            tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);

            exception_lineno = 1455;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_246, mod_consts[357]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);

            exception_lineno = 1455;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_34, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[35];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 1456;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_35, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[358];
        tmp_dict_value_1 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_35, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1455;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_196, call_args);
        }

        Py_DECREF(tmp_called_value_196);
        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1455;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_40);
    }
    {
        PyObject *tmp_called_value_197;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_36;
        tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_247 == NULL)) {
            tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1460;

            goto frame_exception_exit_1;
        }
        tmp_called_value_197 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_247, mod_consts[360]);
        if (tmp_called_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1460;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_args_element_value_36 == NULL)) {
            tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);

            exception_lineno = 1460;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1460;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_197, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_197);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1460;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_198;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_248 == NULL)) {
            tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1462;

            goto frame_exception_exit_1;
        }
        tmp_called_value_198 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_248, mod_consts[356]);
        if (tmp_called_value_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1462;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[137];
        tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_249 == NULL)) {
            tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_198);

            exception_lineno = 1462;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_249, mod_consts[357]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_198);

            exception_lineno = 1462;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_38, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[35];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_198);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 1463;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_39, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[358];
        tmp_dict_value_2 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_39, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1462;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_198, call_args);
        }

        Py_DECREF(tmp_called_value_198);
        Py_DECREF(tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1462;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_41);
    }
    {
        PyObject *tmp_called_value_199;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_40;
        tmp_expression_value_250 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_250 == NULL)) {
            tmp_expression_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_called_value_199 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_250, mod_consts[360]);
        if (tmp_called_value_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);

            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1467;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_199, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_199);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_200;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_value_201;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_251 == NULL)) {
            tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1469;

            goto frame_exception_exit_1;
        }
        tmp_called_value_200 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_251, mod_consts[356]);
        if (tmp_called_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1469;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = mod_consts[170];
        tmp_expression_value_252 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_252 == NULL)) {
            tmp_expression_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 1469;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_252, mod_consts[357]);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 1469;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_42, 0, tmp_tuple_element_3);
        tmp_dict_key_3 = mod_consts[162];
        tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_253 == NULL)) {
            tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 1471;

            goto frame_exception_exit_1;
        }
        tmp_called_value_201 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_253, mod_consts[356]);
        if (tmp_called_value_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 1471;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = mod_consts[162];
        tmp_expression_value_254 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_254 == NULL)) {
            tmp_expression_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_201);

            exception_lineno = 1471;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_254, mod_consts[357]);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_201);

            exception_lineno = 1471;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_45, 0, tmp_tuple_element_4);
        tmp_dict_key_4 = mod_consts[35];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_201);
            Py_DECREF(tmp_args_element_value_45);

            exception_lineno = 1472;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_46, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[358];
        tmp_dict_value_4 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_46, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1471;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_201, call_args);
        }

        Py_DECREF(tmp_called_value_201);
        Py_DECREF(tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 1471;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_43, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[35];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1477;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_value_43, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[358];
        tmp_dict_value_3 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_43, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_200);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1469;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_200, call_args);
        }

        Py_DECREF(tmp_called_value_200);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1469;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_42);
    }
    {
        PyObject *tmp_called_value_202;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_47;
        tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_255 == NULL)) {
            tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        tmp_called_value_202 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_255, mod_consts[360]);
        if (tmp_called_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_47 == NULL)) {
            tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        if (tmp_args_element_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);

            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1481;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_202, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_202);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_203;
        PyObject *tmp_expression_value_256;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_257;
        tmp_expression_value_256 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_256 == NULL)) {
            tmp_expression_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_256 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_called_value_203 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_256, mod_consts[360]);
        if (tmp_called_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_expression_value_257 == NULL)) {
            tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        if (tmp_expression_value_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);

            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_257, mod_consts[162]);
        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);

            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1482;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_203, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_203);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_204;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_called_value_205;
        PyObject *tmp_expression_value_260;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_expression_value_258 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_258 == NULL)) {
            tmp_expression_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        tmp_called_value_204 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_258, mod_consts[356]);
        if (tmp_called_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = mod_consts[188];
        tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_259 == NULL)) {
            tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);

            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_259, mod_consts[357]);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);

            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_50, 0, tmp_tuple_element_5);
        tmp_dict_key_5 = mod_consts[180];
        tmp_expression_value_260 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_260 == NULL)) {
            tmp_expression_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_260 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);
            Py_DECREF(tmp_args_element_value_50);

            exception_lineno = 1486;

            goto frame_exception_exit_1;
        }
        tmp_called_value_205 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_260, mod_consts[356]);
        if (tmp_called_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);
            Py_DECREF(tmp_args_element_value_50);

            exception_lineno = 1486;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[180];
        tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_261 == NULL)) {
            tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_called_value_205);

            exception_lineno = 1486;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_261, mod_consts[357]);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_called_value_205);

            exception_lineno = 1486;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_53, 0, tmp_tuple_element_6);
        tmp_dict_key_6 = mod_consts[35];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_53);

            exception_lineno = 1487;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_54, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[358];
        tmp_dict_value_6 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_54, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1486;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_205, call_args);
        }

        Py_DECREF(tmp_called_value_205);
        Py_DECREF(tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);
            Py_DECREF(tmp_args_element_value_50);

            exception_lineno = 1486;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_51, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[35];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1492;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_value_51, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[358];
        tmp_dict_value_5 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_51, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_204);
        Py_DECREF(tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_51);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1484;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_204, call_args);
        }

        Py_DECREF(tmp_called_value_204);
        Py_DECREF(tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_43);
    }
    {
        PyObject *tmp_called_value_206;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_55;
        tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_262 == NULL)) {
            tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_262 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1496;

            goto frame_exception_exit_1;
        }
        tmp_called_value_206 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_262, mod_consts[360]);
        if (tmp_called_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1496;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_args_element_value_55 == NULL)) {
            tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        if (tmp_args_element_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 1496;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1496;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_206, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_206);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1496;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_207;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_264;
        tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_263 == NULL)) {
            tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_263 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;

            goto frame_exception_exit_1;
        }
        tmp_called_value_207 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_263, mod_consts[360]);
        if (tmp_called_value_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_expression_value_264 == NULL)) {
            tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        if (tmp_expression_value_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_207);

            exception_lineno = 1497;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_264, mod_consts[180]);
        if (tmp_args_element_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_207);

            exception_lineno = 1497;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1497;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_207, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_207);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_208;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_called_value_209;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_268;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_expression_value_265 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_265 == NULL)) {
            tmp_expression_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1499;

            goto frame_exception_exit_1;
        }
        tmp_called_value_208 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_265, mod_consts[356]);
        if (tmp_called_value_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1499;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = mod_consts[221];
        tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_266 == NULL)) {
            tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);

            exception_lineno = 1499;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_266, mod_consts[357]);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);

            exception_lineno = 1499;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_58, 0, tmp_tuple_element_7);
        tmp_dict_key_7 = mod_consts[206];
        tmp_expression_value_267 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_267 == NULL)) {
            tmp_expression_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_267 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 1501;

            goto frame_exception_exit_1;
        }
        tmp_called_value_209 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_267, mod_consts[356]);
        if (tmp_called_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 1501;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = mod_consts[206];
        tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_268 == NULL)) {
            tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_268 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_called_value_209);

            exception_lineno = 1501;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_268, mod_consts[357]);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_called_value_209);

            exception_lineno = 1501;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_61, 0, tmp_tuple_element_8);
        tmp_dict_key_8 = mod_consts[35];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 1502;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_62, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[358];
        tmp_dict_value_8 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_62, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1501;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_dict_value_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_209, call_args);
        }

        Py_DECREF(tmp_called_value_209);
        Py_DECREF(tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 1501;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_called_value_210;
            PyObject *tmp_expression_value_269;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_270;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_res = PyDict_SetItem(tmp_args_element_value_59, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[214];
            tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_269 == NULL)) {
                tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_expression_value_269 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1508;

                goto dict_build_exception_3;
            }
            tmp_called_value_210 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_269, mod_consts[356]);
            if (tmp_called_value_210 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1508;

                goto dict_build_exception_3;
            }
            tmp_args_element_value_63 = mod_consts[214];
            tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_270 == NULL)) {
                tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_270 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_210);

                exception_lineno = 1508;

                goto dict_build_exception_3;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_270, mod_consts[357]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_210);

                exception_lineno = 1508;

                goto dict_build_exception_3;
            }
            tmp_args_element_value_64 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_element_value_64, 0, tmp_tuple_element_9);
            tmp_dict_key_9 = mod_consts[35];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[220]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_210);
                Py_DECREF(tmp_args_element_value_64);

                exception_lineno = 1509;

                goto dict_build_exception_3;
            }
            tmp_args_element_value_65 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_args_element_value_65, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[358];
            tmp_dict_value_9 = mod_consts[359];
            tmp_res = PyDict_SetItem(tmp_args_element_value_65, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1508;
            {
                PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65};
                tmp_dict_value_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_210, call_args);
            }

            Py_DECREF(tmp_called_value_210);
            Py_DECREF(tmp_args_element_value_64);
            Py_DECREF(tmp_args_element_value_65);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1508;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_59, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[35];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1514;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_59, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[358];
            tmp_dict_value_7 = mod_consts[359];
            tmp_res = PyDict_SetItem(tmp_args_element_value_59, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_value_208);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_59);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1499;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_208, call_args);
        }

        Py_DECREF(tmp_called_value_208);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1499;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_44);
    }
    {
        PyObject *tmp_called_value_211;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_66;
        tmp_expression_value_271 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_271 == NULL)) {
            tmp_expression_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1518;

            goto frame_exception_exit_1;
        }
        tmp_called_value_211 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_271, mod_consts[360]);
        if (tmp_called_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1518;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_args_element_value_66 == NULL)) {
            tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_args_element_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);

            exception_lineno = 1518;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1518;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_211, tmp_args_element_value_66);
        Py_DECREF(tmp_called_value_211);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1518;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_212;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_273;
        tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_272 == NULL)) {
            tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1519;

            goto frame_exception_exit_1;
        }
        tmp_called_value_212 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_272, mod_consts[360]);
        if (tmp_called_value_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1519;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_expression_value_273 == NULL)) {
            tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_expression_value_273 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 1519;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_273, mod_consts[206]);
        if (tmp_args_element_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 1519;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1519;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_212, tmp_args_element_value_67);
        Py_DECREF(tmp_called_value_212);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1519;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_213;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_expression_value_275;
        tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_274 == NULL)) {
            tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;

            goto frame_exception_exit_1;
        }
        tmp_called_value_213 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_274, mod_consts[360]);
        if (tmp_called_value_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_expression_value_275 == NULL)) {
            tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_expression_value_275 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_213);

            exception_lineno = 1520;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_275, mod_consts[214]);
        if (tmp_args_element_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_213);

            exception_lineno = 1520;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1520;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_213, tmp_args_element_value_68);
        Py_DECREF(tmp_called_value_213);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_214;
        PyObject *tmp_expression_value_276;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_called_value_215;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_expression_value_276 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_276 == NULL)) {
            tmp_expression_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_276 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1522;

            goto frame_exception_exit_1;
        }
        tmp_called_value_214 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_276, mod_consts[356]);
        if (tmp_called_value_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1522;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_69 = mod_consts[240];
        tmp_expression_value_277 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_277 == NULL)) {
            tmp_expression_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_277 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);

            exception_lineno = 1522;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_277, mod_consts[357]);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);

            exception_lineno = 1522;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_70, 0, tmp_tuple_element_10);
        tmp_dict_key_10 = mod_consts[232];
        tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_278 == NULL)) {
            tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 1524;

            goto frame_exception_exit_1;
        }
        tmp_called_value_215 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_278, mod_consts[356]);
        if (tmp_called_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 1524;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = mod_consts[232];
        tmp_expression_value_279 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_279 == NULL)) {
            tmp_expression_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_279 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_called_value_215);

            exception_lineno = 1524;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_279, mod_consts[357]);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_called_value_215);

            exception_lineno = 1524;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_73, 0, tmp_tuple_element_11);
        tmp_dict_key_11 = mod_consts[35];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[239]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_73);

            exception_lineno = 1525;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_74, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[358];
        tmp_dict_value_11 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_74, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1524;
        {
            PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74};
            tmp_dict_value_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_215, call_args);
        }

        Py_DECREF(tmp_called_value_215);
        Py_DECREF(tmp_args_element_value_73);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 1524;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_71, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[35];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[244]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1530;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_value_71, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[358];
        tmp_dict_value_10 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_71, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_called_value_214);
        Py_DECREF(tmp_args_element_value_70);
        Py_DECREF(tmp_args_element_value_71);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1522;
        {
            PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_214, call_args);
        }

        Py_DECREF(tmp_called_value_214);
        Py_DECREF(tmp_args_element_value_70);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1522;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_45);
    }
    {
        PyObject *tmp_called_value_216;
        PyObject *tmp_expression_value_280;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_75;
        tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_280 == NULL)) {
            tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_280 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1534;

            goto frame_exception_exit_1;
        }
        tmp_called_value_216 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_280, mod_consts[360]);
        if (tmp_called_value_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1534;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_args_element_value_75 == NULL)) {
            tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[240]);
        }

        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_216);

            exception_lineno = 1534;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1534;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_216, tmp_args_element_value_75);
        Py_DECREF(tmp_called_value_216);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1534;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_217;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_expression_value_282;
        tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_281 == NULL)) {
            tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_281 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        tmp_called_value_217 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_281, mod_consts[360]);
        if (tmp_called_value_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_expression_value_282 == NULL)) {
            tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[240]);
        }

        if (tmp_expression_value_282 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);

            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_282, mod_consts[232]);
        if (tmp_args_element_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);

            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1535;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_217, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_217);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_218;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_283 == NULL)) {
            tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_283 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1537;

            goto frame_exception_exit_1;
        }
        tmp_called_value_218 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_283, mod_consts[356]);
        if (tmp_called_value_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1537;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = mod_consts[245];
        tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_284 == NULL)) {
            tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_284 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);

            exception_lineno = 1537;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_284, mod_consts[357]);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);

            exception_lineno = 1537;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_78, 0, tmp_tuple_element_12);
        tmp_dict_key_12 = mod_consts[35];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[253]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[253]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);
            Py_DECREF(tmp_args_element_value_78);

            exception_lineno = 1538;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_79, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[358];
        tmp_dict_value_12 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_79, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1537;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_218, call_args);
        }

        Py_DECREF(tmp_called_value_218);
        Py_DECREF(tmp_args_element_value_78);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1537;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_46);
    }
    {
        PyObject *tmp_called_value_219;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_80;
        tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_285 == NULL)) {
            tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_285 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1542;

            goto frame_exception_exit_1;
        }
        tmp_called_value_219 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_285, mod_consts[360]);
        if (tmp_called_value_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1542;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_args_element_value_80 == NULL)) {
            tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_219);

            exception_lineno = 1542;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1542;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_219, tmp_args_element_value_80);
        Py_DECREF(tmp_called_value_219);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1542;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_220;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_called_value_221;
        PyObject *tmp_expression_value_288;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_286 == NULL)) {
            tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_286 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1544;

            goto frame_exception_exit_1;
        }
        tmp_called_value_220 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_286, mod_consts[356]);
        if (tmp_called_value_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1544;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = mod_consts[263];
        tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_287 == NULL)) {
            tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_287 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);

            exception_lineno = 1544;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_287, mod_consts[357]);
        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);

            exception_lineno = 1544;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_82, 0, tmp_tuple_element_13);
        tmp_dict_key_13 = mod_consts[206];
        tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_288 == NULL)) {
            tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_288 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 1546;

            goto frame_exception_exit_1;
        }
        tmp_called_value_221 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_288, mod_consts[356]);
        if (tmp_called_value_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 1546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = mod_consts[206];
        tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_289 == NULL)) {
            tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_289 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_82);
            Py_DECREF(tmp_called_value_221);

            exception_lineno = 1546;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_289, mod_consts[357]);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_82);
            Py_DECREF(tmp_called_value_221);

            exception_lineno = 1546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_85, 0, tmp_tuple_element_14);
        tmp_dict_key_14 = mod_consts[35];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_82);
            Py_DECREF(tmp_called_value_221);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 1547;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_86, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[358];
        tmp_dict_value_14 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_86, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1546;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86};
            tmp_dict_value_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_221, call_args);
        }

        Py_DECREF(tmp_called_value_221);
        Py_DECREF(tmp_args_element_value_85);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_dict_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 1546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_called_value_222;
            PyObject *tmp_expression_value_290;
            PyObject *tmp_args_element_value_87;
            PyObject *tmp_args_element_value_88;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_291;
            PyObject *tmp_args_element_value_89;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_res = PyDict_SetItem(tmp_args_element_value_83, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[214];
            tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_290 == NULL)) {
                tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_expression_value_290 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1553;

                goto dict_build_exception_5;
            }
            tmp_called_value_222 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_290, mod_consts[356]);
            if (tmp_called_value_222 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1553;

                goto dict_build_exception_5;
            }
            tmp_args_element_value_87 = mod_consts[214];
            tmp_expression_value_291 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_291 == NULL)) {
                tmp_expression_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_291 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_222);

                exception_lineno = 1553;

                goto dict_build_exception_5;
            }
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_291, mod_consts[357]);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_222);

                exception_lineno = 1553;

                goto dict_build_exception_5;
            }
            tmp_args_element_value_88 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_element_value_88, 0, tmp_tuple_element_15);
            tmp_dict_key_15 = mod_consts[35];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[262]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[262]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_222);
                Py_DECREF(tmp_args_element_value_88);

                exception_lineno = 1554;

                goto dict_build_exception_5;
            }
            tmp_args_element_value_89 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_args_element_value_89, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[358];
            tmp_dict_value_15 = mod_consts[359];
            tmp_res = PyDict_SetItem(tmp_args_element_value_89, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1553;
            {
                PyObject *call_args[] = {tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89};
                tmp_dict_value_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_222, call_args);
            }

            Py_DECREF(tmp_called_value_222);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1553;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_83, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[35];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1559;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_83, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[358];
            tmp_dict_value_13 = mod_consts[359];
            tmp_res = PyDict_SetItem(tmp_args_element_value_83, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_called_value_220);
        Py_DECREF(tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_83);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1544;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83};
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_220, call_args);
        }

        Py_DECREF(tmp_called_value_220);
        Py_DECREF(tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1544;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_47);
    }
    {
        PyObject *tmp_called_value_223;
        PyObject *tmp_expression_value_292;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_90;
        tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_292 == NULL)) {
            tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_292 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1563;

            goto frame_exception_exit_1;
        }
        tmp_called_value_223 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_292, mod_consts[360]);
        if (tmp_called_value_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1563;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_args_element_value_90 == NULL)) {
            tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_args_element_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);

            exception_lineno = 1563;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1563;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_223, tmp_args_element_value_90);
        Py_DECREF(tmp_called_value_223);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1563;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_224;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_expression_value_294;
        tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_293 == NULL)) {
            tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1564;

            goto frame_exception_exit_1;
        }
        tmp_called_value_224 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_293, mod_consts[360]);
        if (tmp_called_value_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1564;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_294 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_expression_value_294 == NULL)) {
            tmp_expression_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_expression_value_294 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);

            exception_lineno = 1564;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_294, mod_consts[206]);
        if (tmp_args_element_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);

            exception_lineno = 1564;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1564;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_224, tmp_args_element_value_91);
        Py_DECREF(tmp_called_value_224);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1564;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_225;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_expression_value_296;
        tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_295 == NULL)) {
            tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_295 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1565;

            goto frame_exception_exit_1;
        }
        tmp_called_value_225 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_295, mod_consts[360]);
        if (tmp_called_value_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1565;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_296 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_expression_value_296 == NULL)) {
            tmp_expression_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_expression_value_296 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_225);

            exception_lineno = 1565;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_296, mod_consts[214]);
        if (tmp_args_element_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_225);

            exception_lineno = 1565;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1565;
        tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_225, tmp_args_element_value_92);
        Py_DECREF(tmp_called_value_225);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1565;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_226;
        PyObject *tmp_expression_value_297;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_called_value_227;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_297 == NULL)) {
            tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_297 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        tmp_called_value_226 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_297, mod_consts[356]);
        if (tmp_called_value_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_93 = mod_consts[284];
        tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_298 == NULL)) {
            tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_298 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);

            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_298, mod_consts[357]);
        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);

            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_94, 0, tmp_tuple_element_16);
        tmp_dict_key_16 = mod_consts[276];
        tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_299 == NULL)) {
            tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_299 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_94);

            exception_lineno = 1569;

            goto frame_exception_exit_1;
        }
        tmp_called_value_227 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_299, mod_consts[356]);
        if (tmp_called_value_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_94);

            exception_lineno = 1569;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = mod_consts[276];
        tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_300 == NULL)) {
            tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_300 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_called_value_227);

            exception_lineno = 1569;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_300, mod_consts[357]);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_called_value_227);

            exception_lineno = 1569;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_97, 0, tmp_tuple_element_17);
        tmp_dict_key_17 = mod_consts[35];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[283]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_called_value_227);
            Py_DECREF(tmp_args_element_value_97);

            exception_lineno = 1570;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_98, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[358];
        tmp_dict_value_17 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_98, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1569;
        {
            PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_dict_value_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_227, call_args);
        }

        Py_DECREF(tmp_called_value_227);
        Py_DECREF(tmp_args_element_value_97);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_94);

            exception_lineno = 1569;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_95, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[35];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1575;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_value_95, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[358];
        tmp_dict_value_16 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_95, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_called_value_226);
        Py_DECREF(tmp_args_element_value_94);
        Py_DECREF(tmp_args_element_value_95);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1567;
        {
            PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95};
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_226, call_args);
        }

        Py_DECREF(tmp_called_value_226);
        Py_DECREF(tmp_args_element_value_94);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_48);
    }
    {
        PyObject *tmp_called_value_228;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_99;
        tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_301 == NULL)) {
            tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_301 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        tmp_called_value_228 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_301, mod_consts[360]);
        if (tmp_called_value_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_args_element_value_99 == NULL)) {
            tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[284]);
        }

        if (tmp_args_element_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_228);

            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1579;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_228, tmp_args_element_value_99);
        Py_DECREF(tmp_called_value_228);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_229;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_expression_value_303;
        tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_302 == NULL)) {
            tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_302 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1580;

            goto frame_exception_exit_1;
        }
        tmp_called_value_229 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_302, mod_consts[360]);
        if (tmp_called_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1580;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_303 == NULL)) {
            tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[284]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);

            exception_lineno = 1580;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_303, mod_consts[276]);
        if (tmp_args_element_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);

            exception_lineno = 1580;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1580;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_229, tmp_args_element_value_100);
        Py_DECREF(tmp_called_value_229);
        Py_DECREF(tmp_args_element_value_100);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1580;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_230;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_called_value_231;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        tmp_expression_value_304 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_304 == NULL)) {
            tmp_expression_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_304 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1582;

            goto frame_exception_exit_1;
        }
        tmp_called_value_230 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_304, mod_consts[356]);
        if (tmp_called_value_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1582;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = mod_consts[306];
        tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_305 == NULL)) {
            tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_305 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);

            exception_lineno = 1582;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_305, mod_consts[357]);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);

            exception_lineno = 1582;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_102, 0, tmp_tuple_element_18);
        tmp_dict_key_18 = mod_consts[298];
        tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_306 == NULL)) {
            tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_306 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 1584;

            goto frame_exception_exit_1;
        }
        tmp_called_value_231 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_306, mod_consts[356]);
        if (tmp_called_value_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 1584;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = mod_consts[298];
        tmp_expression_value_307 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_307 == NULL)) {
            tmp_expression_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_307 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_called_value_231);

            exception_lineno = 1584;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_307, mod_consts[357]);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_called_value_231);

            exception_lineno = 1584;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_105, 0, tmp_tuple_element_19);
        tmp_dict_key_19 = mod_consts[35];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[305]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[305]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_called_value_231);
            Py_DECREF(tmp_args_element_value_105);

            exception_lineno = 1585;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_106, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[358];
        tmp_dict_value_19 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_106, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1584;
        {
            PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106};
            tmp_dict_value_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_231, call_args);
        }

        Py_DECREF(tmp_called_value_231);
        Py_DECREF(tmp_args_element_value_105);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_dict_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 1584;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_103, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[35];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1590;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_value_103, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[358];
        tmp_dict_value_18 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_103, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_called_value_230);
        Py_DECREF(tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_103);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1582;
        {
            PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_230, call_args);
        }

        Py_DECREF(tmp_called_value_230);
        Py_DECREF(tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_103);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1582;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_49);
    }
    {
        PyObject *tmp_called_value_232;
        PyObject *tmp_expression_value_308;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_107;
        tmp_expression_value_308 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_308 == NULL)) {
            tmp_expression_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_308 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1594;

            goto frame_exception_exit_1;
        }
        tmp_called_value_232 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_308, mod_consts[360]);
        if (tmp_called_value_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1594;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[306]);

        if (unlikely(tmp_args_element_value_107 == NULL)) {
            tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[306]);
        }

        if (tmp_args_element_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);

            exception_lineno = 1594;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1594;
        tmp_call_result_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_232, tmp_args_element_value_107);
        Py_DECREF(tmp_called_value_232);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1594;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_233;
        PyObject *tmp_expression_value_309;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_expression_value_310;
        tmp_expression_value_309 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_309 == NULL)) {
            tmp_expression_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_309 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1595;

            goto frame_exception_exit_1;
        }
        tmp_called_value_233 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_309, mod_consts[360]);
        if (tmp_called_value_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1595;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_310 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[306]);

        if (unlikely(tmp_expression_value_310 == NULL)) {
            tmp_expression_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[306]);
        }

        if (tmp_expression_value_310 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);

            exception_lineno = 1595;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_310, mod_consts[298]);
        if (tmp_args_element_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);

            exception_lineno = 1595;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1595;
        tmp_call_result_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_233, tmp_args_element_value_108);
        Py_DECREF(tmp_called_value_233);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1595;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_234;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_312;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_expression_value_311 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_311 == NULL)) {
            tmp_expression_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_311 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1597;

            goto frame_exception_exit_1;
        }
        tmp_called_value_234 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_311, mod_consts[356]);
        if (tmp_called_value_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1597;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = mod_consts[313];
        tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_312 == NULL)) {
            tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_312 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_234);

            exception_lineno = 1597;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_312, mod_consts[357]);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_234);

            exception_lineno = 1597;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_110 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_110, 0, tmp_tuple_element_20);
        tmp_dict_key_20 = mod_consts[35];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[325]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_234);
            Py_DECREF(tmp_args_element_value_110);

            exception_lineno = 1598;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_111 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_111, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[358];
        tmp_dict_value_20 = mod_consts[359];
        tmp_res = PyDict_SetItem(tmp_args_element_value_111, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1597;
        {
            PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_234, call_args);
        }

        Py_DECREF(tmp_called_value_234);
        Py_DECREF(tmp_args_element_value_110);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1597;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_50);
    }
    {
        PyObject *tmp_called_value_235;
        PyObject *tmp_expression_value_313;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_112;
        tmp_expression_value_313 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_313 == NULL)) {
            tmp_expression_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_313 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1602;

            goto frame_exception_exit_1;
        }
        tmp_called_value_235 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_313, mod_consts[360]);
        if (tmp_called_value_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1602;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[313]);

        if (unlikely(tmp_args_element_value_112 == NULL)) {
            tmp_args_element_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[313]);
        }

        if (tmp_args_element_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);

            exception_lineno = 1602;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1602;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_235, tmp_args_element_value_112);
        Py_DECREF(tmp_called_value_235);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1602;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_assattr_target_47;
        PyObject *tmp_expression_value_314;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_subscript_value_29;
        tmp_assattr_value_47 = Py_True;
        tmp_expression_value_315 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_315 == NULL)) {
            tmp_expression_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_expression_value_315 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1605;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_314 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_315, mod_consts[326]);
        if (tmp_expression_value_314 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1605;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_29 = mod_consts[109];
        tmp_assattr_target_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_314, tmp_subscript_value_29);
        Py_DECREF(tmp_expression_value_314);
        if (tmp_assattr_target_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1605;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[361], tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_target_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1605;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_called_value_236;
        PyObject *tmp_expression_value_316;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_called_value_237;
        PyObject *tmp_assattr_target_48;
        PyObject *tmp_expression_value_317;
        PyObject *tmp_expression_value_318;
        PyObject *tmp_subscript_value_30;
        tmp_expression_value_316 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_316 == NULL)) {
            tmp_expression_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_316 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        tmp_called_value_236 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_316, mod_consts[115]);
        if (tmp_called_value_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);

            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1606;
        tmp_args_element_value_113 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[116]);
        if (tmp_args_element_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);

            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        tmp_called_value_237 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_237 == NULL)) {
            tmp_called_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_113);

            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1606;
        tmp_args_element_value_114 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_237, mod_consts[117]);

        if (tmp_args_element_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_113);

            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1606;
        {
            PyObject *call_args[] = {tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_assattr_value_48 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_236, call_args);
        }

        Py_DECREF(tmp_called_value_236);
        Py_DECREF(tmp_args_element_value_113);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_assattr_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_318 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_318 == NULL)) {
            tmp_expression_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_expression_value_318 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_317 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_318, mod_consts[326]);
        if (tmp_expression_value_317 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = mod_consts[109];
        tmp_assattr_target_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_317, tmp_subscript_value_30);
        Py_DECREF(tmp_expression_value_317);
        if (tmp_assattr_target_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[362], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_target_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1606;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_assattr_target_49;
        PyObject *tmp_expression_value_319;
        PyObject *tmp_expression_value_320;
        PyObject *tmp_subscript_value_31;
        tmp_assattr_value_49 = Py_True;
        tmp_expression_value_320 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_320 == NULL)) {
            tmp_expression_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_expression_value_320 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1607;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_319 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_320, mod_consts[326]);
        if (tmp_expression_value_319 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1607;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = mod_consts[121];
        tmp_assattr_target_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_319, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_319);
        if (tmp_assattr_target_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1607;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[361], tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_target_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1607;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_called_value_238;
        PyObject *tmp_expression_value_321;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_called_value_239;
        PyObject *tmp_assattr_target_50;
        PyObject *tmp_expression_value_322;
        PyObject *tmp_expression_value_323;
        PyObject *tmp_subscript_value_32;
        tmp_expression_value_321 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_321 == NULL)) {
            tmp_expression_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_321 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        tmp_called_value_238 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_321, mod_consts[115]);
        if (tmp_called_value_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);

            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1608;
        tmp_args_element_value_115 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[116]);
        if (tmp_args_element_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);

            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        tmp_called_value_239 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_239 == NULL)) {
            tmp_called_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1608;
        tmp_args_element_value_116 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_239, mod_consts[117]);

        if (tmp_args_element_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1608;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116};
            tmp_assattr_value_50 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_238, call_args);
        }

        Py_DECREF(tmp_called_value_238);
        Py_DECREF(tmp_args_element_value_115);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_assattr_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_323 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_323 == NULL)) {
            tmp_expression_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_expression_value_323 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_322 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_323, mod_consts[326]);
        if (tmp_expression_value_322 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_32 = mod_consts[121];
        tmp_assattr_target_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_322, tmp_subscript_value_32);
        Py_DECREF(tmp_expression_value_322);
        if (tmp_assattr_target_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[362], tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_target_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1608;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_assattr_target_51;
        PyObject *tmp_expression_value_324;
        PyObject *tmp_expression_value_325;
        PyObject *tmp_subscript_value_33;
        tmp_assattr_value_51 = Py_True;
        tmp_expression_value_325 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_325 == NULL)) {
            tmp_expression_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_expression_value_325 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1609;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_324 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_325, mod_consts[326]);
        if (tmp_expression_value_324 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1609;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_33 = mod_consts[125];
        tmp_assattr_target_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_324, tmp_subscript_value_33);
        Py_DECREF(tmp_expression_value_324);
        if (tmp_assattr_target_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1609;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[361], tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_target_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1609;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_called_value_240;
        PyObject *tmp_expression_value_326;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_called_value_241;
        PyObject *tmp_assattr_target_52;
        PyObject *tmp_expression_value_327;
        PyObject *tmp_expression_value_328;
        PyObject *tmp_subscript_value_34;
        tmp_expression_value_326 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_326 == NULL)) {
            tmp_expression_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_326 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        tmp_called_value_240 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_326, mod_consts[115]);
        if (tmp_called_value_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_240);

            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1610;
        tmp_args_element_value_117 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts[116]);
        if (tmp_args_element_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_240);

            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        tmp_called_value_241 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_241 == NULL)) {
            tmp_called_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_240);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1610;
        tmp_args_element_value_118 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_241, mod_consts[117]);

        if (tmp_args_element_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_240);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1610;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
            tmp_assattr_value_52 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_240, call_args);
        }

        Py_DECREF(tmp_called_value_240);
        Py_DECREF(tmp_args_element_value_117);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_assattr_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_328 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_328 == NULL)) {
            tmp_expression_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_expression_value_328 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_327 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_328, mod_consts[326]);
        if (tmp_expression_value_327 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_34 = mod_consts[125];
        tmp_assattr_target_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_327, tmp_subscript_value_34);
        Py_DECREF(tmp_expression_value_327);
        if (tmp_assattr_target_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[362], tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_target_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1610;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_assattr_target_53;
        PyObject *tmp_expression_value_329;
        PyObject *tmp_expression_value_330;
        PyObject *tmp_subscript_value_35;
        tmp_assattr_value_53 = Py_True;
        tmp_expression_value_330 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_330 == NULL)) {
            tmp_expression_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_expression_value_330 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1611;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_329 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_330, mod_consts[326]);
        if (tmp_expression_value_329 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1611;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_35 = mod_consts[128];
        tmp_assattr_target_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_329, tmp_subscript_value_35);
        Py_DECREF(tmp_expression_value_329);
        if (tmp_assattr_target_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1611;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[361], tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_target_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1611;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_called_value_242;
        PyObject *tmp_expression_value_331;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_called_value_243;
        PyObject *tmp_assattr_target_54;
        PyObject *tmp_expression_value_332;
        PyObject *tmp_expression_value_333;
        PyObject *tmp_subscript_value_36;
        tmp_expression_value_331 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_331 == NULL)) {
            tmp_expression_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_331 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        tmp_called_value_242 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_331, mod_consts[115]);
        if (tmp_called_value_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);

            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1612;
        tmp_args_element_value_119 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, mod_consts[116]);
        if (tmp_args_element_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);

            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        tmp_called_value_243 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_243 == NULL)) {
            tmp_called_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);
            Py_DECREF(tmp_args_element_value_119);

            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1612;
        tmp_args_element_value_120 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_243, mod_consts[117]);

        if (tmp_args_element_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);
            Py_DECREF(tmp_args_element_value_119);

            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1612;
        {
            PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_assattr_value_54 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_242, call_args);
        }

        Py_DECREF(tmp_called_value_242);
        Py_DECREF(tmp_args_element_value_119);
        Py_DECREF(tmp_args_element_value_120);
        if (tmp_assattr_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_333 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_333 == NULL)) {
            tmp_expression_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_expression_value_333 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_54);

            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_332 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_333, mod_consts[326]);
        if (tmp_expression_value_332 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_54);

            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_36 = mod_consts[128];
        tmp_assattr_target_54 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_332, tmp_subscript_value_36);
        Py_DECREF(tmp_expression_value_332);
        if (tmp_assattr_target_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_54);

            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[362], tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_target_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1612;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_assattr_target_55;
        PyObject *tmp_expression_value_334;
        PyObject *tmp_expression_value_335;
        PyObject *tmp_subscript_value_37;
        tmp_assattr_value_55 = Py_True;
        tmp_expression_value_335 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_expression_value_335 == NULL)) {
            tmp_expression_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_expression_value_335 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1613;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_334 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_335, mod_consts[326]);
        if (tmp_expression_value_334 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1613;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_37 = mod_consts[174];
        tmp_assattr_target_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_334, tmp_subscript_value_37);
        Py_DECREF(tmp_expression_value_334);
        if (tmp_assattr_target_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1613;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[361], tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_target_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1613;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_called_value_244;
        PyObject *tmp_expression_value_336;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_called_value_245;
        PyObject *tmp_assattr_target_56;
        PyObject *tmp_expression_value_337;
        PyObject *tmp_expression_value_338;
        PyObject *tmp_subscript_value_38;
        tmp_expression_value_336 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_336 == NULL)) {
            tmp_expression_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_336 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        tmp_called_value_244 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_336, mod_consts[115]);
        if (tmp_called_value_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);

            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1614;
        tmp_args_element_value_121 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[116]);
        if (tmp_args_element_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);

            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        tmp_called_value_245 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_245 == NULL)) {
            tmp_called_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1614;
        tmp_args_element_value_122 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_245, mod_consts[117]);

        if (tmp_args_element_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1614;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_assattr_value_56 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_244, call_args);
        }

        Py_DECREF(tmp_called_value_244);
        Py_DECREF(tmp_args_element_value_121);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_assattr_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_338 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_expression_value_338 == NULL)) {
            tmp_expression_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_expression_value_338 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_337 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_338, mod_consts[326]);
        if (tmp_expression_value_337 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_38 = mod_consts[174];
        tmp_assattr_target_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_337, tmp_subscript_value_38);
        Py_DECREF(tmp_expression_value_337);
        if (tmp_assattr_target_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[362], tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_target_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1614;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_assattr_target_57;
        PyObject *tmp_expression_value_339;
        PyObject *tmp_expression_value_340;
        PyObject *tmp_subscript_value_39;
        tmp_assattr_value_57 = Py_True;
        tmp_expression_value_340 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_340 == NULL)) {
            tmp_expression_value_340 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_340 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1615;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_339 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_340, mod_consts[326]);
        if (tmp_expression_value_339 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1615;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_39 = mod_consts[192];
        tmp_assattr_target_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_339, tmp_subscript_value_39);
        Py_DECREF(tmp_expression_value_339);
        if (tmp_assattr_target_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1615;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[361], tmp_assattr_value_57);
        Py_DECREF(tmp_assattr_target_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1615;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_called_value_246;
        PyObject *tmp_expression_value_341;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_called_value_247;
        PyObject *tmp_assattr_target_58;
        PyObject *tmp_expression_value_342;
        PyObject *tmp_expression_value_343;
        PyObject *tmp_subscript_value_40;
        tmp_expression_value_341 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_341 == NULL)) {
            tmp_expression_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_341 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        tmp_called_value_246 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_341, mod_consts[115]);
        if (tmp_called_value_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_246);

            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1616;
        tmp_args_element_value_123 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[116]);
        if (tmp_args_element_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_246);

            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        tmp_called_value_247 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_247 == NULL)) {
            tmp_called_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_246);
            Py_DECREF(tmp_args_element_value_123);

            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1616;
        tmp_args_element_value_124 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_247, mod_consts[117]);

        if (tmp_args_element_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_246);
            Py_DECREF(tmp_args_element_value_123);

            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1616;
        {
            PyObject *call_args[] = {tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_assattr_value_58 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_246, call_args);
        }

        Py_DECREF(tmp_called_value_246);
        Py_DECREF(tmp_args_element_value_123);
        Py_DECREF(tmp_args_element_value_124);
        if (tmp_assattr_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_343 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_343 == NULL)) {
            tmp_expression_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_343 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_58);

            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_342 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_343, mod_consts[326]);
        if (tmp_expression_value_342 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_58);

            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_40 = mod_consts[192];
        tmp_assattr_target_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_342, tmp_subscript_value_40);
        Py_DECREF(tmp_expression_value_342);
        if (tmp_assattr_target_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_58);

            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[362], tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_target_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1616;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_assattr_target_59;
        PyObject *tmp_expression_value_344;
        PyObject *tmp_expression_value_345;
        PyObject *tmp_subscript_value_41;
        tmp_assattr_value_59 = Py_True;
        tmp_expression_value_345 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_345 == NULL)) {
            tmp_expression_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_345 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1617;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_344 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_345, mod_consts[326]);
        if (tmp_expression_value_344 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1617;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_41 = mod_consts[197];
        tmp_assattr_target_59 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_344, tmp_subscript_value_41);
        Py_DECREF(tmp_expression_value_344);
        if (tmp_assattr_target_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1617;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[361], tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_target_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1617;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_called_value_248;
        PyObject *tmp_expression_value_346;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_called_value_249;
        PyObject *tmp_assattr_target_60;
        PyObject *tmp_expression_value_347;
        PyObject *tmp_expression_value_348;
        PyObject *tmp_subscript_value_42;
        tmp_expression_value_346 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_346 == NULL)) {
            tmp_expression_value_346 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_346 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        tmp_called_value_248 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_346, mod_consts[115]);
        if (tmp_called_value_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);

            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1618;
        tmp_args_element_value_125 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_20, mod_consts[116]);
        if (tmp_args_element_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);

            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        tmp_called_value_249 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_249 == NULL)) {
            tmp_called_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);
            Py_DECREF(tmp_args_element_value_125);

            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1618;
        tmp_args_element_value_126 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_249, mod_consts[117]);

        if (tmp_args_element_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);
            Py_DECREF(tmp_args_element_value_125);

            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1618;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_assattr_value_60 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_248, call_args);
        }

        Py_DECREF(tmp_called_value_248);
        Py_DECREF(tmp_args_element_value_125);
        Py_DECREF(tmp_args_element_value_126);
        if (tmp_assattr_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_348 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_348 == NULL)) {
            tmp_expression_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_348 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_60);

            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_347 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_348, mod_consts[326]);
        if (tmp_expression_value_347 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_60);

            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_42 = mod_consts[197];
        tmp_assattr_target_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_347, tmp_subscript_value_42);
        Py_DECREF(tmp_expression_value_347);
        if (tmp_assattr_target_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_60);

            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[362], tmp_assattr_value_60);
        Py_DECREF(tmp_assattr_value_60);
        Py_DECREF(tmp_assattr_target_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_61;
        PyObject *tmp_assattr_target_61;
        PyObject *tmp_expression_value_349;
        PyObject *tmp_expression_value_350;
        PyObject *tmp_subscript_value_43;
        tmp_assattr_value_61 = Py_True;
        tmp_expression_value_350 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_350 == NULL)) {
            tmp_expression_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_350 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1619;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_349 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_350, mod_consts[326]);
        if (tmp_expression_value_349 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1619;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_43 = mod_consts[199];
        tmp_assattr_target_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_349, tmp_subscript_value_43);
        Py_DECREF(tmp_expression_value_349);
        if (tmp_assattr_target_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1619;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_61, mod_consts[361], tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_target_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1619;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_62;
        PyObject *tmp_called_value_250;
        PyObject *tmp_expression_value_351;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_called_value_251;
        PyObject *tmp_assattr_target_62;
        PyObject *tmp_expression_value_352;
        PyObject *tmp_expression_value_353;
        PyObject *tmp_subscript_value_44;
        tmp_expression_value_351 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_351 == NULL)) {
            tmp_expression_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_351 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        tmp_called_value_250 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_351, mod_consts[115]);
        if (tmp_called_value_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_250);

            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1620;
        tmp_args_element_value_127 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_21, mod_consts[116]);
        if (tmp_args_element_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_250);

            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        tmp_called_value_251 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_251 == NULL)) {
            tmp_called_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_250);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1620;
        tmp_args_element_value_128 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_251, mod_consts[117]);

        if (tmp_args_element_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_250);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1620;
        {
            PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_assattr_value_62 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_250, call_args);
        }

        Py_DECREF(tmp_called_value_250);
        Py_DECREF(tmp_args_element_value_127);
        Py_DECREF(tmp_args_element_value_128);
        if (tmp_assattr_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_353 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_353 == NULL)) {
            tmp_expression_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_353 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_62);

            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_352 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_353, mod_consts[326]);
        if (tmp_expression_value_352 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_62);

            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_44 = mod_consts[199];
        tmp_assattr_target_62 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_352, tmp_subscript_value_44);
        Py_DECREF(tmp_expression_value_352);
        if (tmp_assattr_target_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_62);

            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_62, mod_consts[362], tmp_assattr_value_62);
        Py_DECREF(tmp_assattr_value_62);
        Py_DECREF(tmp_assattr_target_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1620;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_63;
        PyObject *tmp_assattr_target_63;
        PyObject *tmp_expression_value_354;
        PyObject *tmp_expression_value_355;
        PyObject *tmp_subscript_value_45;
        tmp_assattr_value_63 = Py_True;
        tmp_expression_value_355 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_355 == NULL)) {
            tmp_expression_value_355 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_355 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1621;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_354 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_355, mod_consts[326]);
        if (tmp_expression_value_354 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1621;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_45 = mod_consts[202];
        tmp_assattr_target_63 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_354, tmp_subscript_value_45);
        Py_DECREF(tmp_expression_value_354);
        if (tmp_assattr_target_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1621;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_63, mod_consts[361], tmp_assattr_value_63);
        Py_DECREF(tmp_assattr_target_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1621;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_64;
        PyObject *tmp_called_value_252;
        PyObject *tmp_expression_value_356;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_called_value_253;
        PyObject *tmp_assattr_target_64;
        PyObject *tmp_expression_value_357;
        PyObject *tmp_expression_value_358;
        PyObject *tmp_subscript_value_46;
        tmp_expression_value_356 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_356 == NULL)) {
            tmp_expression_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_356 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        tmp_called_value_252 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_356, mod_consts[115]);
        if (tmp_called_value_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);

            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1622;
        tmp_args_element_value_129 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[116]);
        if (tmp_args_element_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);

            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        tmp_called_value_253 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_253 == NULL)) {
            tmp_called_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);
            Py_DECREF(tmp_args_element_value_129);

            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1622;
        tmp_args_element_value_130 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_253, mod_consts[117]);

        if (tmp_args_element_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);
            Py_DECREF(tmp_args_element_value_129);

            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1622;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130};
            tmp_assattr_value_64 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_252, call_args);
        }

        Py_DECREF(tmp_called_value_252);
        Py_DECREF(tmp_args_element_value_129);
        Py_DECREF(tmp_args_element_value_130);
        if (tmp_assattr_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_358 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_358 == NULL)) {
            tmp_expression_value_358 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_expression_value_358 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_64);

            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_357 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_358, mod_consts[326]);
        if (tmp_expression_value_357 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_64);

            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_46 = mod_consts[202];
        tmp_assattr_target_64 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_357, tmp_subscript_value_46);
        Py_DECREF(tmp_expression_value_357);
        if (tmp_assattr_target_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_64);

            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_64, mod_consts[362], tmp_assattr_value_64);
        Py_DECREF(tmp_assattr_value_64);
        Py_DECREF(tmp_assattr_target_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1622;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_65;
        PyObject *tmp_assattr_target_65;
        PyObject *tmp_expression_value_359;
        PyObject *tmp_expression_value_360;
        PyObject *tmp_subscript_value_47;
        tmp_assattr_value_65 = Py_True;
        tmp_expression_value_360 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_expression_value_360 == NULL)) {
            tmp_expression_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_expression_value_360 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1623;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_359 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_360, mod_consts[326]);
        if (tmp_expression_value_359 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1623;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_47 = mod_consts[227];
        tmp_assattr_target_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_359, tmp_subscript_value_47);
        Py_DECREF(tmp_expression_value_359);
        if (tmp_assattr_target_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1623;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_65, mod_consts[361], tmp_assattr_value_65);
        Py_DECREF(tmp_assattr_target_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1623;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_66;
        PyObject *tmp_called_value_254;
        PyObject *tmp_expression_value_361;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_called_value_255;
        PyObject *tmp_assattr_target_66;
        PyObject *tmp_expression_value_362;
        PyObject *tmp_expression_value_363;
        PyObject *tmp_subscript_value_48;
        tmp_expression_value_361 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_361 == NULL)) {
            tmp_expression_value_361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_361 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        tmp_called_value_254 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_361, mod_consts[115]);
        if (tmp_called_value_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_254);

            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1624;
        tmp_args_element_value_131 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_23, mod_consts[116]);
        if (tmp_args_element_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_254);

            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        tmp_called_value_255 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_255 == NULL)) {
            tmp_called_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_254);
            Py_DECREF(tmp_args_element_value_131);

            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1624;
        tmp_args_element_value_132 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_255, mod_consts[117]);

        if (tmp_args_element_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_254);
            Py_DECREF(tmp_args_element_value_131);

            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1624;
        {
            PyObject *call_args[] = {tmp_args_element_value_131, tmp_args_element_value_132};
            tmp_assattr_value_66 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_254, call_args);
        }

        Py_DECREF(tmp_called_value_254);
        Py_DECREF(tmp_args_element_value_131);
        Py_DECREF(tmp_args_element_value_132);
        if (tmp_assattr_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_363 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_expression_value_363 == NULL)) {
            tmp_expression_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_expression_value_363 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_66);

            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_362 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_363, mod_consts[326]);
        if (tmp_expression_value_362 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_66);

            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_48 = mod_consts[227];
        tmp_assattr_target_66 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_362, tmp_subscript_value_48);
        Py_DECREF(tmp_expression_value_362);
        if (tmp_assattr_target_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_66);

            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_66, mod_consts[362], tmp_assattr_value_66);
        Py_DECREF(tmp_assattr_value_66);
        Py_DECREF(tmp_assattr_target_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1624;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_67;
        PyObject *tmp_assattr_target_67;
        PyObject *tmp_expression_value_364;
        PyObject *tmp_expression_value_365;
        PyObject *tmp_subscript_value_49;
        tmp_assattr_value_67 = Py_True;
        tmp_expression_value_365 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_expression_value_365 == NULL)) {
            tmp_expression_value_365 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_expression_value_365 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1625;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_364 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_365, mod_consts[326]);
        if (tmp_expression_value_364 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1625;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_49 = mod_consts[227];
        tmp_assattr_target_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_364, tmp_subscript_value_49);
        Py_DECREF(tmp_expression_value_364);
        if (tmp_assattr_target_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1625;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_67, mod_consts[361], tmp_assattr_value_67);
        Py_DECREF(tmp_assattr_target_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1625;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_68;
        PyObject *tmp_called_value_256;
        PyObject *tmp_expression_value_366;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_called_value_257;
        PyObject *tmp_assattr_target_68;
        PyObject *tmp_expression_value_367;
        PyObject *tmp_expression_value_368;
        PyObject *tmp_subscript_value_50;
        tmp_expression_value_366 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_366 == NULL)) {
            tmp_expression_value_366 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_366 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        tmp_called_value_256 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_366, mod_consts[115]);
        if (tmp_called_value_256 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_256);

            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1626;
        tmp_args_element_value_133 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_24, mod_consts[116]);
        if (tmp_args_element_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_256);

            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        tmp_called_value_257 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_257 == NULL)) {
            tmp_called_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_256);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1626;
        tmp_args_element_value_134 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_257, mod_consts[117]);

        if (tmp_args_element_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_256);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1626;
        {
            PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134};
            tmp_assattr_value_68 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_256, call_args);
        }

        Py_DECREF(tmp_called_value_256);
        Py_DECREF(tmp_args_element_value_133);
        Py_DECREF(tmp_args_element_value_134);
        if (tmp_assattr_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_368 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_expression_value_368 == NULL)) {
            tmp_expression_value_368 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[275]);
        }

        if (tmp_expression_value_368 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_68);

            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_367 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_368, mod_consts[326]);
        if (tmp_expression_value_367 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_68);

            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_50 = mod_consts[227];
        tmp_assattr_target_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_367, tmp_subscript_value_50);
        Py_DECREF(tmp_expression_value_367);
        if (tmp_assattr_target_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_68);

            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_68, mod_consts[362], tmp_assattr_value_68);
        Py_DECREF(tmp_assattr_value_68);
        Py_DECREF(tmp_assattr_target_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1626;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_69;
        PyObject *tmp_assattr_target_69;
        PyObject *tmp_expression_value_369;
        PyObject *tmp_expression_value_370;
        PyObject *tmp_subscript_value_51;
        tmp_assattr_value_69 = Py_True;
        tmp_expression_value_370 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_expression_value_370 == NULL)) {
            tmp_expression_value_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_expression_value_370 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1627;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_369 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_370, mod_consts[326]);
        if (tmp_expression_value_369 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1627;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_51 = mod_consts[286];
        tmp_assattr_target_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_369, tmp_subscript_value_51);
        Py_DECREF(tmp_expression_value_369);
        if (tmp_assattr_target_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1627;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_69, mod_consts[361], tmp_assattr_value_69);
        Py_DECREF(tmp_assattr_target_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1627;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_70;
        PyObject *tmp_called_value_258;
        PyObject *tmp_expression_value_371;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_called_value_259;
        PyObject *tmp_assattr_target_70;
        PyObject *tmp_expression_value_372;
        PyObject *tmp_expression_value_373;
        PyObject *tmp_subscript_value_52;
        tmp_expression_value_371 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_371 == NULL)) {
            tmp_expression_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_371 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        tmp_called_value_258 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_371, mod_consts[115]);
        if (tmp_called_value_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);

            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1628;
        tmp_args_element_value_135 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_25, mod_consts[116]);
        if (tmp_args_element_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);

            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        tmp_called_value_259 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_259 == NULL)) {
            tmp_called_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);
            Py_DECREF(tmp_args_element_value_135);

            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1628;
        tmp_args_element_value_136 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_259, mod_consts[117]);

        if (tmp_args_element_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);
            Py_DECREF(tmp_args_element_value_135);

            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame.f_lineno = 1628;
        {
            PyObject *call_args[] = {tmp_args_element_value_135, tmp_args_element_value_136};
            tmp_assattr_value_70 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_258, call_args);
        }

        Py_DECREF(tmp_called_value_258);
        Py_DECREF(tmp_args_element_value_135);
        Py_DECREF(tmp_args_element_value_136);
        if (tmp_assattr_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_373 = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_expression_value_373 == NULL)) {
            tmp_expression_value_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_expression_value_373 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_70);

            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_372 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_373, mod_consts[326]);
        if (tmp_expression_value_372 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_70);

            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_52 = mod_consts[286];
        tmp_assattr_target_70 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_372, tmp_subscript_value_52);
        Py_DECREF(tmp_expression_value_372);
        if (tmp_assattr_target_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_70);

            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_70, mod_consts[362], tmp_assattr_value_70);
        Py_DECREF(tmp_assattr_value_70);
        Py_DECREF(tmp_assattr_target_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1628;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c41f98c6cc5d680f11f2e78db3c7b054, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c41f98c6cc5d680f11f2e78db3c7b054->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c41f98c6cc5d680f11f2e78db3c7b054, exception_lineno);
    }



    assertFrameObject(frame_c41f98c6cc5d680f11f2e78db3c7b054);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2", false);

    Py_INCREF(module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2);
    return module_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("mediapipe$modules$objectron$calculators$a_r_capture_metadata_pb2", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
