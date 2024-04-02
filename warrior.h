#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"

class Warrior : public Player{
    private: 
        string weapon;

    public:

        Warrior();
        //{weapon = "null";}

        string getWeapon();
        // {
        //     return weapon;
        // }

        void setWeapon(string weapon);
        // {
        //     this->weapon = weapon;
        // }

        Warrior(string name, int health, int damage, string weapon);
        // {
        //     setWeapon(weapon);
        // }

        void swingWeapon(Player* opponent);
        // {
        //     //deals the same damage (the data member in the player class) regardless of the type of Weapon

        //     attack(opponent, getDamage());

        //     //output a message describing the attack and the damage dealt to the opponent
        //     cout << getName() << " swings their " << getWeapon() << " at " << opponent->getName() << "!\n";        
        // }
    
};

#endif