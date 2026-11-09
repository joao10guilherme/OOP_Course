#include "Point.hpp"
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

Point::Point(int x = 0, int y = 0) : x(x), y(y){

}

Point::Point(int x = 0, int y = 0, const string& tag = "empty") : x(x), y(y){
    this->tag = new char[tag.size() + 1];
    strcpy(this->tag, tag.c_str());
}

Point::Point(const Point& other){
    x = other.x;
    y = other.y;
}

Point::~Point(){
    delete [] tag;
}

string Point::toString() const{
    return string(tag) + ": (" + to_string(x) + ", " + to_string(y) + ")";
}

bool Point::operator==(const Point& other){
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other){
    // return x != other.x || y != other.y;   

    return !(*this == other);
}

int& Point::operator[](int index){
    if(index == 0){
        return x;
    }else{
        return y;
    }
}

Point Point::operator+(const Point& other){
    return Point(x + other.x, y + other.y, tag);
}

Point Point::operator*(const Point& other){
    return Point(x * other.x, y * other.y, tag);
}

Point& Point::operator=(const Point& other){
    
    if(this != &other){
        char* newTag = new char[strlen(other.tag) + 1];
        strcpy(newTag, other.tag);

        delete [] tag;
        tag = newTag;

        x = other.x;
        y = other.y;
    }
    
    return *this;
}

Point& Point::operator++(){
    x += 1;
    y += 1;
    return *this;
}

Point Point::operator++(int){
    // create the copy of the current point
    Point temp(*this);
    x += 1;
    y += 1;
    return temp;
}

Point& Point::operator+=(const Point& other){
    // this->x += other.x;
    // this->y += other.y;

    *this = *this + other;

    return *this;
}

Point& Point::operator*=(const Point& other){
    *this = *this * other;
    return *this;
}

Point& Point::operator--(){
    x--;
    y--;
    return *this;
}

Point Point::operator--(int){
    Point temp(*this);
    x--;
    y--;
    return temp;
}

// overloading operators as non-member functions
ostream& operator<<(ostream& out, const Point& point){
    // out << point.toString() << endl;
    out << "x: " << point.x << endl;
    out << "y: " << point.y << endl;
    out << "tag: " << point.tag << endl;
    return out;
}

istream& operator>>(istream& in, Point& point){

    cout << "Enter x, y, and tag for the point: \n";
    
    string temp;
    in >> point.x >> point.y >> temp;

    delete [] point.tag;

    point.tag = new char[temp.size() + 1];
    strcpy(point.tag, temp.c_str());

    return in;
}