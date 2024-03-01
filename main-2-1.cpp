#include <iostream>
using namespace std; 

extern int min_element(int array[], int n);

int main(){

    int array[5] = {3,3,4,2,3};
    cout << "The smallest number is: " << min_element(array, 5) << endl; 
    return 0;

}