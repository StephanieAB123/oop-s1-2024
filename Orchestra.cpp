#include "Orchestra.h"
#include "Musician.h"
#include <iostream>
#include <string>
using namespace std;

Orchestra::Orchestra(){

    Orchestra(1);

}

Orchestra::Orchestra(int size){
    currentSize = 0;
    maxSize = size;
    musicians = new Musician[size];

}

// returns true and adds new musician to the orchestra if the orchestra is not
// full otherwise returns false
bool Orchestra::add_musician(Musician new_musician){

    if(get_current_number_of_members() < maxSize){
        musicians[get_current_number_of_members()] = new_musician;
        currentSize++;
        return true;
    } else{
        return false;
    }

}

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return currentSize;
}

// returns the array of members of the orchestra
Musician* Orchestra::get_members(){
    return musicians;
}


// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(string instrument){

    for(int i = 0; i < currentSize; i++){
        if(musicians[i].get_instrument() == instrument){
            return true;
        }
    }

    return false;
}

Orchestra::~Orchestra(){
    if(musicians != NULL){
        delete[] musicians;
    }
}
