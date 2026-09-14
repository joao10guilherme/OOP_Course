#include <iostream>
using namespace std;

int main(){

    int num = 42;
    double speed = 65.3;
    
    void* ptr = nullptr; // Define a void pointer

    ptr = &num; // ptr points to num

    cout << "Int value via void* " << *(static_cast<int*>(ptr)) << endl; // converts void ptr to int ptr

    ptr = &speed;

    cout << "Double value via void* " << *(static_cast<double*>(ptr)) << endl; // converts void ptr to double ptr

    return 0;
}