#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream> 
#include <string.h> 
#include <ctime> 
using namespace std;

class Vehicle{
    private: 
        time_t timeOfEntry; 
        int ID;
    public:
        Vehicle();
        Vehicle(int ID);
        int getID();
        virtual int getParkingDuration() const;
};

#endif
