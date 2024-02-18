#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }

    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(v[i])!=mp.end()){
            mp[v[i]]++;
        }
        else{
            mp[v[i]]=1;
        }
    }
    set<int>st(v.begin(),v.end());
    vector<int>res;
    for(auto x:st){
        for(int i=0;i<mp[x];i++){
            res.push_back(x);
        }
    }

    cout<<"ANSWER : "<<endl;
    for(auto x:res){
        cout<<x<<" ";
    }
}