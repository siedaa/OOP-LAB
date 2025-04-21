#include <iostream>
using namespace std;
#include "course.h"
#include "labcourse.h"


    labCourse:: labCourse(string coursecode, int credits) : course(coursecode, credits) {
        // Constructor implementation
    }
    void labCourse:: calculateGrade()  {
        // Grade calculation logic
        cout << "Calculating grade for lab course: " << coursecode << endl;
        cout << "Credits: " << credits << endl;
      
    }
    void labCourse:: displayInfo() {
        // Display course information
        cout << "Lab Course Code: " << coursecode << endl;
        cout << "Credits: " << credits << endl;
        
    }
