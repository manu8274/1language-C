#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//first we go to end of the array but to check if we reached or not and then we check the key for 0th poition and if we get we find key return 0(for only when previous return val is -1) and then increament the returned val by 1 for each loop to get the precise location;

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

//first we go to end of the array but to check if we reached or not and then we check the key for ith  poition and if we get we find key return i(for only when previous return val is -1) as return value change ie its not -1 amnymore so we do not change it anymore as to nnot get the frst occurance;

// int lstocc2(int arr[],int n,int k,int i){
//     if(i==n) return -1;
    
//     int x=lstocc2(arr,n,k,i+1);
//     if(x==-1){
//         if(arr[i]==k)   return i;
//         else    return -1;
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
//     // cout<<lstocc1(arr,n,k)<<endl;
//     cout<<lstocc2(arr,n,k,0);
// }

//first we go to end and then we return a vector in which if we find key at the index then we push_back the i to the returned vector we is inturned returned as another vector, atlast we get the vector with all position in it 
// vector<int> findoc(int arr[],int n,int k,int i){
//     if(i==n){
//         vector<int> v={};
//         return v;
//     }
//     vector<int> x=findoc(arr,n,k,i+1);
    
//     if(arr[i]==k){
//         x.push_back(i);
//     }
//     return x;
// }

//first we go to end and then we return a vector in which if we find key at the index then we push_back the n-1 to the returned vector we is inturned returned as another vector, atlast we get the vector with all position in it 

vector<int> findoc2(int arr[],int n,int k){
    if(n==0){
        vector<int> v={};
        return v;
    }
    vector<int> x=findoc2(arr,n-1,k);
    
    if(arr[n-1]==k){
        x.push_back(n-1);
    }
    return x;
}

int main(){
    int arr[]={1,3,1,3,1,3,1,3,1,3};
    int n=10;
    int k=1;
    int i=0;
    // vector<int> vector=findoc1(arr,n,k);
    vector<int> vector=findoc2(arr,n,k);
    if(vector.size()==0)    cout<<-1;
    for(int i=0;i<vector.size();i++){
        cout<<vector[i]<<"\t";
    }
}