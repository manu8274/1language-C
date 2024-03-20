// common pattern that is requirement for element after long time
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>f(26,0);
    string s;
    cin>>s;
    string ans="";
    queue<int> q;
    for(auto i:s){
        if(f[i-97]==0){
            q.push(i);
        }
        f[i-97]++;
        while(f[q.front()-97]>1){
            q.pop();
        }
        if(q.empty()){
            ans+="0";
        }
        else{ans+=q.front();}
    }
    cout<<ans;
}