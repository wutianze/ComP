// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from test_interfaces:msg/TestImage.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "test_interfaces/msg/detail/test_image__struct.h"
#include "test_interfaces/msg/detail/test_image__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool test_interfaces__msg__test_image__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("test_interfaces.msg._test_image.TestImage", full_classname_dest, 41) == 0);
  }
  test_interfaces__msg__TestImage * ros_message = _ros_message;
  {  // rows
    PyObject * field = PyObject_GetAttrString(_pymsg, "rows");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rows = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cols
    PyObject * field = PyObject_GetAttrString(_pymsg, "cols");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cols = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // elt_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "elt_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elt_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // elt_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "elt_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elt_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // test_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "test_a");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->test_a)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mat_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "mat_data");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mat_data, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test_interfaces__msg__test_image__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TestImage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test_interfaces.msg._test_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TestImage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test_interfaces__msg__TestImage * ros_message = (test_interfaces__msg__TestImage *)raw_ros_message;
  {  // rows
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rows);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rows", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cols
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cols);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cols", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elt_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->elt_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elt_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elt_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->elt_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elt_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // test_a
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->test_a);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "test_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mat_data
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mat_data.data,
      strlen(ros_message->mat_data.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mat_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
