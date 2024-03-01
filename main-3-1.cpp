#include <iostream> 
using namespace std;

extern bool is_fanarray(int array[], int n);

int main(){

    int array[5] = {1,2,4,2,1};
    cout << is_fanarray(array, 5) << endl; 
    return 0;

}