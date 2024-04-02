#include "warrior.h"
#include <iostream> 
#include <string.h>

Warrior::Warrior() : Player(){
    {weapon = "null";}
}

string Warrior::getWeapon(){
    return weapon;
}

void Warrior::setWeapon(string weapon){
    this->weapon = weapon;
}

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage){
    setWeapon(weapon);
}

void Warrior::swingWeapon(Player* opponent){
    //deals the same damage (the data member in the player class) regardless of the type of Weapon

    attack(opponent, getDamage());

    //output a message describing the attack and the damage dealt to the opponent
    cout << getName() << " swings their " << getWeapon() << " at " << opponent->getName() << "!\n";        
}