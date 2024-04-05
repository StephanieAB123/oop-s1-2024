#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream> 
#include <string.h>
#include "Vehicle.h"

class ParkingLot{
    private:
        int maxNum;
        int currNum;
        Vehicle** vehicles;
    public: 
        ParkingLot();
        ParkingLot(int maxNum);
        int getCount();
        void parkVehicle(Vehicle *new_Vehicle);
        void unparkVehicle(int ID);
};

#endif