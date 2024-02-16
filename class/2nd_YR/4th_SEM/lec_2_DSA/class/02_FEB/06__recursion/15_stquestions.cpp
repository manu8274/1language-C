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

void fun(string st){
    // set<char>ts(st.begin(),st.end());
    // string t;
    // for(auto x:ts){
    //     t.push_back(x);
    // }
    // return t;
    map<char,int>mp;
    for(int i=0;i<st.size();i++){
        if(mp.find(st[i])!=mp.end()){
            mp[st[i]]++;
        }
        else{
            mp[st[i]]=1;
        }
    }
    for(auto x=mp.begin();x!=mp.end();++x){
        cout<< x->first<<'\t'<<x->second<<'\t';
    }
}
int main(){
    string c;
    getline(cin,c);
    fun(c);
}