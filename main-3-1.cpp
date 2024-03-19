#include <iostream> 
using namespace std; 

extern int* readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main(){

    int numbers1; 
    int numbers2; 

    cout << "Enter your array: " << readNumbers(); 
    cin >> numbers1;
    cout << "Enter you second array: " << readNumbers(); 
    cin >> numbers2;
    
    cout << equalsArray(*numbers1, *numbers2, 4) << endl;
    
    delete numbers1; 
    delete numbers2;


}