#include <iostream> 
using namespace std;

bool is_fanarray(int array[], int n){
    int half = n/2; 

    for(int i = 0; i < half && n != 0; i++){
        if(array[i] == array[n-i-1]){
            return true;
        }
    }
    return false;

}