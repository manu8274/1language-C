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
//     int x;
//     cin>>x;
//     sort(arr,arr+n);
//     int count=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i+1]-arr[i]<=x){
//             count++;
//             i++;
//         }
//     }
//     cout<<count;
// }

// int main(){
//     int n;
//     string s;
//     cin>>s;
//     n=s.size();
//     bool f=true;
//     for(int i=0;i<n/2;i++){
//         if(s[i]!=s[n-i-1]){
//             f=false;
//             break;
//         }
//     }
//     if(f==true) cout<<"TRUE";
//     else    cout<<"FALSE";
// }

//////////////remover duplicate and return sorted string

// void fun(string st){
//     // set<char>ts(st.begin(),st.end());
//     // string t;
//     // for(auto x:ts){
//     //     t.push_back(x);
//     // }
//     // return t;
//     map<char,int>mp;
//     for(int i=0;i<st.size();i++){
//         if(mp.find(st[i])!=mp.end()){
//             mp[st[i]]++;
//         }
//         else{
//             mp[st[i]]=1;
//         }
//     }
//     for(auto x=mp.begin();x!=mp.end();++x){
//         cout<< x->first<<'\t'<<x->second<<'\t';
//     }
// }
// int main(){
//     string c;
//     getline(cin,c);
//     fun(c);
// }

//////////friends party

// int fp(int n){
//     if(n==0)    return 0;
//     if(n==1 || n==2)    return n;
    // return fp(n-1)+(n-1)*fp(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fp(n)<<endl;
//     return 0;
// }

//////////////////binary strings

// vector<string>v;

// void help(string str,int n,int i){
//     if(i==n){
//         v.push_back(str);
//         return;
//     }
//     string s1=str;
//     s1.push_back('0');
//     help(s1,n,i+1);

//     if(i>0 && str[i-1]=='0'){
//         str.push_back('1');
//         help(str,n,i+1);
//     }
//     else if(i==0){
//         str.push_back('1');
//         help(str,n,i+1);
//     }
//     return;
// }

// vector<string> bs(int n){
//     v.clear();
//     string str;
//     help(str,n,0);
//     return v;
// }



// void f1 (int n,int index,string current,vector<string>&res){
//     if(index==n){
//         res.push_back(current);
//         return;
//     }
//     f1(n,index+1,current+"0",res);
//     if(index==0 || current[index-1]!='1'){
//         f1(n,index+1,current+"1",res);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     // string s(n,'0');
//     vector<string> v1;
//     f1(n,0,"",v1);
//     for(auto x:v1){
//         cout<<x<<endl;
//     }
// }



// int main(){
//     vector<int> v={9,8,7,6,5,4,3,2,1};
//     set<int>st(v.begin(),v.end());
//     int t=*(st.begin());
//     cout<<t<<endl;
//     for(auto x:st){
//         cout<<x<<endl;
//         if(x==3)    break;
//     }
// }

