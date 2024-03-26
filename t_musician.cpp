#include "Musician.h"
#include <iostream> 
#include <string.h> 
using namespace std; 

Musician::Musician(){

} //uhm... idk why but yippee ?

//potential :) 

Musician* createMusicianArray(int n){
    string i_input; 
    int y_input;

    Musician* musician = new Musician[n];
    for(int i = 1; i < n; i++){
        cout << "Enter the instrument: "; cin >> i_input;
        cout << "Enter years of experience: "; cin >> y_input;
        musician[i].instrument = i_input;
        musician[i].years = y_input;
    }

    return musician;
}

int main(){

    int n = 4; 

    Musician* array = createMusicianArray(n);

    for(int i = 0; i < n; i++){
        cout << "Instrument: " << array[i].instrument << endl;
        cout << "Years: " << array[i].years << endl;
    }
}