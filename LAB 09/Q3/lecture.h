#include <iostream>
#pragma once
using namespace std;
#include "course.h"

class lectureCourse : public course {
    public:
    lectureCourse(string coursecode, int credits) ;
    void calculateGrade() ;
    void displayInfo();
};
