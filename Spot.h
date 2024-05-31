#ifndef SPOT_H
#define SPOT_H

using namespace std;

#include <tuple> 
#include <cmath> 
#include <iostream>
#include <string> 
#include <random>

//class
//portraying a single spot in a game matrix (the 2D grid)

class Spot{

    private:
        //spot's location
        tuple<int, int> location;

        //type of entity in the spot
        char category; 

    public:
        Spot(int x, int y, char category) : location(make_tuple(x,y)), category(category){}
        
        tuple<int, int> getLoc(){
            return location;
        }
        
        char getCategory(){
            return category;
        }
        
        void setLoc(int x, int y){
            get<0>(location) = x;
            get<1>(location) = y;
        }

        void setCategory(char category){
            this->category = category;
        }
};

#endif