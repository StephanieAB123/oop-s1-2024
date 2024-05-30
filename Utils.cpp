#include "Utils.h"

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight){

    //Used to obtain a seed for the random number generator
    std::random_device rd;

    //Used as the random number engine
    std::mt19937 gen(rd());

    //Positions will be generated within the specified grid width & height
    std::uniform_int_distribution<int> distribX(0, gridWidth - 1);
    std::uniform_int_distribution<int> distribY(0, gridHeight - 1);

    int x = distribX(gen);
    int y = distribY(gen);

    return std::make_tuple(x, y);
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
    int x1, y1, x2, y2;
    std::tie(x1, y1) = pos1;
    std::tie(x2, y2) = pos2;

    double distance = std::sqrt(pow(x2 - x1, 2) + std::pow(y2-y1, 2));
    return distance;
}

