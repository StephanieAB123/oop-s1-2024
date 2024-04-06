#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

#include <iostream> 
#include <string.h> 
#include <ctime> 

using namespace std;

class Car : public Vehicle{
    private:

    public:
        Car();
        Car(int ID);
        virtual int getParkingDuration() const override;
};

#endif

