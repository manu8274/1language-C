#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

// int x=5;

// void b(){
//     cout<<50+x;
// }

// void a(){
//     int x=100;
//     b();
// }

// int main(){
//     int i=5;
//     char s='t';
//     string t;
//     t=s;
//     cout<<t;
// }


// int main(){
//     int n=5;
//     // cin>>n;
//     int arr[n]={1,4,2,5,3};
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     vector<int>mlar;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             if(2*i-1<=n)    mlar.push_back(i);
//             else    mlar.push_back(n-i+1);
//         }
//     }
//     int ts=0;
//     int x;
//     if(n%2==0)  x=n/2;
//     else    x=n/2+1;
    
//     for(int i=0;i<x;i++){
//         int t=0;
//         if(n%2!=0 && i==n/2){
//             for(int j=0;j<mlar.size();j++){
//                 t+=arr[i]*(fmin(i+1,mlar[j]));
//             }
//         }
//         else{
//             for(int j=0;j<mlar.size();j++){
//                 t+=(arr[i]+arr[n-i-1])*(fmin(i+1,mlar[j]));
//             }
//         }
//         ts+=t;
//     }
//     cout<<ts;
// }

int jump(vector<int>& nums){
    if(nums.size()==1)  return 0;
    if(nums[0]>=nums.size()-1)  return 1;
    int jp=nums[0];
    int jc=0;
    int i=1;
    while(i<nums.size()){
        if(jp+i>=nums.size()){
            // cout<<"start"<<endl;
            return jc;
        }
        else    jc++;
        int a=0;
        int mx_a=jp+i;
        int po=jp+i;
        while(a<=jp){
            if(mx_a<nums[a+i]+a+i){
                if(nums[a+i]+a+i>=nums.size()){
                    // cout<<"mid"<<jc<<endl;
                    return jc+1;
                }
                mx_a=nums[a+i]+a+i;
                po=a+i;
            }
            a++;
        }
        i=po;
        jp=nums[po];
        // jc++;
    }
    // cout<<"end";
    return jc;
}
int main(){
    vector<int>nums={1,2};
    cout<<jump(nums);
}