#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard : public Player{
    private: 
        int mana;
    public: 
        int getMana();
        // {
        //     return mana;
        // }

        void setMana(int mana);
        // {
        //     this->mana = mana;
        // }

        Wizard();
        // {
        //     setMana(1);
        // }

        Wizard(string name, int health, int damage, int mana);
        //  : Player(name, health, damage){
        //     setMana(mana);
        // }

        void castSpell(Player* opponent);
        // {

        //     //deals damage equal to its mana
        //     attack(opponent, getMana());

        //     //output a message describing the attack and the damage dealt to the opponent
        //     cout << getName() << " casts a spell on " << opponent->getName() << " for " << getMana() << " damage.\n";
        // }
};

#endif