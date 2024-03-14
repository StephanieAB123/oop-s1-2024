#include <iostream> 
using namespace std; 

extern void modifyArray(double* array, int size, double value);

int main(){

    double array[] = {1.0,2.0,3.0,4.0,5.0};
    int size = sizeof(array) / sizeof(double);
    double value = 1.5; 

    modifyArray(array, size, value);

    return 0;
}