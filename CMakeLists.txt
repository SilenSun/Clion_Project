cmake_minimum_required(VERSION 3.10)
project(CPP)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP main.cpp Test_Thread.cpp Test_Thread.h Test_Pointer.cpp Test_Pointer.h)

find_package(Threads REQUIRED)
target_link_libraries(CPP Threads::Threads)