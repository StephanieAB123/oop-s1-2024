#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"

#include <tuple> 
#include <cmath> 
#include <iostream>
#include <string> 
#include <random>

using namespace std;

int main(){

    //create Snare object and call implement
    Snare snare(10,10);

    cout << "Activated: " << snare.isOperative() << endl;
    cout << "Category: " <<  snare.getCategory() << endl;

    snare.implement(snare);

    cout << "Activated After: " << snare.isOperative() << endl;
    cout << "Category After: " <<  snare.getCategory() << endl;


    //Create a Persona object and call shift

    Persona persona(10,10);
    cout << "Location: " << persona.getX() << ", " << persona.getY()<< endl;
    cout << "Category: " <<  persona.getCategory() << endl;


    persona.shift(1,1);

    cout << "Location After: " << persona.getX() << ", " << persona.getY()<< endl;
    cout << "Category After: " <<  persona.getCategory() << endl;








}