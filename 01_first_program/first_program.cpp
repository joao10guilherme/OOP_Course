#include <iostream>
using namespace std;

// create the namespace
namespace oop {
    int courseID = 3337;
}

namespace intro {
    int courseID = 2271;
}

int main(){

    cout << "Hello COP" << oop::courseID << endl;

    // std - standard namepsace
    // :: - scope resolution operator
    // cout - console output

    return 0;
}