#include <iostream> 
#include <string>
using namespace std; 

class Student{
    private: 
        string name;
        int ID;
        double grade;
    public:
    Student(string s_name, int s_ID, double s_grade){
        name = s_name;
        ID = s_ID;
        grade = s_grade;
    } 
        string get_name(){ return name; } //this function is the only one that can access the private data member;n
        int get_ID(){ return ID; }
        double get_grade(){ return grade; }

        void set_name(string new_name) { name = new_name;}
        void set_ID(int new_ID) { ID = new_ID; } //but what if you want to set the ID permanently?
        void set_grade(double new_grade) { grade = new_grade;}
};

int main(){

    Student s1("Paige", 1970, 100); 

    s1.set_name("Paige");

    cout << s1.get_name() << endl;
    cout << s1.get_ID() << endl;
    cout << s1.get_grade() << endl; 
     
    //s1.name = "Paige"; //won't work bcs it's private
    return 0; 
}