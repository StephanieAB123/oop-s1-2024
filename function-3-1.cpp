#include <iostream> 
using namespace std;

bool is_fanarray(int array[], int n){
    int half = n/2; 

    if(n > 1){
        for(int i = 0; i < half; i++){
            if(array[i] == array[n-i-1]){
            return true;
            }else{
                return false;
            }
        }
    } else{
        return false;
    }

    return 0;

}