#ifndef CARDEALER_HPP
#define CARDEALER_HPP

#include<vector>
#include "Car.hpp"
using namespace std;

class CarDealer{
public:
    void addCar(const Car& car); // adds the car to the inventory
    void showInventory() const;
    void printOldestCar() const;
private:
    vector<Car> inventory;
};

#endif