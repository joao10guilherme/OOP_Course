#include "Vector.hpp"
#include <iostream>
#include <climits>
using namespace std;

Vector::Vector(int capacity) : size(0), capacity(capacity){
    cout << "constructor " << this << endl;
    data = new int[capacity];
}

// copy constructor
Vector::Vector(const Vector& other) : size(other.size), capacity(other.capacity){
    cout << "copy constructor " << this << endl;
    data = new int[capacity];

    // copy the elements from the vector other
    for(int i = 0; i < size; i++){
        data[i] = other.data[i];
    }
}

Vector::~Vector(){
    cout << "Destructor " << this << endl;
    if(data) delete [] data;
}

void Vector::push_back(int val){
    
    if(full()){
        AllocateMemory(capacity * 2);
    }
    
    data[size] = val;
    size++;
}

void Vector::print() const{
    cout << "[ ";
    for(int i = 0; i < size; i++){
        cout << data[i] << " ";
    }
    cout << "]\n";
}

bool Vector::full() const{
    return size == capacity;
}

void Vector::AllocateMemory(int new_capacity){
    
    capacity = new_capacity;

    // save the address of an old array
    int* old_data = data;

    // allocate the new memory
    data = new int[capacity];

    // copy the elements
    for(int i = 0; i < size; i++){
        data[i] = old_data[i];
    }

    // deallocate the old memory
    delete [] old_data;
}

bool Vector::empty() const{
    return (!data) ? true : false;
}

void Vector::pop_back(){
    if(empty()){
        return;
    }
    --size;

}

int Vector::at(int index) const{
    if(index < 0 || index >= size){
        cout << "at: out of boundaries\n";
        return INT_MIN;
    }
    return data[index];
}