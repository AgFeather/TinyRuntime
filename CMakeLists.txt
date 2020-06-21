cmake_minimum_required(VERSION 3.2)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

PROJECT(TinyRuntime CXX C)

set(TINY_RUNTIME_ROOT ${PROJECT_SOURCE_DIR})
#enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(THIRD_PARTY_PATH "${CMAKE_BINARY_DIR}/third_party" CACHE STRING
    "A path setting third party libraries download & build directories.")	
set(pybind11_DIR "${PROJECT_SOURCE_DIR}/third_party")

# find python
set(Python3_FIND_VIRTUALENV "FIRST")
find_package(PythonInterp 3.5 REQUIRED)
find_package(PythonLibs 3.5 REQUIRED)
find_package(Python)
find_package(pybind11)

# build protobuf
set(protobuf_BUILD_TESTS OFF CACHE BOOL "build protobuf tests" FORCE)
add_subdirectory(${PROJECT_SOURCE_DIR}/third_party/protobuf/cmake EXCLUDE_FROM_ALL)

# build onnx
set(BUILD_ONNX_PYTHON ON CACHE BOOL "build python binaries")
set(ONNX_GEN_PB_TYPE_STUBS OFF CACHE BOOL "generate protobuf python type stubs")
set(ONNX_ML ON CACHE BOOL "enable traditional ML API")
add_subdirectory(onnx)
target_compile_options(onnx PRIVATE "-Wno-unused-parameter")
target_compile_options(onnx_proto PRIVATE "-Wno-unused-parameter")
target_compile_options(onnx PRIVATE "-Wno-unused-but-set-variable")
target_compile_options(onnx_proto PRIVATE "-Wno-unused-but-set-variable")

# 头文件目录
INCLUDE_DIRECTORIES(
include
)
# 源文件目录
AUX_SOURCE_DIRECTORY(src DIR_SRCS)

ADD_EXECUTABLE(mytest test/test_session.cc ${DIR_SRCS})

