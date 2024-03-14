#include <iostream> 
using namespace std; 

extern double arrayMin(double* array, int size);

int main(){

    double array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(double);

    cout << arrayMin(array, size) << endl;

}