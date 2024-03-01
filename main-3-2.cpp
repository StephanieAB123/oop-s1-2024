#include <iostream> 
using namespace std;

extern int median_array(int array[], int n);

int main(){

    int array[1] = {2};
    cout << "The median is: " << median_array(array, 1) << endl; 
    return 0;
}