#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        pq.push(t);
    }
    int s=0,s1=0;
    for(int i=0;i<n;i++){
        int x=pq.top();
        cout<<x<<"\t";
        s1+=x;
        s+=s1;
        pq.pop();
    }
    cout<<endl<<s;
}