#include <iostream>
using namespace std; 

//int var; 
//int *ptr;
//int **pptr; 

//var = 3000; 
//ptr = &var; //address of var
//pptr = &ptr // address of ptr using address of operator & 
//printf("Value of var = %d\n", var );
//printf("Value available at *ptr = %d\n", *ptr );
//printf("Value available at **pptr = %d\n", **pptr);

int main(){

    int number = 3000; 
    int *pointer = &number; 
    cout << pointer << endl;
    cout << *pointer << endl;
    *pointer = 99; 
    cout << *pointer << endl;
    cout << number << endl; 


}