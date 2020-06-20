cmake_minimum_required(VERSION 3.2)
PROJECT(TinyRuntime)

#enable C++11
set(CMAKE_CXX_STANDARD 11)


# find python
find_package(PythonInterp 3.5 REQUIRED)
find_package(PythonLibs 3.5 REQUIRED)
find_package(Python)
#find_package(pybind11)


# 头文件目录
INCLUDE_DIRECTORIES(
include
)
# 源文件目录
AUX_SOURCE_DIRECTORY(src DIR_SRCS)

ADD_EXECUTABLE(mytest test/test_session.cc ${DIR_SRCS})

