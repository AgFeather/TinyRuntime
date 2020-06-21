# Try to find the pybind11 headers.
#  pybind11_FOUND        - system has pybind11
#  pybind11_INCLUDE_DIRS - the pybind11 include directory

#include(${PROJECT_SOURCE_DIR}/third_party/pybind11/share/cmake/pybind11/pybind11Config.cmake)
set(pybind11_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/third_party/pybind11/include)
set(pybind11_FOUND TRUE)

#if (NOT pybind11_INCLUDE_DIRS)
#  message(FATAL_ERROR "cannot find pybind")
#endif()

#include(FindPackageHandleStandardArgs)
#find_package_handle_standard_args(pybind11 FOUND_VAR pybind11_FOUND REQUIRED_VARS pybind11_INCLUDE_DIR)

#mark_as_advanced(pybind11_FOUND)
