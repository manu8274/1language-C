#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void dec(int x){
//     if(x==0)    return;
//     cout<<x<<endl;
//     dec(x-1);
// }

// void dec(int x){
//     if(x==0)    return;
//     dec(x-1);
//     cout<<x<<endl;
// }

// int main(){
//     int c;
//     cin>>c;
//     dec(c);
//     return 0;
// }

//for last occurance:::::::::::::::::::::::::::::::::::::
// int pos(int arr[],int n,int k){
//     if(arr[n-1]==k) return n-1;
//     else    return pos(arr,n-1,k);
// }
// int main(){
//     int n=8;
//     // cin>>n;
//     int arr[]={1,3,5,7,6,2,7,8};
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     int k=7;
//     // cin>>k;
//     cout<<pos(arr,n,k);
// }


//for first occurance:::::::::::::::::::::::::::::::::::::::::
// int pos(int arr[],int n,int k){
//     if(n==0){
//         return -1;
//     }
//     if(arr[0]==k){
//         return 0;
//     }
//     int i=pos(arr+1,n,k);
//     if(i!=-1){
//         return i+=1;
//     }
// }
// int main(){
//     int n=8;
//     // cin>>n;
//     int arr[]={1,3,4,5,7,6,2,7};
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     int k=7;
//     // cin>>k;
//     cout<<pos(arr,n,k);
// }

int pos(int arr[],int n,int k,int i){
    if(arr[i]==k) return i;
    else    return pos(arr+1,n,k,i+1);
}
int main(){
    int n=8;
    // cin>>n;
    int arr[]={1,3,5,7,6,2,7,8};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int k=7;
    // cin>>k;
    cout<<pos(arr,n,k,0);
}