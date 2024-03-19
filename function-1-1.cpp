#include <iostream> 
#include <string> 
using namespace std; 

// type* name > pointer
// *name > dereference the pointer
// &var > gives the address of the variable


int* readNumbers(){

    int* numbers = new int[10] {0};

    cout << "Enter 10 numbers: "; 

    for(int i = 0; i < 10; i++){
        cin >> numbers[i];
    }

    return numbers;   
}

void printNumbers(int *numbers, int length){
    
    for(int i = 0; i < length; i++){
        cout << i << " " << numbers[i] << endl;
    }
}