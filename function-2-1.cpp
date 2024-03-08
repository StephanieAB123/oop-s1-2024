#include <iostream> 
#include <string> 
using namespace std; 

//https://www.freecodecamp.org/news/string-to-int-in-c-how-to-convert-a-string-to-an-integer-example/

void print_binary_str(string decimal_number){

    int decimal = stoi(decimal_number);
    int remainder; 
    int binary = 0; 
    int i = 1; 

    while(decimal != 0){
        remainder = decimal%2; 
        decimal = decimal/2; 
        binary = binary + remainder*i; 
        i = i*10; 
    }

    cout << binary << endl;

}

