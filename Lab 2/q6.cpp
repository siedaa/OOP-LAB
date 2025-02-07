#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    int marks[3];
};

Student* dynamicallyAllocateMemory(int n) {
    return new Student[n];
}

void inputDetails(Student* students, int n) {
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        getline(cin, students[i].name);

        cout << "Enter the roll number of student " << i + 1 << ": ";
        cin >> students[i].rollNumber;

        for (int j = 0; j < 3; j++) {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> students[i].marks[j];
        }
        cin.ignore();
    }
}

int calculateAverageMarks(Student* students, int index) {
    return (students[index].marks[0] + students[index].marks[1] + students[index].marks[2]) / 3;
}

void displayRecords(Student* students, int n) {
    cout << "\nStudent Records:\n";
    cout << "----------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Student #" << i + 1 << ":\n";
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Average Marks: " << calculateAverageMarks(students, i) << endl;
        cout << "----------------------------------------\n";
    }
}

void deallocateMemory(Student* students) {
    delete[] students;
    cout << "Memory successfully deallocated.\n";
}

int main() {
    int n;
    cout << "Enter the total number of students: ";
    cin >> n;

    Student* students = dynamicallyAllocateMemory(n);
    inputDetails(students, n);
    displayRecords(students, n);
    deallocateMemory(students);

    return 0;
}
