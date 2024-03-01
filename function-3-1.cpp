#include <iostream> 
using namespace std;

bool is_fanarray(int array[], int n){
    int half = n/2; 

    bool flag = false;

    if(n > 1){
        for(int i = 0; i < half; i++){
            if(array[i] == array[n-i-1]){
                flag = true;
            }else{
                flag = false;
            }
        }
    } else{
        return false;
    }

    return flag;

}