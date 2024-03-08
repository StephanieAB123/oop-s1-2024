#include <iostream> 
using namespace std; 

extern int sum_min_max(int integers[], int length); 

int main(){

    int integers[] = {1,2,3,4,5};
    int length = sizeof(integers) / sizeof(int);

    cout << sum_min_max(integers, length) << endl;
    return 0;
}