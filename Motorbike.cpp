#include "Motorbike.h"
#include "Vehicle.h"

#include <iostream> 
#include <string.h> 
#include <ctime> 

using namespace std;

Motorbike::Motorbike(){

}
Motorbike::Motorbike(int ID) : Vehicle(ID){

}

int Motorbike::getParkingDuration() const {
    time_t currTime = time(nullptr);
    int duration = static_cast<int>(Vehicle::getParkingDuration() * 0.85);
    return duration;
}