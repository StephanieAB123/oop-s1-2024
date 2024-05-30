//inherits from GameEntity and Effect

//Base class: GameEntity

#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <iostream>

class GameEntity {
    protected:
        int x; // x position
        int y; // y position
        char type; // type character

    public:
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

//Derived class: Explosion

class Explosion : public GameEntity{ 
    public: 
        //Parameterized constructor
        Explosion(int x, int y) : GameEntity(x, y, 'E'){

        }

        //Function to appl explosion effect to a GameEntity
        void apply(GameEntity& entity){
            entity.x = -1;
            entity.y = -1;
            entity.type = 'X';
        }
};

#endif