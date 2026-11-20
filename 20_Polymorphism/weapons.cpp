#include <iostream>

class Weapon{
public:
    virtual void use() = 0; // Pure virtual function
    // Class that has at least one pure virtual function is an abstract class
    // You cannot create an object of an abstract class
};

class Gun : public Weapon {
public:
    int bullets;
    int magazine;
    Gun(int magazine = 10) : magazine(magazine), bullets(magazine) {
    }

    void use() override{
        if (bullets > 0) {
            std::cout << "BANG!" << std::endl;
            bullets--;
        }else {
            std::cout << "CLICK!" << std::endl;
        }
    }

    void reload(int amount) {
        if (amount <= 0) return;
        int available = magazine - bullets;
        if (amount > available)
            amount = available;
        bullets += amount;
    }
};

class MachineGun : public Gun {
public:
    MachineGun(int magazine = 20) : Gun(magazine) {
    }

    void use() override {
        if (bullets == 0) {
            std::cout << "CLICK!" << std::endl;
            return;
        }
        while (bullets > 0) {
            std::cout << "BANG! ";
            bullets--;
        }
        std::cout << "\n";
    }
};

class Knife : public Weapon{
public:
    Knife(bool is_stainless = false) : is_stainless(is_stainless){

    }
    void use() override{
        std::cout << "SLASH!" << std::endl;
    }
    bool getIsStainless() const{
        return is_stainless;
    }
private:
    bool is_stainless;
};

class RPG : public Weapon{
public:
    int rockets = 5;
    int rockets_cap = 5;
    void use() override{
        if (rockets == 0) {
            std::cout << "CLICK!" << std::endl;
            return;
        }
        while (rockets > 0) {
            std::cout << "BOOM! ";
            rockets--;
        }
        std::cout << "\n";
    }
    void reload(int amount) {
        if (amount <= 0) return;
        int available = rockets_cap - rockets;
        if (amount > available)
            amount = available;
        rockets += amount;
    }
};

class Player {
public:
    void useWeapon(Weapon& weapon){
        // Cast the weapon to the derived class (downcasting)
        Knife* knife = dynamic_cast<Knife*>(&weapon);

        if(knife == nullptr){
            std::cout << "Not a knife!\n";
        }else if(!knife->getIsStainless()){
            std::cout << "Cannot use this knife!\n";
            return;
        }
        weapon.use();
    }
    void reload(Gun& gun, int bullets) {
        gun.reload(bullets);
    }
};

int main(void) {
    Gun revolver;
    MachineGun machineGun;
    Knife knife_stainless(true);
    Knife knife_non_stainless(false);
    RPG rpg;
    // Weapon weapon; -> Compilation error
    Player player;
    player.useWeapon(revolver);
    player.useWeapon(machineGun);
    player.useWeapon(machineGun);
    player.reload(machineGun, 5);
    player.useWeapon(machineGun);
    player.useWeapon(rpg);

    player.useWeapon(knife_stainless);
    player.useWeapon(knife_non_stainless);

    return 0;
}