#include <iostream> 
using namespace std;

//first sort the array
//find the half == to the median
// bubble sort
//https://prepinsta.com/data-structures-algorithms/sorting-of-array/

int median_array(int array[], int n){

    if(n <= 1 || n % 2 == 0){
        return 0;
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    int median = array[n/2];

    return median;
}
