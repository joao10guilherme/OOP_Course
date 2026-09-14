#include <iostream>
using namespace std;

int add(int a, int b) {return a + b;}
int subtract(int a, int b){return a - b;}

// Function that takes a fucntion pointer
int operate(int a, int b, int (*operation)(int, int)){
    return operation(a,b);
}

int main(){

    cout << "Addition: " << operate(10, 13, add) << endl;
    cout << "Addition: " << operate(10, 13, subtract) << endl;

    return 0;
}