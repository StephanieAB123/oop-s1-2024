#include <iostream> 
#include <string>
using namespace std;

int* readNumbers(){

    int* numbers = new int[10] {0};

    cout << "Enter 10 numbers: "; 

    for(int i = 0; i < 10; i++){
        cin >> numbers[i];
    }

    return numbers;   
}


void hexDigits(int *numbers, int length){

    char array[10];

    for(int i = 0; i < length; i++){

        switch(numbers[i]){
            case 0: 
            array[i] = '0';
            break;

            case 1: 
            array[i] = '1';
            break;

            case 2: 
            array[i] = '2';
            break;

            case 3: 
            array[i] = '3';
            break;

            case 4: 
            array[i] = '4';
            break;

            case 5: 
            array[i] = '5';
            break;

            case 6: 
            array[i] = '6';
            break;

            case 7: 
            array[i] = '7';
            break;

            case 8: 
            array[i] = '8';
            break;

            case 9: 
            array[i] = '9';
            break;

            case 10: 
            array[i] = 'A';
            break;

            case 11: 
            array[i] = 'B';
            break;

            case 12: 
            array[i] = 'C';
            break;

            case 13: 
            array[i] = 'D';
            break;

            case 14: 
            array[i] = 'E';
            break;

            case 15: 
            array[i] = 'F';
            break;

            default:
            break;
        }
    }

    for(int i = 0; i < length; i++){
        cout << i << " " << numbers[i] << " " << array[i] << endl;
    }
}