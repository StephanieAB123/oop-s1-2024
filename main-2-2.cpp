#include <iostream> 
using namespace std; 

extern int max_element(int array[], int n);

int main(){

    int array[5] = {1,2,4,3,5};
    cout << "The biggest is: " << max_element(array, 5) << endl;
    return 0;

}