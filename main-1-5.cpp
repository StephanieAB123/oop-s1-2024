#include <iostream> 
using namespace std; 

extern int count_evens(int number);

int main(){
    
    int number = 8; 
    cout << "The no. of even numbers is: " << count_evens(number) << endl;
    return 0;


}