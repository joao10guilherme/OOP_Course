#include <iostream>
#include <string>
using namespace std;

class Route{
public:
    // constructor - is called when the object is created
    // constructor has the same name as the class and has no return type (even no void)
    Route(const string& src, const string& dest, int len){
        source = src;
        destination = dest;
        length = len;
    }

    void print(){
        cout << "{ " << source << " -> " << destination << ", " << length << " }\n";
    }

    // Getters (accessor functions)
    string getSource(){
        return source;
    }
    string getDestination(){
        return destination;
    }
    int getLength(){
        return length;
    }

    // Setters (mutator functions)
    void setSource(const string& src){
        source = src;
    }
    void setDestination(const string& dest){
        source = dest;
    }
    void setLength(const int& len){
        length = len;
    }

private:
        string source;
        string destination;
        int length;

};

int main(){

    // create the route
    Route trip("Lakeland", "Orlando", 40);
    // trip.source = "Lakeland";
    // trip.destination = "Orlando";
    // trip.length = 40;
    trip.print();

    Route summer_trip("Lakeland", "Key West", 400);

    return 0;
}