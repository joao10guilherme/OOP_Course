#ifndef POINT_HPP
#define POINT_HPP

#include <string>
#include <vector>
using namespace std;

class Point{

public:

    Point(int x, int y);
    string toString() const;

    // Logical operator
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    // Subscript operator
    int& operator[](int index);

    // Arithmetic operator
    Point operator+(const Point& other);
    Point operator*(const Point& other);

private:
    int x, y;
};

#endif