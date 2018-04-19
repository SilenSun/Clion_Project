//
// Created by silen on 4/19/18.
//
#include <iostream>
#include "Test_Class_Object.h"

box::box(double breadth, double width, double height) {
    box::breadth = breadth;
    box::width   = width;
    box::height  = height;
}

void box::set_Breadth(double breadth) {
    box::breadth = breadth;
    std::cout << "set breadth: " << box::breadth << std::endl;
}

void box::set_Height(double height) {
    box::height = height;
    std::cout << "set height: " << box::height << std::endl;
}

void box::set_Width(double width) {
    box::width = width;
    std::cout << "set width: " << box::width << std::endl;
}
double box::cal_Volume(void) {
    box::volume = box::height * box::breadth * box::width;
    std::cout << "volume: " << box::volume << std::endl;
    return box::volume;
}