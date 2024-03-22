#include <iostream> 
#include "Person.h"
using namespace std; 

extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    PersonList pl; 
    pl.numPeople = 3;
    pl.people = new Person[3];
    pl.people[0].name = "Paige";
    pl.people[0].age = 19;
    pl.people[1].name = "Pie";
    pl.people[1].age = 18;
    pl.people[2].name = "Scarlett";
    pl.people[2].age = 20;

    PersonList new_pl = shallowCopyPersonList(pl);

    cout << "Original PersonList: " << endl;
    for(int i = 0; i < pl.numPeople; i++){
        cout << pl.people[i].name << " -- " << pl.people[i].age << endl;
    }

    cout << "Copied PersonList: " << endl;
    for(int i = 0; i < new_pl.numPeople; i++){
        cout << new_pl.people[i].name << " -- " << new_pl.people[i].age << endl;
    }

    delete[] pl.people; 
    delete[] new_pl.people;

    return 0;
}