#ifndef POINT_HPP
#define POINT_HPP

#include <string>
#include <vector>
using namespace std;

class Point{

public:

    Point(int x, int y);
    Point(int x, int y, const string& tag);
    string toString() const;

    // TODO
    ~Point();
    Point(const Point& other);
    Point& operator=(const Point& other);

    // Logical operator
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    // Subscript operator
    int& operator[](int index);

    // Arithmetic operator
    Point operator+(const Point& other);
    Point operator*(const Point& other);

    // Arithmetic assignment operator
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other);

    // Preincrement operator
    Point& operator++();
    // Postincrement operator
    Point operator++(int);

    // TODO decrement
    Point& operator--();
    Point operator--(int);

private:
    friend ostream& operator<<(ostream& out, const Point& point);
    friend istream& operator>>(istream& in, Point& point);
    int x, y;
    char* tag;
};

#endif