#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    v.pop_back();
    cout<<v.back();
}

// int main(){
//     int n;
//     int m;
//     cin>>n>>m;
//     vector<int> v1;
//     vector<int>v2;
//     for(int i=0;i<n;i++){
//         int t;
//         cin>>t;
//         v1.push_back(t);
//     }
//     for(int i=0;i<m;i++){
//         int t;
//         cin>>t;
//         v2.push_back(t);
//     }
//     vector<int> ans;
//     int i=0;
//     int v1i=0,v2i=0;
//     int v1s=n,v2s=m;
//     for(int i=0;i<n+m;i++){
        
//     }
// }

// int main(){
//     string s;
//     getline(cin,s);
//     string ans="";
//     int i=0;
//     while(i<s.size()){
//         ans+=min(s[i],s[i+1]);
//         i+=2;
//     }
//     cout<<ans<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         if(a==0 || a+b==0 || a+b+c==0 || a+b+c+d==0 || a+c==0 || a+c+d==0 || a+d==0 ||b==0 
//         || b+c==0 || b+c+d==0 || b+d==0 || c==0||  c+d==0 || d==0){
//             cout<<"YES";
//         }
//         else{
//             cout<<"NO";
//         }
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> v;
//         if(n%2!=0)  n=n-1;
//         for(int i=0;i<n;i++){
//             int t;
//             cin>>t;
//             v.push_back(t);
//         }
//         int a=v[0],b=v[1];
//         bool flag=true;
//         for(int i=2;i<n;i++){
//             if(i%2==0){
//                 if(a!=v[i]){
//                     cout<<"no"<<endl;
//                     flag=false;
//                     break;
//                 }
//             }
//             else{
//                 if(b!=v[i]){
//                     cout<<"no"<<endl;
//                     flag=false;
//                     break;
//                 }
//             }
//         }
//         if(flag){
//             cout<<"yes"<<endl;
//         }
//     }
// }


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

// int jump(vector<int>& nums){
//     if(nums.size()==1)  return 0;
//     if(nums[0]>=nums.size()-1)  return 1;
//     int jp=nums[0];
//     int jc=0;
//     int i=1;
//     while(i<nums.size()){
//         if(jp+i>=nums.size()){
//             // cout<<"start"<<endl;
//             return jc;
//         }
//         else    jc++;
//         int a=0;
//         int mx_a=jp+i;
//         int po=jp+i;
//         while(a<=jp){
//             if(mx_a<nums[a+i]+a+i){
//                 if(nums[a+i]+a+i>=nums.size()){
//                     // cout<<"mid"<<jc<<endl;
//                     return jc+1;
//                 }
//                 mx_a=nums[a+i]+a+i;
//                 po=a+i;
//             }
//             a++;
//         }
//         i=po;
//         jp=nums[po];
//         // jc++;
//     }
//     // cout<<"end";
//     return jc;
// }
// int main(){
//     vector<int>nums={1,2};
//     cout<<jump(nums);
// }