#include <iostream> 
using namespace std; 

extern int num_count(int array[], int n, int number);

int main(){

    int array[5] = {1,2,1,1,1};
    cout << "There are: " << num_count(array, 5, 1) << endl; 
    return 0;

}