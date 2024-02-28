#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//for n*n complexity subarray sum
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // prefix array
//     // we will creata a new prefix array where 1st element is same and onwards is sum or the array uptill that index we use for i to j prefix[j] - prefix[i-1] for i=0 we give back prefix[j] only
//     int prefixarr[n];
//     int s=INT_MIN;
//     for(int i=0;i<n;i++){
//         s+=arr[i];
//         prefixarr[i]=s;
//     }

//     int max=INT_MIN;
//     int a,b;
//     for (int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(i!=0){
//                 // max=fmax(prefixarr[j]-prefixarr[i-1],max);
//                 if(max<=prefixarr[j]-prefixarr[i-1]){
//                     max=prefixarr[j]-prefixarr[i-1];
//                     a=i;
//                     b=j;
//                 }
//             }
//             else{
//                 // max=fmax(prefixarr[j],max);
//                 if(max<=prefixarr[j]){
//                     max=prefixarr[j];
//                     a=i;
//                     b=j;
//                 }
//             }
//         }
//     }
//     cout<<max<<endl;
//     for(int i=a;i<=b;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//for n complexity subarray sum::::::::::::::::::::::::
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //to init cursum=0 largestsum=0 largestsum=max(largestsum,cursum)
    int curr=0,largsum=0;
    for(int i=0;i<5;i++){
        curr+=arr[i];
        if(curr<0)  curr=0;
        largsum=fmax(largsum,curr);
    }
    cout<<largsum;
}