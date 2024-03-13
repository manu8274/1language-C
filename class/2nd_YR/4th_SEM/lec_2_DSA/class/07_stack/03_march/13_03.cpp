#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     stack<int> st;
//     vector<int> v={4,10,5,6,20,15,3,7};
//     reverse(v.begin(),v.end());
//     vector<int>ans;
//     for(auto x:v){
//         while(!st.empty() && st.top()>=x){
//             st.pop();
//         }
//         if(st.empty())  ans.push_back(-1);
//         else    ans.push_back(st.top());
//         st.push(x);
//     }
//     reverse(ans.begin(),ans.end());
//     for(auto x:ans){
//         cout<<x<<"\t";
//     }
// }

//to find max area for rectangular bar in bar graph
// int main(){
//     stack<int> st;
//     vector<int> v={4,10,5,6,20,15,3,7};
//     vector<int>prevsmal;
//     for(int i=0;i<v.size();i++){
//         while(!st.empty() && st.top()>=v[i]){
//             st.pop();
//         }
//         if(st.empty())  prevsmal.push_back(-1);
//         else    prevsmal.push_back(st.top());
//         st.push(i);
//     }
//     cout<<"prevsmal"<<endl;
//     for(auto x:prevsmal){
//         cout<<x<<"\t";
//     }
//     cout<<endl;
//     //for nextsmall
//     stack<int>st1;
//     vector<int>v1=v;
//     reverse(v1.begin(),v1.end());
//     vector<int> nextsmal;
//     for(int i=0;i<v1.size();i++){
//         while(!st1.empty() && st1.top()>=v1[i]){
//             st1.pop();
//         }
//         if(st1.empty())  nextsmal.push_back(-1);
//         else    nextsmal.push_back(st1.top());
//         st1.push(i);
//     }
//     reverse(nextsmal.begin(),nextsmal.end());//for nextsmall
//     cout<<"nextsmal"<<endl;
//     for(auto x:nextsmal){
//         cout<<x<<"\t";
//     }
//     cout<<endl;
//     //formula (nextsmaller[i]-prevsmaller[i]-1)*vector[i]
//     int mx=0;
//     for(int i=0;i<v.size();i++){
//         mx=max(mx,(nextsmal[i]-prevsmal[i]-1)*v[i]);
//     }
//     cout<<mx;
// }