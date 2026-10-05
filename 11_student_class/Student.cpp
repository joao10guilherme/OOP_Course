#include "Student.hpp"
#include <iostream>
using namespace std;

// Initialize static property (REQUIRED)
double Student::required_gpa = 2.5;
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::total_gpa = 0.0;

Student::Student(const string& n, double st_gpa) : name(n), gpa(st_gpa){
    total_students++;
    id = "B000" + to_string(next_id);
    next_id += 5;
    total_gpa += st_gpa;
}// initializer list -> only works for the constructor

bool Student::canGraduate() const{
    return gpa >= required_gpa;
}

void Student::printStudentInfo() const{
    cout << "Name: " << name << " | GPA: " << gpa;
    cout << " | Can gratuate: " << (canGraduate() ? "YES" : "NO");
    cout << " | ID: " << id << endl;
}

double Student::getRequiredGPA(){
    return required_gpa;
}

int Student::getTotalStudents(){
    return total_students;
}

double Student::getAverageGPA(){
    return total_gpa/total_students;
}

void Student::setGraduationRequirement(double rgpa){
    required_gpa = (rgpa >= 2.5 && rgpa <= 4.0) ? rgpa : required_gpa;
}