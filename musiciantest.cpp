#include "musiciantest.h"
#include <iostream> 
#include <string.h> 
using namespace std;

Musician::Musician(){
    instrument = "null";
    years = 0;
}

Musician::Musician(string m_instrument, int m_experience){
    instrument = m_instrument;
    years = m_experience;
}

string Musician::get_instrument(){
    return instrument;
    }

int Musician::get_experience(){
    return years;
}

