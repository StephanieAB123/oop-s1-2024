#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream> 
#include <string> 
#include <tuple> 
#include <cmath> 
#include <random> 

//represents a game entity with a position and a type. 



class GameEntity {

    protected:
        int x; // x position
        int y; // y position
        char type; // type character

    private:

        //position is stored as a std::tuple<int, int>, and the type is stored as a char
        std::tuple<int, int> position;
        char type;

    public:
        GameEntity(int x, int y, char entity_type) : position(std::make_tuple(x, y)), type(entity_type){}

        std::tuple<int, int> getPos();
        // {
        //     return position;
        // }

        char getType();

        //parameterized constructor
        GameEntity(int x, int y, char type) : x(x), y(y), type(type) {}

        //Getter functions
        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        char getType() const {
            return type;
        }

};

#endif