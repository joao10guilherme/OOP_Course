#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector{

public:

    Vector(int capacity = 10);

    ~Vector();

    // create a copy constructor
    Vector(const Vector& other);

    void push_back(int val);

    void pop_back(); // delete the last element from the vector

    int at(int index) const; // returns the value at the given index

    void print() const;

    bool full() const;

    bool empty() const;

private:

    void AllocateMemory(int new_capacity); // Allocate a new array of a given capacity

    int* data;    // array of int elements
    int size;     // the number of elements in the array
    int capacity; // the max number of elements array can hold
};

#endif