#ifndef INFLUENCE_H
#define INFLUENCE_H

#include "Spot.h"
using namespace std;


class Influence{
    public:
        //function needs to be implemented in the derived class.
        virtual void implement(Spot& spot) = 0;
};

#endif