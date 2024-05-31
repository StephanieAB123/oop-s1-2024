#ifndef PERSONA_H
#define PERSONA_H

#include "Spot.h"

#include <tuple> 
#include <cmath> 
#include <iostream>
#include <string> 
#include <random>

class Persona : public Spot{ 

    public: 
        Persona(int x, int y) : Spot(x, y, 'P'){}
        
        //alter the persona's location
        void shift(int dx, int dy){
            setLoc(dx, dy);
        }
};

#endif