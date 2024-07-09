#include<iostream>
#include<bits/stdc++.h>

using namespace std;

///to give all cases of string

// void permute1(string &in,int i,int n){
//     //base case
//     if(i==n-1){
//         cout<<in<<endl;
//         return;
//     }
//     //operation
//     for(int j=i;j<n;j++){
//         swap(in[i],in[j]);
//         permute1(in,i+1,n);
//         swap(in[i],in[j]);
//     }
// }


// int main(){
//     string in;
//     cin>>in;
//     permute1(in,0,in.size());
//     return 0;
// }

// vector<string> permute12(string &in,int i,int n){
//     //base case
//     if(i==n-1){
//         vector<string> v1;
//         v1.push_back(in);
//         return v1;
//     }
//     //operation
//     vector<string> v1;
//     for(int j=i;j<n;j++){
//         swap(in[i],in[j]);
//         vector<string>v=permute12(in,i+1,n);
//         for(auto x:v){
//             v1.push_back(x);
//         }
//         swap(in[i],in[j]);
//     }
//     return v1;
// }


// int main(){
//     string in;
//     cin>>in;
//     vector<string> ans=permute12(in,0,in.size());
//     for(auto x: ans){
//         cout<<x<<endl;
//     }
//     return 0;
// }

// vector<string> permute12(char in[],int i,int n){
//     //base case
//     if(i==n-1){
//         vector<string> v1;
//         v1.push_back(in);
//         return v1;
//     }
//     //operation
//     vector<string> v1;
//     for(int j=i;j<n;j++){
//         swap(in[i],in[j]);
//         vector<string>v=permute12(in,i+1,n);
//         for(auto x:v){
//             v1.push_back(x);
//         }
//         swap(in[i],in[j]);
//     }
//     return v1;
// }


// int main(){
//     int n;
//     cin>>n;
//     char in[n];
//     cin>>in;
//     vector<string> ans=permute12(in,0,n);
//     for(auto x: ans){
//         cout<<x<<endl;
//     }
//     return 0;
// }


