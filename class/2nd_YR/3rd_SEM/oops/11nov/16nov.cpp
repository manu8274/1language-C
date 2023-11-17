#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include<bits\stdc++.h>
using namespace std;

// class abc{
//     public:
//         int x;
//     abc operator +(abc &obj0){
//         abc temp;
//         temp.x=x+obj0.x;
//         return temp;
//     }

// };

// int main(){
//     abc obj1,obj2,obj3;
//     obj1.x=2;
//     obj2.x=3;
//     // obj3.x=obj1.x+obj2.x//alowed
//     obj3=obj1 + obj2;//not allowed
//     cout<<obj3.x<<endl;
// }


// class a{
//     int real,imag;
//     public:
//         void input(){
//             cin>>real>>imag;
//         }
//         a operator +(a &obj0){
//             a temp;
//             temp.real=real+obj0.real;
//             temp.imag=imag+obj0.imag;
//             return temp;
//         }
//         void output(){
//             if(imag>0)  cout<<real<<" + "<<imag<<"i";
//             else    cout<<real<<" - "<<-1*imag<<"i";
//         }
// };

// class a{
//     int real,imag;
//     public:
//         void input(){
//             cin>>real>>imag;
//         }
//         a operator +(const a obj0){
//             a temp;
//             temp.real=real+obj0.real;
//             temp.imag=imag+obj0.imag;
//             return temp;
//         }
//         void output(){
//             if(imag>0)  cout<<real<<" + "<<imag<<"i";
//             else    cout<<real<<" - "<<-1*imag<<"i";
//         }
// };

// int main(){
//     a obj1,obj2,obj3;
//     cout<<"enter complex number 1 : ";
//     obj1.input();
//     cout<<"enter complex number 2 : ";
//     obj2.input();
//     obj3=obj1+obj2;
//     obj3.output();
// }


class unary{
    int x,y;
    public:
    unary()
    {

    }
        void input(){
            cin>>x>>y;
        }
        void output(){
            cout<<"value of x : "<<x<<endl<<"value of y : "<<y;
        }

        void operator ++(int){
           
            x++;
            y++;             
           
        }
};

int main(){
    unary o1,o2,o3;
    o1.input();
    
    o1++;//o2=o1++ not hapenning bcs its assignment operator 
    o2.output();

}