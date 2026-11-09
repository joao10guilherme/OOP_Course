#include "Point.hpp"
#include <iostream>

class LineSegment{

public:
    LineSegment();
private:
    friend ostream& operator<<(ostream& out, const LineSegment& ls);
    friend istream& operator>>(istream& in, LineSegment& ls);
    Point start;
    Point end;
};

ostream& operator<<(ostream& out, const LineSegment& ls){
    cout << "Start: " << ls.start;
    cout << "End: " << ls.end;
    return out;
}

istream& operator>>(istream& in, LineSegment& ls){
    cout << "Enter the start point: ";
    in >> ls.start;
    cout << "Enter the end point: ";
    in >> ls.end;
    return in;
}

int main(){
    
    LineSegment ls;

    cin >> ls;
    cout << ls;

    return 0;
}