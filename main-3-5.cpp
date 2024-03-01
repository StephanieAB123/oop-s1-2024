#include <iostream> 
using namespace std; 

extern double sum_even(double array[], int n);

int main(){

    double array[5] = {1,2,3,4,5};
    cout << "The sum is: " << sum_even(array,5) << endl;
    return 0;
}