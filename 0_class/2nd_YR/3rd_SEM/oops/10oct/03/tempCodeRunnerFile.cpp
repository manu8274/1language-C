#include<iostream>
using namespace std;

// void m1(int i,float f){
//     cout<<"m1";
// }

// void m1(float i,int f){
//     cout<<"m2";
// }

// int main(){
//     m1(20,20);
// }

// void m1(int i,float f){
//     cout<<"m1";
// }

// void m1(float i,float f){
//     cout<<"m2";
// }

// int main(){
//     m1(20,20);
// }

// int x,y;
// void add(int a){
//     x=a+1;
// }
// void add(int a,int b){
//     x=a+2;
// }
// int main(){
//     int a=0;
//     add(6,6);
//     cout<<x;
// }

// int x,y;
// void add(double a){
//     x=a+1;
// }
// void add(int a,int b){
//     x=a+2;
// }
// int main(){
//     int a=0;
//     add(6.6);
//     cout<<x;
// }

// void sum(int a,int b,int c,int d){
//     cout<<a+b+c+d;
// }
// void sum(int a,int b,int c){
//     cout<<a+b+c;
// }
// void sum(int a,int b){
//     cout<<a+b;
// }

// int main(){
//     int n;
//     cout<<"enter the choice";
//     cin>>n;
//     if(n==2){
//         int x,y;
//         cin>>x>>y;
//         sum(x,y);
//     }
//     else if(n==3){
//         int x,y,z;
//         cin>>x>>y>>z;
//         sum(x,y,z);
//     }
//     else if(n==4){
//         int w,x,y,z;
//         cin>>w>>x>>y>>z;
//         sum(w,x,y,z);
//     }
//     else{
//         cout<<"enter a valid choice";
//     }
// }

void sum(int a,int b,int c,int d){
    cout<<a+b+c+d;
}
void sum(int a,int b,int c){
    cout<<a+b+c;
}
void sum(int a,int b){
    cout<<a+b;
}

int main(){
    int n;
    cout<<"enter the choice";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum(arr);
}