#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int marks[100]={1,2};
//     // int n;
//     // cin>>n;
//     // for(int i=0;i<n;i++){
//     //     cin>>marks[i];
//     // }

//     // cout<<"print marks array:"<<endl;
//     // for(int i=0;i<n;i++){
//     //     cout<<marks[i]<<" ";
//     // }
//     cout<<marks[10];
//     return 0;
// }

////////////using functions for array :::::::::::::::::::::::::::::::::::::


// void printarr(int *arr,int n){
//     cout<<"INSDIDE FUNCTION"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<arr+1<<endl;
//     cout<<"FUNCTION OUT"<<endl;
// }

// int main(){
//     int arr[]={2,5,3,7,4};
//     cout<<sizeof(arr)<<endl;
//     cout<<sizeof(arr)/sizeof(arr[0])<<endl;
//     printarr(arr,5);
//     cout<<(arr+1);
//     return 0;
// }

///////////////////ALGORITHM FOR ARRAY::::::::::::::::::::::::::::::::::::::::
///////////1) SEARCHING ALGO --- LINEAR AND BINARY
////1)LINEAR SEARCH

// int linesrch(int *arr,int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key) return i;
//     }
//     return -1;
// }

// int main(){
//     int arr[]={4,2,7,5,9};
//     int k;
//     cin>>k;
//     int x=linesrch(arr,5,k);
//     if(x==-1)   cout<<"NOT IN ARRAY"<<endl;
//     else    cout<<"YOUR ELEMENT IS AT INDEX "<<x<<endl;
//     return 0;
// }

// ////2)BINARY SEARCH

int binsrch(int *arr,int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(key<arr[mid]){
            end=mid-1;
            mid=(start+end)/2;
        }
        else if(key==arr[mid])  return mid;
        else{
            start=mid+1;
            mid=(start+end)/2;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    cin>>k;
    int x=binsrch(arr,10,k);
    if(x==-1)   cout<<"NOT FOUND"<<endl;
    else    cout<<"YOUR ELEMENT IS AT INDEX "<<x<<endl;
    return 0;
}