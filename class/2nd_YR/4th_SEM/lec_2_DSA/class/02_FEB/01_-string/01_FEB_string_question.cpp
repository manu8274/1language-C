#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// // Q2 to reverse by given number and order
// int main(){
//     string s;
//     cout<<"enter the string : ";
//     getline(cin,s);
//     int len=s.length();
//     int n;
//     cout<<"enter the number of times : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int arr1[len]={0};
//     for(int i=0;i<n;i++){
//         for(int j=arr[i];j<len-arr[i];j++){
//             if(arr1[j]==0)  arr1[j]=1;
//             else    arr1[j]=0;
//         }
//     }
//     for(int i=0;i<len;i++){
//         if(arr1[i]==0)  cout<<s[i];
//         else    cout<<s[len-i-1];
//     }
//     cout<<"\n";
//     return 0;
// }

int main(){
    int buyday=0,sellingday=0,profit=0,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[buyday]<arr[i]){
            if(profit<arr[i]-arr[buyday]){
                sellingday=i;
                profit=arr[i]-arr[buyday];
            }
        }
        else{
            buyday=i;
        }
    }
    cout<<profit;
}