#include "Student.hpp"
#include <iostream>
using namespace std;

// Initialize static property (REQUIRED)
double Student::required_gpa = 2.5;

Student::Student(const string& n, double st_gpa) : name(n), gpa(st_gpa){}// initializer list -> only works for the constructor

bool Student::canGraduate() const{
    return gpa >= required_gpa;
}

void Student::printStudentInfo() const{
    cout << "Name: " << name << " | GPA: " << gpa;
    cout << " | Can gratuate: " << (canGraduate() ? "YES" : "NO") << endl;
}