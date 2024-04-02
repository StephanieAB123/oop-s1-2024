#ifndef PLAYER_H
#define PLAYER_H

#include <iostream> 
#include <string.h>

using namespace std; 

class Player{
    private:
        string name;
        int health;
        int damage;
    public: 

        Player();

        Player(string name, int health, int damage);

        void attack(Player* opponent, int damageWAA);

        void takeDamage(int moreDamage);

        string getName();

        int getHealth();

        void setHealth(int health);

        int getDamage();
        //void setDamage(int damage){
        //    this-> damage = damage;
        //}
};

#endif