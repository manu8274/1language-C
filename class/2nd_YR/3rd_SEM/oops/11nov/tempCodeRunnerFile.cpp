#include<iostream>
using namespace std;

class base{
    public:
    void f1(){
        cout<<"base f1"<<endl;
    }
    void f2(){
        cout<<"base f2"<<endl;
    }
    virtual void f3(){
        cout<<"base f3"<<endl;
    }
    virtual void f4(){
        cout<<"base f4"<<endl;
    }
};

class derived:public base{
    public:
    void f1(){
        cout<<"derived f1"<<endl;
    }
    virtual void f2(){
        cout<<"derived f2"<<endl;
    }
    void f4(int x){
        cout<<"derived f4"<<endl;
    }
};
int main(){
    base *ptr;
    derived obj;
    ptr=&obj;
    ptr->f1();
    ptr->f2();
    ptr->f3();
    ptr->f4();
}