#include <iostream> 
using namespace std; 

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int array[5] = {1,2,3,4,5};
    int secondarray[5] = {6,7,8,9,10};
    cout << "The sum is: " << sum_two_arrays(array, secondarray, 5) << endl; 

    return 0;
}