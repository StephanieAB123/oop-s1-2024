#include "Vehicle.h"
#include <iostream> 
#include <string.h> 
#include <ctime> 
using namespace std;

Vehicle::Vehicle(){

}

Vehicle::Vehicle(int ID) : timeOfEntry(time(nullptr)), ID(ID){
    
}
int Vehicle::getID(){
    return ID;
}

int Vehicle::getParkingDuration() const {
    time_t currTime =  time(nullptr);
    return difftime(currTime, timeOfEntry);
}