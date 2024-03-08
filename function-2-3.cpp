#include <iostream> 
using namespace std; 

int sum_if_palindrome(int integers[], int length){

    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += integers[i];
    }

    return sum;
}

bool is_palindrome(int integers[], int length){

    for(int i = 0; i < length/2; i++){
        if(integers[i] != integers[length-1-i]){
            return false;
        }
    }

    return true;
}

int sum_array_elements(int integers[], int length){

    int flag = -2;

    if(is_palindrome(integers, length) == 0){
        return flag;
    }

    return sum_if_palindrome(integers, length);
}