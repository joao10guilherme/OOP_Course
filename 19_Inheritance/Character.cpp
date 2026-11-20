#include <iostream>
#include <string>

class Character {
    public:
        Character(const std::string& name, int health);
        ~Character();
        int health;
        virtual void printInfo() const;
        // create name getter
        std::string getName() const{
            return name;
        }
    private:
        std::string name;
};

// Warrior is the child class
// Character is the parent class
class Warrior : public Character { // Warrior is the child class of Character class
    public:
        Warrior(const std::string& name, int health, int armor);
        ~Warrior();
        int armor;

        void battleCry() const{
            std::cout << getName() << " cries!!!\n";
        }

        void printInfo() const; // Redifine the behaviour of the base (parent) class
    private:
};

class EliteWarrior : public Warrior {
    public:
        EliteWarrior(const std::string& name, int health, int armor, int level);
        int level;
        void printInfo() const; // Redifine the behaviour of the base (parent) class
    private:
};

int main(void) {
    // Create a character object dynamically
    Character* character = new Character("John", 50);
    character->printInfo();

    // Create a Warrior object in the Stack memory
    Warrior warrior("Arthur", 100, 50);
    warrior.printInfo();
    EliteWarrior ew("Hercules", 80, 68, 5);
    Character* c = &ew;

    // Create an array of pointers to Characters
    Character* characters[3] = {character, &warrior, &ew};
    for (int i = 0; i < 3; i++) {
        characters[i]->printInfo();
    }
    delete character;
    return 0;
}

void Character::printInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
}

void Warrior::printInfo() const {
    // Call the base class method
    Character::printInfo();
    std::cout << "Armor: " << armor << std::endl;
}

Character::Character(const std::string& name, int health) : name(name), health(health) {
    std::cout << "Character constructor\n";
}

Warrior::Warrior(const std::string& name, int health, int armor) : Character(name, health), armor(armor) { // Character(name, health) - calling the base class constructor
    std::cout << "Warrior constructor\n";
}

Character::~Character() {
    std::cout << "Character destructor\n";
}

Warrior::~Warrior() {
    std::cout << "Warrior destructor\n";
}

EliteWarrior::EliteWarrior( const std::string& name, int health, int armor, int level) : Warrior(name, health, armor), level(level) {
}

void EliteWarrior::printInfo() const {
    // Call the base class method
    Warrior::printInfo();
    std::cout << "Level: " << level << std::endl;
}
