#include <iostream>
#pragma once
using namespace std;
#include "course.h"

class labCourse : public course {
    public:
    labCourse(string coursecode, int credits) ;
    void calculateGrade();
    void displayInfo();
};
