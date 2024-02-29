#include <iostream> 
using namespace std; 

int count_evens(int number){

    int total = 0; 

    for(int i = 0; i < number; i++){
        if(i % 2 == 0){
            total += 1;
        }

    }
    return total;
}

