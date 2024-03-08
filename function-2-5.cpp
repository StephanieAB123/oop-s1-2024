#include <iostream> 
using namespace std;

int array_min(int integers[], int length){

    int min = integers[0]; 

    for(int i = 0; i < length; i++){
        if(integers[i] < min){
            min = integers[i];
        }
    }

    return min;
}

int array_max(int integers[], int length){

    int max = integers[0];

    for(int i = 0; i < length; i++){
        if(integers[i] > max){
            max = integers[i];
        }
    }

    return max;
}

int sum_min_max(int integers[], int length){
    
    int flag = -1;
    int sum = 0;

    if(length <= 0){
        return flag;
    }

    sum += array_max(integers, length) + array_min(integers, length);

    return sum;
}