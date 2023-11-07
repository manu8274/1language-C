#include<iostream>
#include<string>
using namespace std;

// int main(){
//     string str;
//     cout<<"enter the string : ";
//     getline(cin,str);
//     string str1="";
//     for(int i=0;i<str.size();i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str1+=str[i]+32;
//             str[i]=str[i]+32;
//         }
//         else if(str[i]>='a' && str[i]<='z'){
//             str1+=str[i]-32;
//             str[i]=str[i]-32;
//         }
//         else{
//             str1+=str[i];
//         }
//     }
//     cout<<str1;
//     cout<<endl<<str;
// }

// int sum(int n){
//     if(n==1)    return 1;
//     else    return (n+sum(n-1));
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }

int facto(int n){
    if(n==1)    return 1;
    else    return (n*facto(n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<facto(n);
}


// int fibo(int n){
//     if(n<=1)    return n;
//     else    return fibo(n-1) + fibo(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fibo(n-1);
// }