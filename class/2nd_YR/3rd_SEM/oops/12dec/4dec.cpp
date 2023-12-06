#include<iostream>
using namespace std;

// int main(){
//     int n,d,div;
//     cin>>n>>d;
//     try
//     {
//         if (d==2)   throw('hi');
//         cout<<n/d;
//     }
//     catch(int num)
//     {
//         // std::cerr << "hlo" << '\n';
//         cout<<"error";
//     }
//     catch(char num)
//     {
//         // std::cerr << "hlo" << '\n';
//         cout<<"error1";
//     }
//     catch(const char* num)
//     {
//         // std::cerr << "hlo" << '\n';
//         cout<<"error2";
//     }
// }

/////////////////////////////FUNCTION TEMPLATE ::::::::::::::::::::::::::::::::::::::--- it work with multiple data types

// int sum(int a,int b){
//     return a*(2*b);
// }

// template<class x>
// x sum(x a,x b){
//     return a+b;
// }

// int main(){
//     cout<<sum(2.5,1);
// }


/////////////////////////////CLASS TEMPLATE ::::::::::::::::::::::::::::::::::::::--- it work with multiple data types
//////syntax
// template<class type>
// class classname{};

// template<class c>
// class A{
//     c a,b;
//     public:
//         A(c x,c y){
//             a=x;
//             b=y;
//         }
//         void show(){
//             cout<<"sum of a & b"<<add()<<endl;
//         }

//         c add(){
//             return a+b;
//         }
// };

// int main(){
//     A <int> a(2,5);//to define in t value are passed
//     a.show();
//     A<float>obj(2.5,4.5);
//     obj.show();
// }
