#include <iostream> 
using namespace std;

int main(){

    int number;
    int exp;

    cout << "Enter a number: ";  cin >> number;

    for(int i = 0; i < number; i++){
        if(2^i < number){
            exp = i;
        }
    }

    for(int i = 0; i < exp; i++){
        

    }


}