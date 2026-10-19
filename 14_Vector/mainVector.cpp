#include "Vector.hpp"
#include <iostream>
using namespace std;

void foo(Vector vec){
    cout << "foo function" << endl;
}

int main(){

    Vector v(100);

    v.print();

    for(int i = 0; i < 100; i++){
        v.push_back(i);
    }
    
    v.print();

    // foo(v);

    Vector v2 = v;
    cout << v2.at(1) << endl;

    return 0;
}