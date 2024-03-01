#include <iostream> 
using namespace std;

double weighted_average(int array[], int n){

    double one = 0.0; 
    double two = 0.0; 
    double three = 0.0;
    double four = 0.0;
    double five = 0.0;
    double six = 0.0;
    double seven = 0.0;
    double eight = 0.0;
    double nine = 0.0;
    double sum = 0.0;


    for(int i = 0; i < n; i++){
        switch(array[i]){
            case 1: 
            one += 1; 
            break; 

            case 2: 
            two += 1; 
            break; 

            case 3: 
            three += 1; 
            break; 

            case 4: 
            four += 1; 
            break; 

            case 5: 
            five += 1; 
            break; 

            case 6: 
            six += 1; 
            break; 

            case 7: 
            seven += 1; 
            break; 

            case 8: 
            eight += 1; 
            break; 

            case 9: 
            nine += 1; 
            break; 

            default: 
            break;
        }
    }

    for(int i = 0; i < n; i++){
        switch(array[i]){
            case 1: 
            sum += (double)array[i]*one/n;
            break; 

            case 2: 
            sum += (double)array[i]*two/n;            
            break; 

            case 3: 
            sum += (double)array[i]*three/n;
            break; 

            case 4: 
            sum += (double)array[i]*four/n;
            break; 

            case 5: 
            sum += (double)array[i]*five/n;
            break; 

            case 6: 
            sum += (double)array[i]*six/n;
            break; 

            case 7: 
            sum += (double)array[i]*seven/n;
            break; 

            case 8: 
            sum += (double)array[i]*eight/n;
            break; 

            case 9: 
            sum += (double)array[i]*nine/n;
            break; 

            default: 
            break;
        }
    }

    return sum;
}