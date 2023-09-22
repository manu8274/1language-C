#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rol;
    student(string n, int roll){
        name= n;
        roll=rol;
    }
};

int main(){
    student std("RAHUL",27);
    cout<<"HI HOW R U "<<std.name<<endl;
    cout<<"YOUR ROLL NO. IS "<<std.rol<<endl;
}