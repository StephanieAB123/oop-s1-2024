#ifndef SNARE_H
#define SNARE_H


#include "Spot.h"
#include "Influence.h"

#include <tuple> 
#include <cmath> 
#include <iostream>
#include <string> 
#include <random>

class Snare : public Spot{ 

    private: 
        bool operative = true;

    public: 
        Snare(int x, int y) : Spot(x, y, 'S'){}
        
        bool isOperative(){
            //check if snare is still operative 
            return operative;
        }

        void implement(Spot& spot){
            operative = false;
            spot.setCategory('S');
        }
};

#endif