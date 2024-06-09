#include<iostream>
#include<string>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string a,b;
//     cin>>a;
//     cin>>b;
//     int c=0;
//     for(int i=0;i<5;i++){
//         int d=(a[i]-'0') - (b[i]-'0');
//         if(d<0){
//             cout<<"gerfuivblefuibl"<<endl;
//             return 0;
//         }
//         else{
//             c+=d;
//         }
//     }
//     cout<<c;
// }

int main(){
    char c;
    char v;
    cin>>c;
    cin>>v;
    int x;
    x=c | v;
    cout<<x;
}