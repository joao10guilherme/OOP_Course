// Inclusion guard
#ifndef CAR_HPP
#define CAR_HPP

#include<string>

class Car{
public:
    Car(); // no-arg constructor
    Car(const std::string& m, const std::string& mdl, const int y, const double mpg);
    void printInfo() const;
    //TODO - implement setters and getters

    // getters
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    double getMileage() const;
    double getFuel_capacity() const;
    double getFuel_level() const;
    // setters
    void setMake(const std::string& m);
    void setModel(const std::string& mod);
    void setYear(const int& y);
    void setMPG(const double& mpg);
private:
    std::string make;
    std::string model;
    int year;
    double MPG;
    double mileage;
    double fuel_capacity;
    double fuel_level;
};

#endif