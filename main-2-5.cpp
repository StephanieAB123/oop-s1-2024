#include <iostream> 
using namespace std; 

//https://www.w3schools.com/cpp/cpp_arrays_size.asp

extern int sum_min_max(int integers[], int length); 

int main(){

    int integers[] = {1,2,3,4,5};
    int length = sizeof(integers) / sizeof(int);

    cout << sum_min_max(integers, length) << endl;
    return 0;
}