#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

// class a{
//     public:
//     virtual void fun1(){
//         cout<<"fun1 class a "<<endl;
//     }
//     virtual void fun2(){
//         cout<<"fun2 class a "<<endl;
//     }
//     virtual void fun3(){
//         cout<<"fun3 class a "<<endl;
//     }
//     virtual void fun4(){
//         cout<<"fun4 class a "<<endl;
//     }
// };

// class b:public a{
//     public:
//     void fun1(){
//         cout<<"fun1 class b "<<endl;
//     }
//     void fun3(){
//         cout<<"fun3 class b "<<endl;
//     }
//     void fun4(int x){
//         cout<<"fun4 class b "<<endl;
//     }
// };

// int main(){
//     a *ptr;
//     b b1;
//     ptr=&b1;
//     ptr->fun1();
//     ptr->fun2();
//     ptr->fun3();
//     ptr->fun4();
//     //ptr->fun4(5);//considering a fun4 as virtual keyword bcs of late binding so as its not taken note of parameter 
// }

///:::::::::::::::::::questions  ::::::::::::::::::::::::::;

class animal{
    public:
        virtual void makesound(){

        };
};

class lion:public animal{
    public:
    void makesound(){
            cout<<"roar"<<endl;
        };
};

class ele:public animal{
    public:
    void makesound(){
            cout<<"trumpet"<<endl;
        };
};

int main(){
    int ch;
    cout<<"enter choice : ";
    cin>>ch;
    animal *ptr;
    if(ch==1){
        ptr= new lion;
        ptr->makesound();
    }
    else if(ch==2){
        ptr= new ele;
        ptr->makesound();
    }
    else
    {
            cout<<"invalid choice";
    }
    delete ptr;
}