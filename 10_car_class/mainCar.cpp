#include <iostream>
#include "Car.hpp"
#include "CarDealer.hpp"
using namespace std;

int main(){
    //Create car object
    Car my_car;
    my_car.setMake("Ferrari");
    my_car.setModel("F50");
    my_car.setYear(2015);
    my_car.setMPG(10.2);

    //Create car dealer
    CarDealer ferrari_lakeland;
    //Create cars
    Car ferrari_spider("Ferrari", "Spider", 2005, 12.3);
    Car ferrari_superGT("Ferrari", "Super GT", 2024, 18.3);

    //Add cars to the inventory
    ferrari_lakeland.addCar(my_car);
    ferrari_lakeland.addCar(ferrari_spider);
    ferrari_lakeland.addCar(ferrari_superGT);

    //Get the inventory
    ferrari_lakeland.showInventory();
    
    for(int i = 0; i < 30; i++){cout << "-";}
    cout << "\n\n";
    
    ferrari_lakeland.printOldestCar();


    return 0;
}