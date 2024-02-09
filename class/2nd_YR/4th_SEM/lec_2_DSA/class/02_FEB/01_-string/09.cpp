#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int lstocc1(int arr[],int n,int k){
//     if(n==0) return -1;
    
//     int x=lstocc1(arr+1,n-1,k);
//     if(x==-1){
//         if(arr[0]==k)   return 0;
//         else    return -1;
//     }
//     if(x!=-1){
//         return x+1;
//     }
//     // return x;
// }

// int lstocc2(int arr[],int n,int k,int i){
//     if(i==n) return -1;
    
//     int x=lstocc2(arr,n,k,i+1);
//     if(x==-1){
//         if(arr[i]==k)   return 0;
//         else    return -1;
//     }
//     if(x!=-1){
//         return x+1;
//     }
//     // return x;
// }


// int main(){
//     int n=7;
//     // cin>>n;
//     int arr[]={1,3,5,3,6,2,3};
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     int k=3;
//     // cin>>k;
//     cout<<lstocc1(arr,n,k)<<endl;
//     cout<<lstocc2(arr,n,k,0);
// }


vector<int> findoc(int arr[],int n,int k,int i){
    if(i==n){
        vector<int> v={};
        return v;
    }
    vector<int> x=findoc(arr,n,k,i+1);
    
    if(arr[i]==k){
        x.push_back(i);
    }
    return x;
}

int main(){
    int arr[]={1,3,1,3,1,3,1,3,1,3};
    int n=10;
    int k=1;
    int i=0;
    vector<int> vector=findoc(arr,n,k,i);
    if(vector.size()==0)    cout<<-1;
    for(int i=0;i<vector.size();i++){
        cout<<vector[i]<<"\t";
    }
}