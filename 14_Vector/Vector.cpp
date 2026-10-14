#include "Vector.hpp"
#include <iostream>
using namespace std;

Vector::Vector(int capacity) : size(0){
    data = new int[capacity];
}

void Vector::push_back(int val){
    
    if(size > capacity){
        capacity *= 2;
        int* temp = new int[capacity];
        for(int i = 0; i < size; i++){
            temp[i] = data[i];
        }
        delete []data;
        data = temp;
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