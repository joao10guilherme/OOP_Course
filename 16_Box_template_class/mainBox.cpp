#include <iostream>
#include <string>
#include "Box.hpp"
using namespace std;

int main(){

    // Create Box object
    Box<int> box(100);
    Box<string> box_name("Joao");

    cout << box.getValue() << endl;
    cout << box_name.getValue() << endl;

    box_name.setValue("Guilherme");
    cout << box_name.getValue() << endl;

    return 0;
}