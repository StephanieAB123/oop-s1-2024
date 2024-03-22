#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){
    PersonList new_pl; 
    new_pl.people = pl.people; 
    new_pl.numPeople = pl.numPeople;
    return new_pl;
} 