#include <iostream> 
#include <string.h>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main(){
    ParkingLot PL(10);

    int nCars;
    int nBuses;
    int nMotors;

    cout << "How many cars? ";
    cin >> nCars;
    cout << "How many buses? ";
    cin >> nBuses;
    cout << "How many motorbikes? ";
    cin >> nMotors;

    for(int i = 0; i < nCars; i++){
        int uID;
        cout << "Enter the ID for car " << i << ": ";
        cin >> uID;
        vehicles[currNum++] = new Car(uID);
        PL.parkVehicle(new Car(i));
    }

    for(int i = 0; i < nBuses; i++){
        PL.parkVehicle(new Bus(i));
    }

    for(int i = 0; i < nMotors; i++){
        PL.parkVehicle(new Motorbike(i));
    }

    PL.parkVehicle(new Car(11));

}
