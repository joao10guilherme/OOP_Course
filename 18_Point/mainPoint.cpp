#include "Point.hpp"
#include <iostream>
using namespace std;

int main(){

    Point p1(2,3);
    Point p2(6,5);
    Point p3(87,88);

    cout << p3.toString() << endl;

    if(p1 != p2){
        cout << (char) p3[0];
    }else{
        cout << (char) p3[1];
    }

    p1[0] = 40 + 44;
    cout << (char) p1[0];

    p1[1] = p1[1] + 3;
    p2[1] = p2[1] + 4;
    Point p4 = p1 * p2;
    cout << (char)(p4[1]-2);

    cout << "TU";
    return 0;
}