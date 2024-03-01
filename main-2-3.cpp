#include <iostream> 
using namespace std;

extern bool is_fanarray(int array[], int n);

int main(){ 
    int array[6] = {1,2,3,3,2,1};

    cout << is_fanarray(array, 6) << endl;

}

