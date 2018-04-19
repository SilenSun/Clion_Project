#include <iostream>
#include "Test_Class_Object.h"
#include "Test_Thread.h"
//#include "../include/Test_Thread.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Test Class and Object Demo" << std::endl;
    box box1(10, 20, 30);
    box1.cal_Volume();
    std::cout << "Test Class and Object Demo" << std::endl;

    std::cout << "Test Thread Demo" << std::endl;
    test_Thread();
    std::cout << "Test Thread Demo" << std::endl;

    return 0;
}