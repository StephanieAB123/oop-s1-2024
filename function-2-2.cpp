#include <iostream> 
using namespace std; 

int binary_to_int(int binary_digits[], int number_of_digits){

    int what = 0; 
    int power = 1; 

    for(int i = 0; i < number_of_digits; i++){
        
        what += binary_digits[(number_of_digits - 1) - i] * power;
        power *= 2;
    }

    return what;    
}