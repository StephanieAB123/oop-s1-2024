#include <iostream> 
#include <string> 
using namespace std;

struct Student{
    private: 
        string name;
    public: 
        void setName(string newName){
            name = newName;
        }
}