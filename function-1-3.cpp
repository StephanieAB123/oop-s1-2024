#include <iostream> 
using namespace std; 

//Write a function that returns the number of elements in an array that are equal to a given parameter. 
//The function should take as parameters the array, its size, and the desired number. 
//The function should return 0 if the size parameter, n, is less than 1. 

int num_count(int array[], int n, int number){

    int total = 0; 

    for(int i = 0; i < n; i++){
        if(n>1){
            if(array[i] == number){
                total += 1;
            }
        }
    }

    return total;


}