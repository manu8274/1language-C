#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxpairsum=-1;

//     for(int i=0;i<n;i++){
//         vector<int> num={0,0,0,0,0,0,0,0,0};
//         int t=arr[i];
//         while(t>0){
//             int d=t%10;
//             num[d]+=1;
//             t=t/10;
//         }
//         for(int j=i+1;j<n;j++){
//             vector<int> v={0,0,0,0,0,0,0,0,0};
//             int x=arr[j];
//             while(x>0){
//                 int d=x%10;
//                 v[d]+=1;
//                 x=x/10;
//             }
//             if(v==num){
//                 maxpairsum=fmax(maxpairsum,arr[i]+arr[j]);
//             }
//         }
//     }
//     cout<<maxpairsum;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxpairsum=-1;
//     // n=arr.size();
//     for(int i=0;i<n;i++){
//         int t=arr[i];
//         int max_i=0;
//         while(t>0){
//             max_i=fmax(t%10,max_i);
//             t=t/10;
//         }

//         for(int j=i+1;j<n;j++){
//             int max_j=0;
//             int y=arr[j];
//             while(y>0){
//                 max_j=fmax(y%10,max_j);
//                 y=y/10;
//             }
//             if(max_j==max_i){
//                 maxpairsum=fmax(maxpairsum,arr[i]+arr[j]);
//             }
//         }
//     }
//     cout<<maxpairsum;
// }
int main(){
    vector<int>v;
    v.push_back(100);
    v.push_back(99);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}