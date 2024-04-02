#include <iostream> 
#include <string>

using namespace std; 

class Player{
    private:
        string name;
        int health;
        int damage;
    public: 
        Player(string name, int health, int damage);
        void attack(Player* opponent, int damage){
            //
        }
        void takeDamage(int damage){
            //output a message describing how much damage the player took and their remaining health points

        }
    
};

class Wizard : Player{
    private: 
        int mana;
        string weapon;

    public: 
        void castSpell(Player* opponent){
            //output a message describing the attack and the damage dealt to the opponent
            cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
            //deals damage equal to its mana
        }

};

class Warrior : Player{
    private: 

    public:
        void swingWeapon(Player* opponent){
            //output a message describing the attack and the damage dealt to the opponent

            //deals the same damage (the data member in the player class) regardless of the type of Weapon

            cout << name << " swings their" << weapon << "at" << opponent->getName() << "!\n";         }
    
};

Player getHealth(){

}

Player setHealth(){

}
