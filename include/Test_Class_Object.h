//
// Created by silen on 4/19/18.
//

#ifndef CPP_TEST_CLASS_OBJECT_H
#define CPP_TEST_CLASS_OBJECT_H

class box {
    private:
        double height;
        double width;
        double breadth;
        double volume;
    public:
        box(double height, double width, double breadth);
        void set_Height(double);
        void set_Width(double);
        void set_Breadth(double);
        double cal_Volume(void);
};

#endif //CPP_TEST_CLASS_OBJECT_H

