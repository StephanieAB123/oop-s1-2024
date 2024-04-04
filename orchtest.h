#ifndef ORCHTEST_H
#define ORCHTEST_H

#include "musiciantest.h"
#include <iostream> 
#include <string.h> 
using namespace std;

class Orchestra{
    private: 
        int currentSize;
        int maxSize;
        Musician* musicians; //returns the array of members of the orchestra

    public:
        Orchestra();
        Orchestra(int size);
        int get_current_number_of_members();
        bool has_instrument(string instrument);
        Musician *get_members(); //returns the array of members of the orchestra
        bool add_musician(Musician new_musician);

        ~Orchestra();
};

#endif