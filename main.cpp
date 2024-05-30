#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

#include <iostream> 
#include <string> 
#include <tuple> 
#include <cmath> 
#include <random>

using namespace std;

int main(){
    //Generate random positions and calculate distances
    tuple<int, int> pos1 = Utils::generateRandomPos(10,10);
    tuple<int, int> pos2 = Utils::generateRandomPos(10,10);

    cout << "Random Position 1: (" << get<0>(pos1) << ", " << get<1>(pos1) << ")" << endl;
    cout << "Random Position 2: (" << get<0>(pos2) << ", " << get<1>(pos2) << ")" << endl;

    double distance = Utils::calculateDistance(pos1, pos2);

    cout << "Distance between positions: " << distance << endl;

    return 0;
}