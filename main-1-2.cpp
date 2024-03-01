#include <iostream>
using namespace std; 

extern double array_mean(int array[], int n);

int main(){
    int array[5] = {1,2,3,4,5};
    cout << "The average is: " << array_mean(array, 5) << endl; 
    return 0;

}