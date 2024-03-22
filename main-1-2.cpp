#include <iostream> 
#include "Person.h"
using namespace std; 

extern PersonList createPersonList(int n);

int main(){
    int n; 
    cout << "Enter a number: ";
    cin >> n;

    PersonList pl = createPersonList(n);
    cout << "Person List --- Number of People: " << pl.numPeople << endl;

    for(int i = 0; i < n; i++){
        cout << "Person " << i + 1 << " --- Name: " << pl.people[i].name << " --- Age: " << pl.people[i].age << endl; 
    }

    delete[] pl.people;
    return 0;
}