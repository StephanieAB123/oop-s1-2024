#include <iostream> 
using namespace std;

int is_identity(int array[10][10]){

    int flag = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if((array[i][j] != 1) && (array[i][j] != 0)){
                return;
            }
            if(array[i] == array[j] == 1){
                flag = 1;    
            }
        }
    }

    return flag;

}