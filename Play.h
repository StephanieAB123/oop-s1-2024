#ifndef PLAY_H
#define PLAY_H

#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"

#include <tuple> 
#include <cmath> 
#include <iostream>
#include <string> 
#include <random>
#include <vector>
#include <ctime> 
#include <cstdlib>

using namespace std;

class Play{ 
    private: 
        vector<Spot*> matrix;

    public: 
        vector<Spot*>& getMatrix(){
            return matrix;
        }
        void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight){

            

            //initializes the gameplay with a certain number of each object at random 
            //locations in the matrix
        }
        void playCycle(int maxCycles, double snareTriggerDistance){
            //runs the game for a certain number of cycles

            //in each cycle, shifts all Persona objects in the matrix to the right by 
            //calling the shift(1,0) function

            //checks for any Snare objects near each Persona
            //if a Snare object is within the snareTriggerDistance -> the Snare's implemtn function is called on the Persona

            //Check if any Persona has stepped outside of the matrix
            //if yes Persona WINS -> print "Persona has won the game!" -> end the game cycle

            //if maximum number of cycles is reached and no persona won -> print "Maximum number of cycles reached. Game over."
        }

};

#endif