#include "Point.hpp"
#include <string>
using namespace std;

Point::Point(int x, int y) : x(x), y(y){

}

string Point::toString() const{
    return "(" + to_string(x) + ", " + to_string(y) + ")";
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
    return Point(x + other.x, y + other.y);
}

Point Point::operator*(const Point& other){
    return Point(x * other.x, y * other.y);
}