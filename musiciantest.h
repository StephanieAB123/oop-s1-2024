#ifndef MUSICIANTEST_H
#define MUSICIANTEST_H

#include <iostream> 
#include <string.h> 
using namespace std;

class Musician{
    private: 
        string instrument; 
        int years;
    public: 
        Musician(); //default constructor
        Musician(string m_instrument, int m_experience);
        string get_instrument();
        int get_experience();
};

#endif