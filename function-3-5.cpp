#include <iostream> 
using namespace std; 

double sum_even(double array[], int n){

    double sum = array[0]; 

    for(int i = 1; i < n; i++){
        if(i % 2 == 0){
            sum += array[i];
        }
    }

    return sum;
}