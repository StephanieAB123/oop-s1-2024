#include <iostream> 
using namespace std; 

//Write a function that given an array of integers and the length of the array, will count the amount of times the numbers, 2, 5, 9 appear using a switch statement. 
//The function must print out your results on one line in the following form. 

//Remember to write out a new line at the end of the output. 
//Function must still produce a line of output even if the size parameter, n, is less than 1. 


void two_five_nine(int array[], int n){
    int two = 0; 
    int five = 0; 
    int nine = 0;

    for(int i = 0; i < n; i++){
        switch(array[i]){
        case 2: 
        two += 1; 
        break;

        case 5: 
        five += 1; 
        break;

        case 9: 
        nine += 1; 
        break;

        default:
        break;
        }
    }

    cout << "2:" << two << ";5:" << five << ";9:" << nine << endl;

}