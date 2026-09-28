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
};

#endif