#ifndef UTILS_H
#define UTILS_H

#include <iostream> 
#include <string> 
#include <tuple> 
#include <cmath> 
#include <random> 

//contains static functions for generating random positions and calculating distances

class Utils {
    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
        
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};

#endif