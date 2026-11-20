#include <iostream>
using namespace std;

class Dad{
    public:
        Dad(){
            cout << "Dad construct.\n";
        }
        virtual ~Dad(){
            cout << "Dad destruct.\n";
        }
};

class Son : public Dad{
    public:
        Son(){
            cout << "Son's construct.\n";
            data = new int[100];
            cout << "Memory was allocated.\n";
        }
        ~Son() override{
            cout << "Son's destruct.\n";
            delete [] data;
            cout << "Memory was deallocated.\n";
        }

        int* data;
};

int main(){

    Dad* dad = new Dad;
    delete dad;

    return 0;
}