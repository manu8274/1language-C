#include<iostream>
#include<math.h>
using namespace std;

// int sum(int n){
//     if(n==0)    return 0;
//     else    return n+sum(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<"the sum upto "<<n<<"="<<sum(n);
// }


// int facto(int n){
//     if(n==0)    return 1;
//     else    return n*sum(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<"the facto upto "<<n<<"= "<<facto(n);
// }

// int facto(int n){
//     if(n==0)    return 1;
//     else    return n*facto(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     if(n<0){
//         cout<<"the facto upto "<<n<<"= "<<pow(-1,n)*(facto(n));
//     }
//     else{
//         cout<<"the facto upto "<<n<<"= "<<(facto(n));
//     }
// }



// int fibo(int a,int b,int n){
//     if(n>0){
//         cout<<b<<" ";
//         fibo(b,a+b,n-1);
//     }
// }

// int main(){
//     int n;
//     int a=0,b=1;
//     cin>>n;
//     cout<<a<<" ";
//     fibo(a,b,n);
// }

int fibo(int n){
    if(n<=1)    return n;
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<" ";
    }
}
