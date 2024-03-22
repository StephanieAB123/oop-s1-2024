#include <iostream> 
#include <string> 
using namespace std;

struct Student{ 

    string name; 
    int ID; 
    double grade;

    void print(){
        cout << "Hi, my name is " << name << endl;
    }
    
};

int main(){

    Student barry;
    barry.name = "Barry";
    barry.print();

    string name; 
    cout << name << endl;

}