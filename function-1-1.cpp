#include <iostream> 
using namespace std; 

double arrayMin(double* array, int size){

    double *pointer = array;

    double min = pointer[0];

    for(int i = 0; i < size; i++){
        if(pointer[i] < min){
            min = array[i];
        }
    }

    return min;
}