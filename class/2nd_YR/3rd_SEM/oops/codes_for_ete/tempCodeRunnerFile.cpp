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
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}

int isop(char op){
    return (op=='+' || op=='-' || op=='*' || op=='/' || op=='^');
}

int main(){
    string s;
    getline(cin,s);
    string pf;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==' ' || s[i]=='\t'){
            continue;
        }
        if((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            pf+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                pf+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if(isop(s[i])){
            while(!st.empty() && priority(s[i])<=priority(st.top())){
                pf+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        pf+=st.top();
        st.pop();
    }

    cout<<pf;
    return 0;
}