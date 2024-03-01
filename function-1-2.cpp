#include <iostream> 

using namespace std;

// write a function that returns the average of all elements in an integer array. 
// The function takes as parameters the array and the number of elements in the array. 
//Your function should return 0.0 if the size parameter, n, is less than 1

double array_mean(int array[], int n){
    double average = 0.0; 
    int total = 0;

    if(n > 1){
        for(int i = 0; i < n; i++){
            total += array[i];
        }
    }
    else{
        return 0;
    }
     
    average = (double)total/n;
    return average;

}