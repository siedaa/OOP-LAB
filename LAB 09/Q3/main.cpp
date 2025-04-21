#include<iostream>
#include "labcourse.h"
#include "lecture.h"
#include "course.h"
using namespace std;

int main () {

    course * c;
    c= new lectureCourse("CS101", 3);
    c->calculateGrade();
    c->displayInfo();
    delete c; // Free the allocated memory

    c=new labCourse("CS102", 4);
    c->calculateGrade();
    c->displayInfo();
    delete c; // Free the allocated memory
};
    
