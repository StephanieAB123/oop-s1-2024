#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

#include <tuple> 
#include <cmath> 
#include <iostream>
#include <string> 
#include <random>

using namespace std;

int main(){

    //Generate random positions
    tuple<int, int> loc1 = Assists::createRandomLoc(1,1);
    tuple<int, int> loc2 = Assists::createRandomLoc(10,10);

    //prints out positions
    cout << "Random Location 1 = (" << get<0>(loc1) << ", " << get<1>(loc1) << ")" << endl;
    cout << "Random Location 2 = (" << get<0>(loc2) << ", " << get<1>(loc2) << ")" << endl;

    //calculate distance
    double distance = Assists::evaluateDistance(loc1, loc2);

    //prints out distance
    cout << "Distance between locations = " << distance << endl;

    return 0;
}