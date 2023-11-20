#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include<bits\stdc++.h>
using namespace std;

// class abc{
//     public:
//         int *x;//to use assignment poerator we use pointer 
//         abc(int y=0){
//             x=new int(y);//using new as to change the memory
//         }
//         void setx(int z){
//             *x=z;
//         }
//         void print(){
//             cout<<endl<<"value of x : "<<*x<<endl;
//         }
// };

// int main(){
//     abc a1(2);
//     abc a2;
//     a2=a1;
//     a1.setx(3);
//     a1.print();
// }

// class abc{
//     int x;//to use assignment poerator we use pointer
//     public: 
//         abc(int y=0){
//             x=y;//using new as to change the memory
//         }
//         void setx(int z){
//             x=z;
//         }
//         void print(){
//             cout<<endl<<"value of x : "<<x<<endl;
//         }
// };

// int main(){
//     abc a1(2);
//     abc a2;
//     a2=a1;
//     a1.setx(3);
//     a2.print();
// }

// class abc{
//     public:
//         int x;//to use assignment poerator we use pointer 
//         abc(int y=0){
//             x=y;//using new as to change the memory
//         }
//         void setx(int z){
//             x=z;
//         }
//         void print(){
//             cout<<endl<<"value of x : "<<x<<endl;
//         }
// };

// int main(){
//     abc a1(2);
//     abc a2;
//     a2=a1;
//     a1.setx(3);
//     a2.print();
// }

//assignment operator overloading :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// class abc{
//     public:
//         int *x;//to use assignment poerator we use pointer 
//         abc(int y=0){
//             x=new int(y);//using new as to change the memory
//         }
//         void setx(int z){
//             *x=z;
//         }
//         void print(){
//             cout<<endl<<"value of x : "<<*x<<endl;
//         }
//         abc operator =(abc obj){
//             *x=*obj.x;//using pointer
//             return *this;
//         }
// };

// int main(){
//     int c;
//     cin>>c;
//     abc a1(c);
//     abc a2;
//     a2=a1;
//     a1.setx(3);
//     cout<<"for a2 : ";
//     a2.print();
//     cout<<"for a1 : ";
//     a1.print();
// }


//:::::::::::::::::::::::::::::::::;;

class abc{
    public:
        int *x;
        abc (int y=0){
            x=new int(y);
        }
        void setx(int c){
            *x=c;
        }
        void print(){
            cout<<endl<<"value of x : "<<*x<<endl;
        }
        friend abc operator = (abc obj);
};

class def{
    public:
        int *x;
        abc (int y=0){
            x=new int(y);
        }
        void setx(int c){
            *x=c;
        }
        void print(){
            cout<<endl<<"value of x : "<<*x<<endl;
        }
        friend abc operator = (abc obj);
};

abc operator =(abc obj,def obj1){
    *x=*def.x;
    return *this;
}