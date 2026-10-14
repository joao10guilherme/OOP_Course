#include <iostream>
#include <string>
using namespace std;

class Hello{

public:

    Hello() : size(0), messages(nullptr){
        cout << "No argument constructor for " << this << endl;
    }
    // Constructor with arguments
    Hello(int size){
        
        this->size = size;
        
        // Create an array of string with 'size' elements
        // Store an array in messages pointer
        // Initialize elements of the array with random strings

        messages = new string [size];
        for(int i = 0; i < size; i++){
            messages[i] = (i % 2 == 0) ? "Welcome!" : "Good bye!";
        }

    }

    ~Hello(){
        cout << "The destructor for " << this << endl;
        if(messages != nullptr){
            delete [] messages; // Deallocate the memoryß
        }
    }

    void bye() const{
        cout << "Bye!!!\n\n";
    }

    void printMessages() const{
        for(int i = 0; i < size; i++){
            cout << messages[i] << "\n";
        }
    }

private:

    int size;
    string* messages;
};

int main(void){
    // Create an onject dynamically
    Hello* hi = new Hello();

    // Call bye method
    hi->bye(); // = *(hi).bye()

    Hello* hello = new Hello(5);
    hello->printMessages();

    // Delete the object (deallocate the memory)
    delete hi;
    delete hello;

    return 0;
}