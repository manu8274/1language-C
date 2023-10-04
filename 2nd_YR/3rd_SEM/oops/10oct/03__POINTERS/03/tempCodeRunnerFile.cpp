#include<iostream>
using namespace std;
int main(){
    int *ptr;//also by int* ptr;
    int x=10;
    ptr=&x;
    cout<<"value of *ptr "<<*ptr<<endl;
    cout<<"value of &ptr "<<&ptr<<endl;
    cout<<"value of ptr "<<ptr<<endl;
    cout<<"value of ptr+1 "<<ptr+1<<endl;
    cout<<"value of *ptr+1 "<<*ptr+1<<endl;
    *ptr=2;
    cout<<"value of ptr "<<ptr<<endl;
    cout<<"value of x "<<x<<endl;
}