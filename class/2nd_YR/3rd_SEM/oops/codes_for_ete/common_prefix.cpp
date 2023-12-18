#include<iostream>
#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;

int main(){
    vector <string>  v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        v.push_back(c);
    }
    int sz=v[0].size();
    for(int i=1;i<n;i++){
        sz=fmin(sz,v[i].size());
    }
    string p="";
    for(int j=0;j<sz;j++){
        char c=v[0][j];
        bool flag = true;
        for(int i=1;i<n;i++){
            if(v[i][j]!=c){
                flag=false;
            }
        }
        if(flag==true)  p+=c;
        else    break;
    }
    if(p.size()>0)  cout<<p;
    else
    {
            cout<<"\"\"";

    }
    
}