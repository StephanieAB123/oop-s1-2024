#include <iostream> 
using namespace std; 

//Write a function that returns the maximum element in an integer array.
//The function should return 0 if the size parameter, n, is less than 1.

int max_element(int array[], int n){

    int biggest = 0; 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array[j] > array [i]){
                biggest = array[j];
            }
        }
        
    }
    
    return biggest;


}