#include <iostream>
using namespace std;

namespace student {
    int id;
}

namespace course {
    int id;
}

int main(){

    cout << "Enter Student ID: ";
    cin >> student::id;
    cout << "Enter course ID: ";
    cin >> course::id;
    
    cout << "--- Registration Information ---" << endl;
    cout << "Student ID: " << student::id << endl;
    cout << "Couse ID: " << course::id << endl;

    return 0;
}