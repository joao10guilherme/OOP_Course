#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
using namespace std;

class Student{
public:
    Student(const string& n, double st_gpa);

    bool canGraduate() const;
    void printStudentInfo() const;
private:
    string name;
    double gpa;

    static double required_gpa; // Graduation requirement
};

#endif