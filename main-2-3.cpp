#include <iostream> 
using namespace std; 

extern int sum_array_elements(int integers[], int length); 

int main(){

    int integers[] = {1,2,3,2,1};
    int length = sizeof(integers) / sizeof(int);

    cout << sum_array_elements(integers, length) << endl;
    return 0;
}