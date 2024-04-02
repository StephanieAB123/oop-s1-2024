#include <iostream>
#include <string>
#include "player.h"

using namespace std;

Player::Player(){
    name = "null";
    health = 0;
    damage = 0;
}


Player::Player(string name, int health, int damage){
    this->name = name; 
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent, int damageWAA){
    //warrior deals the same damage (the data member in the player class. Regardless of weapon.)
    opponent->takeDamage(damageWAA); 
}

void Player::takeDamage(int moreDamage){
    this->health -= moreDamage;
    //output a message describing how much damage the player took and their remaining health points
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

string Player::getName(){
    return this-> name;
}

int Player::getHealth(){
    return this-> health;
}

void Player::setHealth(int health){
    this-> health = health;
}  

int Player::getDamage(){
    return this-> damage;
}
