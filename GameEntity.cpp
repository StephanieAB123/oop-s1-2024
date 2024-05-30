#include "GameEntity.h"

std::tuple<int, int> GameEntity::getPos(){
    return position;
}

char GameEntity::getType(){
    return type;
}