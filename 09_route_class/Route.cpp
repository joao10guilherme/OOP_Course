#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>
using namespace std;

class Route{

public:

    // constructor - is called when the object is created
    // constructor has the same name as the class and has no return type (even no void)
    Route(const string& src, const string& dest, const string& tran = "Car");

    void print() const;

    // Getters (accessor functions)
    string getSource() const;
    string getDestination() const;
    string getTransport() const;
    int getLength() const;
    // Setters (mutator functions)
    void setSource(const string& src);
    void setDestination(const string& dest);
    void setTransport(const string& tran);
    void setLength(const int& len);

private:
    
    void updateLength(){
        // Complex function that calculates the distance between 2 places
        length = rand() % 1000 + 100;
    }

    string source;
    string destination;
    string transport;
    int length;

};

int main(){

    srand(time(0));

    // create the route
    Route trip("Lakeland", "Orlando");
    // trip.source = "Lakeland";
    // trip.destination = "Orlando";
    // trip.length = 40;
    trip.print();

    Route summer_trip("Lakeland", "Key West", "Plane");
    summer_trip.print();
    summer_trip.setDestination("New York");

    return 0;
}

Route::Route(const string& src, const string& dest, const string& tran = "Car"){
    source = src;
    destination = dest;
    transport = tran;
    updateLength();
}

void Route::print() const{
    cout << "{ " << source << " -> " << destination << ", " << transport << ", " << length << " }\n";
}

// Getters (accessor functions)
string Route::getSource() const { // const method cannot change the attributes
    return source;
}
string Route::getDestination() const {
    return destination;
}
string Route::getTransport() const {
    return transport;
}
int Route::getLength() const {
    return length;
}
// Setters (mutator functions)
void Route::setSource(const string& src){
    source = src;
    updateLength();
}
void Route::setDestination(const string& dest){
    source = dest;
    updateLength();
}
void Route::setTransport(const string& tran){
    transport = tran;
}
void Route::setLength(const int& len){
    length = len;
}