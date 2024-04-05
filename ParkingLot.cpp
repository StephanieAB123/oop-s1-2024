#include <iostream> 
#include <string.h>
#include "ParkingLot.h"
using namespace std;

ParkingLot::ParkingLot(){}

ParkingLot::ParkingLot(int maxNum) : maxNum(maxNum), currNum(0){
    vehicles = new Vehicle*[maxNum];
}
int ParkingLot::getCount(){
    return currNum;
}

void ParkingLot::parkVehicle(Vehicle *new_Vehicle){

    if(getCount() < maxNum){
        vehicles[getCount()] = new_Vehicle;
        currNum++;
    }else{
        cout << "The lot is full";
    }
}

void ParkingLot::unparkVehicle(int ID){

    for(int i = 0; i < currNum; i++){
        if(vehicles[i]->getID() == ID){
            delete vehicles[i];
            currNum--;
        }else{
            cout << "Vehicle not in lot" << endl;
        }
    }
}