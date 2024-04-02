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

        Player(){
            name = "null";
            health = 0;
            damage = 0;
        };

        Player(string name, int health, int damage){
            this->name = name; 
            this->health = health;
            this->damage = damage;
        }

        void attack(Player* opponent, int damageWAA){
            //warrior deals the same damage (the data member in the player class. Regardless of weapon.)
            opponent->takeDamage(damageWAA); 
        }

        void takeDamage(int moreDamage){
            this->health -= moreDamage;
            //output a message describing how much damage the player took and their remaining health points
            cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
        }

        string getName(){
            return this-> name;
        }

        int getHealth(){
            return this-> health;
        }

        void setHealth(int health){
            this-> health = health;
        }  

        int getDamage(){
            return this-> damage;
        }
        //void setDamage(int damage){
        //    this-> damage = damage;
        //}
};

#endif