# pragma once
#include<iostream>
using namespace std;

class course {
    protected:
    string coursecode;
    int credits;

    public:
    course (string coursecode ,int credits) : coursecode(coursecode), credits(credits) {}
    
    virtual void calculateGrade () =0;
    virtual void displayInfo () =0; // Pure virtual function
    virtual ~course(){}
};
