#include <iostream> 
#include <string> 

#include "wizard.h"

using namespace std;

int Wizard::getMana(){
    return mana;
}

void Wizard::setMana(int mana){
    this->mana = mana;
}

Wizard::Wizard() : Player(){
    setMana(1);
}

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage){
    setMana(mana);
}

void Wizard::castSpell(Player* opponent){

    //deals damage equal to its mana
    attack(opponent, getMana());

    //output a message describing the attack and the damage dealt to the opponent
    cout << getName() << " casts a spell on " << opponent->getName() << " for " << getMana() << " damage.\n";
}