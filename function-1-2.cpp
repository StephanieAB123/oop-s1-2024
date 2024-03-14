#include <iostream> 
using namespace std; 

void modifyArray(double* array, int size, double value){

    double *pointer = array;
    double array2[size];

    for(int i = 0; i < size; i++){

        array2[i] = pointer[i] + value;

    }    


    for(int i = 0; i < size; i++){
        cout << array2[i] << " ";
    }

    cout << endl;
}