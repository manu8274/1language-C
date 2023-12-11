#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
///prefix sol
// int main(){
//     string x;
//     cin>>x;
//     reverse(x.begin(),x.end());
//     vector <int> v;
//     for(int i=0;i<x.size();i++){
//         if((x[i]-'0')>=0 && (x[i]-'0')<=9){
//             v.push_back(x[i]-'0');
//         }
//         else{
//             int k;
//             if(x[i]=='+'){
//                 k=v.end()[-1] + v.end()[-2];
//             }
//             else if(x[i]=='-'){
//                 k=v.end()[-1] - v.end()[-2];
//             }
//             else if(x[i]=='*'){
//                 k=v.end()[-1] * v.end()[-2];
//             }
//             else if(x[i]='/'){
//                 k=v.end()[-1] / v.end()[-2];
//             }
//             v.pop_back();
//             v.pop_back();
//             v.push_back(k);
//         }
//     }
//     cout<<x<<endl;
//     // cout<<"final answer : "<<v[0];
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<"\t";
//     }
// }

//////////////////////////postfix::::::::::::::::

// infix to postfix

int priority(char op){
    if(op=='+' || op=='-')  return 1;
    else if(op=='*' || op=='/') return 2;
    else if(op=='^')    return 3;
    else    return -1;
}

int main(){
    string x="(a+b)+(c+d)";
    stack<char> st;
    vector<char> result;
    for(int i=0;i<x.size();i++){
        char c=x[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            result.push_back(c);
        }
        else if(x[i]=='('){
            st.push(c);
        }
        else if(x[i==')']){
            while(st.top()=='('){
                result.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && priority(x[i])<=priority(st.top())){
                result.push_back(st.top());
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
    cout<<endl;
    return 0;
}

