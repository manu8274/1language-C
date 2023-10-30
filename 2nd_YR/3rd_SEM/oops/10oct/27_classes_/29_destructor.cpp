#include<iostream>
#include<string>
#include<math.h>
using namespace std;



// class g25{
//     public:
//         g25(int a){
//             int marks=a;
//         }
//         g25(const g25 *obj){//pass by reference ,  as int value has no ref so we use const 
//             return obj.marks;
//         }
// };

// int main(){
//     g25 st1(10);
//     // g25 st1=st2;//not allowed to do direct passing , so we have to make copy constructor 
//     // g25 st2(st1);//not allowed to do direct passing , so we have to make copy constructor

//     cout<<st1.x;
// }

int main(){
    int *ptr=NULL;//null pointer
    int a=10;
    cout<<&a<<endl;
    cout<<"val of ptr "<<ptr<<endl;
    cout<<"val of *ptr"<<*ptr<<endl;
}