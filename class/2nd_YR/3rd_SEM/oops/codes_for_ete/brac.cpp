#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string c;
    cin>>c;
    stack<char> st;
    for(int i=0;i<c.size();i++){
        if(c[i]=='(' || c[i]=='{' || c[i]=='['){
            st.push(c[i]);
        }
        else{
            if(c[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    cout<<"invalid";
                    return 0;
                }
            }
            else if(c[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else{
                    cout<<"invalid";
                    return 0;
                }
            }
            else if(c[i]==']'){
                if(st.top()=='['){
                    st.pop();
                }
                else{
                    cout<<"invalid";
                    return 0;
                }
            }
        }
    }
    if(st.empty()){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
}