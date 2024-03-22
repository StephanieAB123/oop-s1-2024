#include <iostream> 
#include <string> 

using namespace std; 

int* readNumbers(){
    int* numbers = new int[10] {0};
    //cout << "Enter 10 numbers: ";

    for(int i = 0; i < 10; i++){
        cin >> numbers[i];
    }

    return numbers;
}

int secondSmallestSum(int *numbers, int length){

    int size = length*(length+1)/2; //this is the number of all possible subarrays

    //now i'm going to create an array using dynamic memory allocation
    int* array = new int[size];

    int loop = 0;


    for(int i = 0; i < length; i++){ //for loop to print out subarrays

        for(int j = i; j < length; j++){

            int sum = 0; // initialise sum as 0 each loop

            for(int k = i; k <= j; k++){
                // cout << numbers[k] << " ";

                sum += numbers[k];
            }           

            array[loop] = sum;
            loop++;
            //cout << "loop count: " << loop << endl;
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array [j];
                array[j] = temp;
                //cout << "temp: "<< temp << endl;
                //cout << "size of array: " << size << endl;
                //cout << "size of i: " << i << endl;
            }
        }
    }

    int secondSmallest = array[1];
    return secondSmallest;
}