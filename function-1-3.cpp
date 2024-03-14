#include <iostream> 
using namespace std; 

double* duplicateArray(double* array, int size){

    double *pointer = array;
    double array2[size];

    for(int i = 0; i < size; i++){
        array2[i] = pointer[i];
    }

    return array2;
}