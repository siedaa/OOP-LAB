#include <iostream>
using namespace std;
#include "lecture.h"
#include "course.h"


    lectureCourse:: lectureCourse(string coursecode, int credits) : course(coursecode, credits) {
        // Constructor implementation
    }
    void lectureCourse:: calculateGrade() {
        // Grade calculation logic
        cout << "Calculating grade for lecture course: " << coursecode << endl;
        cout << "Credits: " << credits << endl;
      
    }
    void lectureCourse:: displayInfo() {
        // Display course information
        cout << "Lecture Course Code: " << coursecode << endl;
        cout << "Credits: " << credits << endl;
        
    }
