#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;
//     //for k smallest element
//     // priority_queue<int>pq;
//     // for(int i=0;i<k;i++){
//     //     int t;
//     //     cin>>t;
//     //     pq.push(t);
//     // }
//     // for(int i=k;i<n;i++){
//     //     int t;
//     //     cin>>t;
//     //     if(t<pq.top()){
//     //         pq.pop();
//     //         pq.push(t);
//     //     }
//     // }
//     // cout<<pq.top();
//     //for k largest element
//     // priority_queue<int,vector<int>,greater<int>>pq;//to make min heap
//     // for(int i=0;i<k;i++){
//     //     int t;
//     //     cin>>t;
//     //     pq.push(t);
//     // }
//     // for(int i=k;i<n;i++){
//     //     int t;
//     //     cin>>t;
//     //     if(t>pq.top()){
//     //         pq.pop();
//     //         pq.push(t);
//     //     }
//     // }
//     // cout<<pq.top();
// }

int main(){
    int n;
    cin>>n;
    queue<string>q;
    q.push("0");
    q.push("1");
    string ans="";
    string t;
    for(int i=0;i<n;i++){
        t=q.front();
        q.push(t+"0");
        q.push(t+"1");
        q.pop();
        ans=ans+t;
        cout<<t<<"\t";
    }
    cout<<endl<<ans;
}