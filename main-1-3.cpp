#include <iostream> 
#include <string>
#include "Person.h"
using namespace std;

extern PersonList deepCopyPersonList(PersonList pl);

int main(){
    PersonList pl;
    pl.numPeople = 2; 
    pl.people = new Person[pl.numPeople];
    pl.people[0] = "Paige";
    pl.people[1] = "Pie";

    PersonList newPl = deepCopyPersonList(pl);
    cout << "Original" << endl
    for(int i = 0; i < pl.numPeople; i++){
        cout << pl.people[i].name << "," << pl.people[i].age << endl;


    }


}
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