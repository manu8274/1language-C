#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

///////virtual function:::::::::::::::::::::::::::::::::::::::::::
// class a{
//     public:
//     virtual void show(){
//         cout<<"Base Class"<<endl;
//     }
// };

// class b:public a{
//     public:
//     void show(){
//         cout<<"Derived Class"<<endl;
//     }
// };

// class c{};


// int main(){
//     class a *ptr;
//     class a a;
//     ptr=&a;
//     ptr->show();
// }

// class a{
//     public:
//     virtual void show(){
//         cout<<"Base Class"<<endl;
//     }
// };

// class b:public a{
//     public:
//     void show(){
//         cout<<"Derived Class"<<endl;
//     }
// };

// class c{};


// int main(){
//     class a *ptr;
//     class a a;
//     ptr=&a;
//     ptr->show();
// }
/////try for virtual class:::::::::::::::::::::::::::::::::::::::::::
/////virtual base class:::::::::::::::::::::::::::::::::::::::::::::::: either we write virtual public a or public virtual a

// class a{
//     public:
//         void show(){
//             cout<<"class a "<<endl;
//         }
// };

// class b:virtual public a{
//     public:
//         void show(){
//             cout<<"class b "<<endl;
//         }
// };

// class c:virtual public a{
//     public:
//         void show(){
//             cout<<"class c "<<endl;
//         }
// };

// class d:public b,public c{
//     public:
//         void show(){
//             cout<<"class d "<<endl;
//         }
// };

// int main(){
//     class d d1;
//     d1.a::show();
// }



//////////////////////to ask:::::::::::::::::::::::::::::::::::::
// class a{
//     public:
//         void show(){
//             cout<<"class a "<<endl;
//         }
// };

// class b:public a{
//     public:
//         void show(){
//             cout<<"class b "<<endl;
//         }
// };

// class c:public a{
//     public:
//         void show(){
//             cout<<"class c "<<endl;
//         }
// };

// class d:virtual public b,virtual public c{
//     public:
//         void show(){
//             cout<<"class d "<<endl;
//         }
// };

// int main(){
//     class d d1;
//     d1.a::show();
// }

/////////////////////to ask ::::::::::::::::::::::::::::::::::::::::;;
// class a{
//     public:
//         void show(){
//             cout<<"class a "<<endl;
//         }
// };

// class b:virtual public a{
//     public:
//         void show(){
//             cout<<"class b "<<endl;
//         }
// };

// class c:public a{
//     public:
//         void show(){
//             cout<<"class c "<<endl;
//         }
// };

// class d:public b,public c{
//     public:
//         void show(){
//             cout<<"class d "<<endl;
//         }
// };

// int main(){
//     class d d1;
//     d1.a::show();
// }



