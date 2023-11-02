#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;

// class rect{
//     int len;
//     int width;
//     public:
//         rect(int l,int b){
//             cout<<l*b;
//         }
// };

// int main(){
//     rect recta(2,3);
// }

// class rect{
//     int len;
//     int width;
//     public:
//         rect(int l,int b):len(l),width(b)
//         {
            
//         }
//         int area(){
//             return len*width;
//         }
// };

// int main(){
//     rect r1(2,3);
//     cout<<r1.area();
// }

class rect{
    int len;
    int width;
    public:
        rect(){

        }
        rect operator +(rect &obj){
            rect temp;
            temp.len=len+obj.len;
            temp.width=width + obj.width;
            return temp;
        }
        // int functadd(rect &obj1,rect &obj2,rect &obj3){
        //     obj3.len=obj1.len + obj2.len;
        //     obj3.width=obj1.width + obj2.width;
        // }
        rect(int l,int b):len(l),width(b)
        {
            
        }
        int area(){
            return len*width;
        }
};

int main(){
    rect r1(2,3);
    rect r2(3,4);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    rect r3;
    // r3=r2+r1;//not possible as not predefined operator but its a user defined operator // operator overloading polymorphism
    //so we hhave to overload + operator
    r3=r1+r2;
    rect r4;
    r4= r1+r2+r3;
    cout<<r3.area()<<endl;
    cout<<r4.area();
    // r3.functadd(r1,r2,r3);
    // cout<<r3.area()<<endl;
    // rect r4;
    
}