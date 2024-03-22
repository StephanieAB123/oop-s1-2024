#include <iostream> 
#include "Person.h"
using namespace std; 

PersonList deepCopyPersonList(PersonList PL){
    PersonList newPL; 
    newPL.name = pl.n;
    newPL.people = new Person[newPL.n];

    for(int i = 0; i < new PL.n; i++){
        newPL.people[i].name = pl.people[i].name;
        newPL.people[i].age = pl.people[i].age; 
    }

    return newPL;
}