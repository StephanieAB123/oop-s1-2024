#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

#include <iostream> 
#include <string.h>
#include <ctime> 

using namespace std;

int main(){
    int nCars;
    int nBuses;
    int nMotorbikes;

    cout << "Enter number of cars: ";
    cin >> nCars;
    cout << "Enter number of bus: ";
    cin >> nBuses;
    cout << "Enter number of motorbikes: ";
    cin >> nMotorbikes;

    const int total = nCars + nBuses + nMotorbikes;
    Vehicle* vehicles[total];

    int count = 0;

    for(int i = 0; i < nCars; i++){
        int uID;
        cout << "Enter car ID: ";
        cin >> uID;
        vehicles[count++] = new Car(uID);
    }

    for(int i = 0; i < nBuses; i++){
        int uID;
        cout << "Enter Bus ID: ";
        cin >> uID;
        vehicles[count++] = new Bus(uID);
    }

    for(int i = 0; i < nMotorbikes; i++){
        int uID;
        cout << "Enter Motorbike ID: ";
        cin >> uID;
        vehicles[count++] = new Motorbike(uID);
    }

    for(int i = 0; i < total; i++){
        cout << "Vehicle " << vehicles[i]->getID() << " had parked for " << vehicles[i]->getParkingDuration() << " seconds" << endl;
        delete vehicles[i];
    }

    return 0;
}