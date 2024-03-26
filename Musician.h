#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <iostream> 
#include <string.h> 
using namespace std; 

class Musician{
// a constructor that *takes* the instruments played and the years of experience
    private: 
        string instrument;
        int years;
    public: 
        Musician(); //default constructor;
        Musician(string m_instrument, int experience);
        string get_instrument();
        int get_experience();
    
    //string get_name(){
    //    return name;
    //}

    //if you don't want to have anyone *change* anything you can just '//' out the function
    //ex. you don't want to change the name? okay, don't let em change it;

    //void set_name(string new_name){
    //    name = new_name;
    //}

    //~Musician(); //deconstructor
}; 

#endif
