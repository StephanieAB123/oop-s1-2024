#ifndef ASSISTS_H
#define ASSISTS_H

#include <tuple> 
#include <cmath> 
#include <iostream>
#include <string> 
#include <random>

using namespace std;

class Assists{

    public:
        //returns a random position within a grid represented by
        static tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight){

            //a seed for random number generator
            random_device rd;

            //random number engine
            mt19937 gen(rd());

            //positions will be generated within the specified grid width & height
            //this is just to generate equal probability amongst the grid
            uniform_int_distribution<int> distribX(0, matrixWidth-1);
            uniform_int_distribution<int> distribY(0, matrixHeight-1);

            int x = distribX(gen);
            int y = distribY(gen);

            return make_tuple(x, y);
        }

        //returns Euclidean distance between two locations
        // d = sqrt[(x2-x1)^2 + (y2-y1)^2]
        static double evaluateDistance(tuple<int, int> loc1, tuple<int, int> loc2){
            
            //what is the whole point of this though?
            int x1; 
            int y1; 
            int x2;
            int y2;

            //unpack tuple values into separate values
            tie(x1, y1) = loc1;
            tie(x2, y2) = loc2;

            double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
            return distance;
        }

};


#endif