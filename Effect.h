#ifndef EFFECT_H
#define EFFECT_H

#include <iostream> 
#include <string> 
#include <tuple> 
#include <cmath> 
#include <random> 

#include "GameEntity.h"

//an abstract base class with a pure virtual function apply

class Effect {
    public:
        //this function needs to be implemented in derived classes
        virtual void apply(GameEntity& entity) = 0;
};

#endif