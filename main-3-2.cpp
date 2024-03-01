#include <iostream> 
using namespace std;

extern int median_array(int array[], int n);

int main(){

    int array[5] = {1,5,4,3,2};
    cout << "The median is: " << median_array(array, 5) << endl; 
    return 0;
}