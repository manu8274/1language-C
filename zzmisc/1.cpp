#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

// int x=5;

// void b(){
//     cout<<50+x;
// }

// void a(){
//     int x=100;
//     b();
// }

int main(){
    int i=5;
    char s='t';
    string t;
    t=s;
    cout<<t;
}


// int main(){
//     int n=5;
//     // cin>>n;
//     int arr[n]={1,4,2,5,3};
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     vector<int>mlar;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             if(2*i-1<=n)    mlar.push_back(i);
//             else    mlar.push_back(n-i+1);
//         }
//     }
//     int ts=0;
//     int x;
//     if(n%2==0)  x=n/2;
//     else    x=n/2+1;
    
//     for(int i=0;i<x;i++){
//         int t=0;
//         if(n%2!=0 && i==n/2){
//             for(int j=0;j<mlar.size();j++){
//                 t+=arr[i]*(fmin(i+1,mlar[j]));
//             }
//         }
//         else{
//             for(int j=0;j<mlar.size();j++){
//                 t+=(arr[i]+arr[n-i-1])*(fmin(i+1,mlar[j]));
//             }
//         }
//         ts+=t;
//     }
//     cout<<ts;
// }