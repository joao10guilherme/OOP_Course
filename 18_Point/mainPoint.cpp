#include "Point.hpp"
#include <iostream>
using namespace std;

int main(){

    Point p1(2,3,"p1");
    Point p2(6,5,"p2");

    // ++p1;
    // cout << p1.toString() << endl;

    // Point p3 = p1++ + ++p2;
    // cout << p1.toString() << endl;
    // cout << p2.toString() << endl;
    // cout << p3.toString() << endl;

    p1 = p2;
    cout << p1 << endl;

    Point p3(0, 0, "");
    cin >> p3;
    cout << p3;


    return 0;
}