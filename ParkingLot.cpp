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

    int index = -1;
    for(int i = 0; i < currNum; i++){
        if(vehicles[i]->getID() == ID){
            index = i; //if the vehicle is found, assign that i to the index.
            break; 
        }
    }

    if(index == -1){
        cout << "Vehicle not in the lot" << endl;
    } else{
        delete vehicles[index]; // delete the vehicle with the index.
        currNum--;
        for(int i = index; i < currNum; i++){// starting from the vehicle i just deleted...
            vehicles[i] = vehicles[i+1]; // shift the remaining to fill the gap.
        }
        cout << "Vehicle unparked successfully" << endl;
    }

    for(int i = 0; i < currNum; i++){
        if(vehicles[i]->getID() == ID){
            delete vehicles[i];
            currNum--;
        }else{
            cout << "Vehicle not in lot" << endl;
        }
    }
}

    