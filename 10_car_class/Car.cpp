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

Car::Car(const std::string& m, const std::string& mdl, const int y, const double mpg){
    setMake(m);
    setModel(mdl);
    setYear(y);
    setMPG(mpg);
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
    year = (y >= 1900 && y <= 2026) ? y : 1900;
}
void Car::setMPG(const double& mpg){
    MPG = (mpg > 0.0) ? mpg : 0.0;
}