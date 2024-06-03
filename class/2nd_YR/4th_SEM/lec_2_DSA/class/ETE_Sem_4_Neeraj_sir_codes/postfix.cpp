#include <iostream>
#include<stack>
#include<vector>
using namespace std;

// Evaluating Post fix

// int main(){
//     string s;
//     cin >> s;
//     stack<int>st;
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='0' && s[i]<='9')st.push(s[i]-'0');
//         else{
//             if(s[i]=='+'){
//                 int op2=st.top();
//                 st.pop();
//                 int op1=st.top();
//                 st.pop();
//                 st.push(op1+op2);
//             }
//             else if(s[i]=='-'){
//                 int op2=st.top();
//                 st.pop();
//                 int op1=st.top();
//                 st.pop();
//                 st.push(op1-op2);
//             }else if(s[i]=='*'){
//                 int op2=st.top();
//                 st.pop();
//                 int op1=st.top();
//                 st.pop();
//                 st.push(op1*op2);
//             }else if(s[i]=='/'){
//                 int op2=st.top();
//                 st.pop();
//                 int op1=st.top();
//                 st.pop();
//                 st.push(op1/op2);
//             }
//         }
//     }
//     cout << st.top()<<endl;
// }

// creat postfix from infix


int check(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='/' || ch=='*') return 2;
    else if (ch=='^') return 3;
    else return 0;
}

int main(){
    string s;
    cin >> s;
    string ans="";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z') ans.push_back(s[i]);
        else {
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans.push_back(st.top());
                    st.pop();
                }
                if(!st.empty())st.pop();
            }
            else{
                while(!st.empty() && check(st.top()) >check(s[i])){
                    ans.push_back(st.top());
                    st.pop();
                }
                st.push(s[i]);
            }
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    cout<< ans<<endl;
}