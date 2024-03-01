#include <iostream> 
using namespace std;

extern bool is_descending(int array[], int n);

int main(){

    int array[10] = {1,2,3,4,6,7,8,9,10};

    cout << is_descending(array, 10) << endl;
    return 0; 
}