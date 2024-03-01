#include <iostream> 
using namespace std; 

extern void two_five_nine(int array[], int n);

int main(){

    int array[10] = {2,2,2,2,2,2,2,2,2,2};

    two_five_nine(array, 10);
    cout << endl;
    return 0;




}