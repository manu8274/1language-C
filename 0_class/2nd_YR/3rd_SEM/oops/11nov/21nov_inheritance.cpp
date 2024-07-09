#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// class a{
//     public:
//         int x=2;
//         void addd(){
//             x++;
//         }
// };

// class b:public a{
//     public:
//         void print(){
//             cout<<x;
//         }
// };

// int main(){
//     class b cg;
//     cg.addd();
//     cg.print();
// }

////////////////////error bcs its private for all 
// class a{
//     public:
//         int x=2;
//         void addd(){
//             x++;
//         }
// };

// class b:a{
//     public:
//         void print(){
//             cout<<x;
//         }
// };

// int main(){
//     class b cg;
//     cg.addd();
//     cg.print();
// }


// class a{
//     public:
//         int x=2;
//         void addd(){
//             x++;
//         }
// };

// class b:public a{
//     public:
//         void print(){
//             cout<<x;
//         }
// };

// class c: public b{
//     public:
//         void p(){
//             print();
//         }
// };

// int main(){
//     class c cg;
//     cg.addd();
//     cg.p();
//     cg.print();
// }

// class a{
//     public:
//         int x=2;
//         void printa(){
//             cout<<"class A:"<<endl;
//         }
// };

// class b:public a{
//     public:
//         void printb(){
//             cout<<"class B:"<<endl;
//         }
// };

// // class c: public b{
// //     public:
// //         void p(){
// //             print();
// //         }
// // };

// int main(){
//     class a a1;
//     a1.printa();
//     class b b1;
//     b1.printb();
//     b1.printa();
// }

// class a{
//     public:
//         int x=2;
//         void print(){
//             cout<<"class A:"<<endl;
//         }
// };

// class b:public a{
//     public:
//         void print(){
//             cout<<"class B:"<<endl;
//         }
// };


// int main(){
//     // class a a1;
//     // a1.print();
//     class b b1;
//     b1.print();
//     b1.a::print();///if we use class scope function which will print base class function
// }


// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::to ask::::::::::::::::::::::::::::::::::::::::::::::;
// class a{
//     public:
//         int x=2;
//         void print(){
//             cout<<"class A:"<<endl;
//         }
// };

// class b:public a{
//     public:
//         void print(){
//             cout<<"class B:"<<endl;
//         }
// };

// class c:public b,public a{
// };

// int main(){
//     // class a a1;
//     // a1.print();
//     // class b b1;
//     // b1.print();
//     // b1.a::print();///if we use class scope function which will print base class function
//     class c c1;
//     c1.a::print();
// }
// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::to ask::::::::::::::::::::::::::::::::::::::::::::::;

// class a{
//     public:
//         a(){
//             cout<<"constructor of class a "<<endl;
//         }
// };

// class b:public a{
//     public:
//         b(){
//             cout<<"constructor of class b "<<endl;
//         }
// };

// int main(){
//     class b b1;

// }

// class a{
//     public:
//         a(){
//             cout<<"constructor of class a "<<endl;
//         }
// };

// class b:public a{
//     public:
//         b(){
//             cout<<"constructor of class b "<<endl;
//         }
// };

// class c:public a,public b{
//     public:
//         c(){
//             cout<<"constructor of class c"<<endl;
//         }
// };

// int main(){
//     class c c1;

// }


// class a{
//     public:
//         a(){
//             cout<<"constructor of class a "<<endl;
//         }
//         ~a(){
//             cout<<"destructor of class a "<<endl;
//         }
// };

// class b:public a{
//     public:
//         b(){
//             cout<<"constructor of class b "<<endl;
//         }
//         ~b(){
//             cout<<"destructor of class b "<<endl;
//         }
// };

// class c:public a,public b{
//     public:
//         c(){
//             cout<<"constructor of class c"<<endl;
//         }
//         ~c(){
//             cout<<"destructor of class c "<<endl;
//         }
// };

// int main(){
//     class c c1;
// }
