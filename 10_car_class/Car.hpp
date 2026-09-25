#include<string>

class Car{
public:
    Car(); // no-arg constructor
    void printInfo() const;
    //TODO - implement setters and getters

    // getters
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    // setters
    void setMake(const std::string& make);
    void setModel(const std::string& model);
    void setYear(const int& year);
    void setMPG(const double& mpg);
private:
    std::string make;
    std::string model;
    int year;
    double MPG;
};
