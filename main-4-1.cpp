#include <iostream> 
#include <string> 
using namespace std; 

extern int* readNumbers();
extern int secondSmallestSum(int *numbers, int length);

int main(){

    int* numbers = readNumbers();
    cout << "The second smallest sum is: " << secondSmallestSum(numbers, 10) << endl;
    delete numbers;

    return 0;
}