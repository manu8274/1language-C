#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string t;
    cin>>t;
    if(t!="Null"){
        int x=stoi(t);
        cout<<typeid(x).name();
    }
    else{
        cout<<t;
    }
}