#include <iostream> 
#include "Person.h"
using namespace std; 

PersonList deepCopyPersonList(PersonList pl){

    PersonList newPl; 
    newPl.numPeople = pl.numPeople;

    newPl.people = new Person[pl.numPeople];
    //so array name is newPl.people

    for(int i = 0; i < pl.numPeople; i++){
        newPl.people[i].name = pl.people[i].name;
        newPl.people[i].age = pl.people[i].age;
        //so pl.people is the array name from 1-2
    }

    return newPl;
}