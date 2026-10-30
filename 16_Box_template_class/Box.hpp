#ifndef BOX_HPP
#define BOX_HPP

// Template class
template <typename T>

class Box{

public:
    Box(const T& v) : value(v){}

    const T& getValue() const;
    void setValue(const T& v);

private:
    T value;

};

#include "Box.tpp"

#endif