#pragma once
#include <Python.h>

extern "C" {
PyObject* torch_c_dynamo_eval_frame_init(void);

bool get_is_dynamo_compiling();
}
