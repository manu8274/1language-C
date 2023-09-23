#include<iostream>
using namespace std;

// int main(){
//     int a,b;
//     cout<<"enter the numbers";
//     cin>>a>>b;

//     if(a>b){
//         cout<<a<<" is greater than "<<b<<endl;
//     }
//     else{
//         cout<<b<<" is greater than "<<a<<endl;
//     }
// }

// int main(){
//     char a;
//     cout<<"enter the numbers";
//     cin>>a;

//     if(a>='a' && a<='z'){
//         cout<<a<<" is lower case"<<endl;
//     }
//     else if(a>='A' && a<='Z'){
//         cout<<a<<" is upper case"<<endl;
//     }
//     else if(a>='0' and a<='9'){
//         cout<<a<<" is a number"<<endl;
//     }
//     else{
//         cout<<"enter a valid response"<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int x=1;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<x;
//             x+=1;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<n-j;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<i-j<<"\t";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     char x='A';
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<char(x+j)<<"\t";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     char x='A';
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<char(x+i+j-1)<<"\t";
//         }
//         cout<<endl;
//     }
// }

int main(){
    int n;
    cin>>n;
    char x='A';
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<char(x+i+j-1)<<"\t";
        }
        cout<<endl;
    }
}