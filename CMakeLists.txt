#The minimum version of cmake
CMAKE_MINIMUM_REQUIRED(VERSION 3.9)

#The name of the project: project(projectname [cxx] [c] [java])
# _BINARY_DIR  / _SOURCE_DIR
# CPP_BINARY_DIR  PROJECT_BINARY_DIR
# CPP_SOURCE_DIR  PROJECT_SOURCE_DIR
PROJECT(CPP)

#C++ standard: C++98, C++11, C++14, C++17 or others
SET(CMAKE_CXX_STANDARD 98)

SET(SOURCE_LIST
        src/main.cpp

        src/Test_Thread.cpp         #include/Test_Thread.h
        src/Test_Pointer.cpp        #include/Test_Pointer.h
        src/Test_Smart_Ptr.cpp      #include/Test_Smart_Ptr.h
        src/Test_Class_Object.cpp   #Test_Class_Object.h
    )

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)

ADD_EXECUTABLE(CPP ${SOURCE_LIST})


# Use Thread
FIND_PACKAGE(Threads REQUIRED)
TARGET_LINK_LIBRARIES(CPP Threads::Threads)

#SET(CMAKE_BUILE_TYPE DEBUG) #the type of building
#SET(CMAKE_C_FLAGS_DEBUG “-g -Wall”)
#   C builder:   CMAKE_C_FLAGS_DEBUG
#   C++ builder: CMAKE_CXX_FLAGS_DEBUG
