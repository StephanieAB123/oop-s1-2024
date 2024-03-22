#include <iostream> 
#include "Person.h"
using namespace std; 

extern PersonList createPersonList(int n);

int main(){
    int n; 
    cout << "Enter a number: ";
    cin >> n;

    PersonList PL = createPersonList(n);
    cout << "Person List --- Number of People: " << PL.numPeople << endl;

    for(int i = 0; i < n; i++){
        cout << "Person " << i + 1 << " --- Name: " << PL.people[i].name << " --- Age: " << PL.people[i].age << endl; 
    }

    delete[] PL.people;
    return 0;
}