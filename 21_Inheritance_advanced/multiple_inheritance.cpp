#include <iostream>
using namespace std;

class Vehicle{
    public:
        int vehicle_id = 100;
        Vehicle(){
            cout << "vehicle construct\n";
        }
};

class Car : virtual public Vehicle{
    public:
        int wheels = 4;
        Car(){
            cout << "car construct\n";
        }
        void drive() const{
            cout << "Driving!\n";
        }
};

class Aircraft : virtual public Vehicle{
    public:
        int wings = 2;
        Aircraft(){
            cout << "aircraft construct\n";
        }
        void fly() const{
            cout << "flying!\n";
        }
};

class FlyingCar : public Car, public Aircraft{

};

int main(){

    FlyingCar tesla_roadster;
    tesla_roadster.drive();
    tesla_roadster.fly();
    cout << "ID: " << tesla_roadster.vehicle_id << " Wheels: " << tesla_roadster.wheels << " Wings: " << tesla_roadster.wings;

    return 0;
}