#include "Student.hpp"
#include <iostream>
using namespace std;

int main(){

    Student Bob("Bob", 3.1);
    Student Alice("Alice", 2.1);
    Student Margaret("Margaret", 3.9);

    Bob.printStudentInfo();
    Alice.printStudentInfo();
    Margaret.printStudentInfo();

    for(int i = 1; i < 10; i++){
        Student test_student("test", 1.0);
    }
    
    cout << "\n\n";
    cout << "Required GPA: " << Student::getRequiredGPA() << endl; // Access static method
    cout << "Total number of students: " << Student::getTotalStudents() << endl;
    cout << "Average GPA: " << Student::getAverageGPA() << endl;
    
    return 0;
}