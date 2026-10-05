#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
using namespace std;

class Student{
public:
    Student(const string& n, double st_gpa);

    bool canGraduate() const;
    void printStudentInfo() const;
    
    static double getRequiredGPA(); // can never be constant
    static int getTotalStudents();
    static double getAverageGPA();
    static void setGraduationRequirement(double rgpa);
private:
    string name;
    double gpa;
    string id;

    static double required_gpa; // Graduation requirement
    static int total_students;  // The total num
    static int next_id;         // Generate unique student id
    static double total_gpa;
};

#endif