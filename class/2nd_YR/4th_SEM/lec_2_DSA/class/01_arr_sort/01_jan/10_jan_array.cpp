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
//     int k;
//     cin>>k;
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         if(arr[i]==k){
//             cout<<i<<" ";
//             flag=true;
//         }
//     }
//     if(flag==false){
//         cout<<"NOT FOUND";
//     }
// }


////2)BINARY SEARCH

// int binsrch(int *arr,int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;

//     while(start<=end){
//         if(key<arr[mid]){
//             end=mid-1;
//             mid=(start+end)/2;
//         }
//         else if(key==arr[mid])  return mid;
//         else{
//             start=mid+1;
//             mid=(start+end)/2;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int k;
//     cin>>k;
//     int x=binsrch(arr,10,k);
//     if(x==-1)   cout<<"NOT FOUND"<<endl;
//     else    cout<<"YOUR ELEMENT IS AT INDEX "<<x<<endl;
//     return 0;
// }

//reversal of array

int reverse(int *arr,int size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    cout<<"FINAL ARRAY:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}