#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

#include <iostream> 
#include <string.h> 
#include <ctime> 

using namespace std;

class Motorbike : public Vehicle{
    private:

    public:
        Motorbike();
        Motorbike(int ID);
        virtual int getParkingDuration() const override;
};

#endif

