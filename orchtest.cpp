#include "orchtest.h"
#include "musiciantest.h"

#include <iostream> 
#include <string.h>
using namespace std;

Orchestra::Orchestra(){
    Orchestra(1);
}

Orchestra::Orchestra(int size){
    currentSize = 0;
    maxSize = size;
    musicians = new Musician[size];
}

bool Orchestra::add_musician(Musician new_musician){
    
    if(get_current_number_of_members() < maxSize){
        musicians[get_current_number_of_members()] = new_musician;
        currentSize++;
        return true;
    }else{
        return false;
    }
}