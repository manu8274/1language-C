#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//for using bigger problem we use recursion 

// int facto(int n){
//     if(n==1)    return 1;
//     else    return n*facto(n-1);
// }

// int main(){
//     cout<<facto(5);
//     return 0;
// }

bool check (int arr[],int n){
    if(n==1 || n==0)  return true;
    if(arr[0]<arr[1] && check(arr+1,n-1))   return true;
    return false;
}

int main(){
    int arr[]={1,2,3,6,5};
    bool b=check(arr,5);
    cout<<b;
}   