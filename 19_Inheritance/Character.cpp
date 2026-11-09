#include <iostream>
#include <string>
using namespace std;

// parent class
class Character{

public:
    string name;
    int health;

    void printInfo() const{
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
    }
private:

};

// child class
class Warrior : public Character{
public:
    int armor;

    // Redefine parents method
    void printInfo() const{
        // Call base class method
        Character::printInfo();
        cout << "Armor: " << armor << endl;
    }
private:

};

int main(){
    Character* character = new Character();
    character->name = "Carl";
    character->health = 100;

    character->printInfo();

    delete character;

    Warrior warrior;
    warrior.name = "Arthur";
    warrior.armor = 50;
    warrior.health = 150;
    warrior.printInfo();

    return 0;
}