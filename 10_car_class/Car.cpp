#include <iostream>
#include <string>
#include "Car.hpp"
using namespace std;

Car::Car(){
    make = "-";
    model = '-';
    year = 1990;
    MPG = 0.0;
}

void Car::printInfo() const{
    cout << "Make:\t\t" << make << endl;
    cout << "Model:\t\t" << model << endl;
    cout << "Year:\t\t" << year << endl;
    cout << "MPG:\t\t" << MPG << endl;
}

// getters
string Car::getMake() const{
    return make;
}
string Car::getModel() const{
    return model;
}
int Car::getYear() const{
    return year;
}
double Car::getMPG() const{
    return MPG;
}
// setters
void Car::setMake(const string& m){
    make = m;
}
void Car::setModel(const string& mod){
    model = mod;
}
void Car::setYear(const int& y){
    if(y > 1900 && y <= 2026)
        year = y;
    else
        year = -1;
}
void Car::setMPG(const double& mpg){
    if(mpg > 0)
        MPG = mpg;
    else
        MPG = 0;
}