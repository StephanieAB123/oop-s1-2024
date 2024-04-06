#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

#include <iostream> 
#include <string.h> 
#include <ctime> 

using namespace std;

class Bus : public Vehicle{
    private:

    public:
        Bus();
        Bus(int ID);
        virtual int getParkingDuration() const override;
};

#endif

