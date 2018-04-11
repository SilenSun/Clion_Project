#The minimum version of cmake
cmake_minimum_required(VERSION 3.9)

#The name of the project: project(projectname [cxx] [c] [java])
# _BINARY_DIR  / _SOURCE_DIR
# CPP_BINARY_DIR  PROJECT_BINARY_DIR
# CPP_SOURCE_DIR  PROJECT_SOURCE_DIR
project(CPP)

#C++ standard: C++98, C++11, C++14, C++17 or others
set(CMAKE_CXX_STANDARD 98)

set(SOURCE_LIST src/main.cpp src/Test_Thread.cpp include/Test_Thread.h src/Test_Pointer.cpp include/Test_Pointer.h)
add_executable(CPP ${SOURCE_LIST})


# Use Thread
find_package(Threads REQUIRED)
target_link_libraries(CPP Threads::Threads)

#SET(CMAKE_BUILE_TYPE DEBUG) #the type of building
#SET(CMAKE_C_FLAGS_DEBUG “-g -Wall”)
#   C builder:   CMAKE_C_FLAGS_DEBUG
#   C++ builder: CMAKE_CXX_FLAGS_DEBUG
