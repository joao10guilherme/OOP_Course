#include "CarDealer.hpp"
#include<iostream>
using namespace std;

void CarDealer::addCar(const Car& car){
    inventory.push_back(car);
}

void CarDealer::showInventory() const{
    cout << "Inventory of Car Dealer:\n\n";
    cout << "----------------------\n";
    int count = 0;
    for(int i = 0; i < inventory.size(); i++){
        inventory[i].printInfo();
        count++;
        cout << "----------------------\n";
    }
    cout << "Total number of cars in inventory: " << count << "\n\n";
}

void CarDealer::printOldestCar() const{
    Car temp = inventory[0];
    for(Car car : inventory){
        if(car.getYear() < temp.getYear()){
            temp = car;
        }
    }

    cout << "Oldest car in inventory: " << temp.getModel() << "\n\n";
}
