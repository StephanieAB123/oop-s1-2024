#include <iostream> 
using namespace std; 

//Write a function that given an array of integers and its length, will find the minimum (smallest) number and return it.
//The function should return 0 if the size parameter, n, is less than 1. 

int min_element(int array[], int n){

    int smallest = array[0];

    if(n > 1){
        for(int i = 0; i < n; i++){
            if(array[i] < smallest){
                smallest = array[i];
            }
        }
    }
    else{
        return 0;
    }

    return smallest;
}