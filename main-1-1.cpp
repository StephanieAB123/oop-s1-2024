#include "Person.h"
#include <iostream> 

extern Person* createPersonArray(int n);

int main(){

    int n = 4;

    Person* array = createPersonArray(n);

    for(int i = 0; i < n; i++){
        cout << "Person " << i + 1 << endl; 
        cout << "Name: " << array[i].name << endl;
        cout << "Age: " << array[i].age << endl;
    }

    delete[] array; //the two square brackets to prevent segmentation fault fsr.
    return 0;
}