#include <iostream> 

extern int array_sum(int array[], int n);

int main(){
    int array[5] = {1,2,3,4,5};
    std::cout << "The sum is: " << array_sum(array, 5) << std::endl;
    return 0; 
}