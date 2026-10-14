#include "Vector.hpp"
#include <iostream>
using namespace std;

int main(){

    Vector v(100);

    v.print();

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    v.print();

    return 0;
}