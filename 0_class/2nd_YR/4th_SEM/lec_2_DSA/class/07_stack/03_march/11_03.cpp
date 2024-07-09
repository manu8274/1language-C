#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//to make an array behave as a stack
// class mystack{
//     int *a;
//     int top;
//     int capacity;
//     public:
//         mystack(int capacity){
//             this->capacity=capacity;
//             top=-1;
//             a=new int(capacity);
//         }
//         void push(int data){
//             if(top==capacity-1) cerr<<"overflow";
//             else{
//                 top++;
//                 a[top]=data;
//             }
//         }
//         int pop(){
//             if(top==-1) cerr<<"underflow";
//             else{
//                 top-=1;
//                 return a[top+1];
//             }
//         }
//         int get_top(){
//             if(top==-1) cerr<<"underflow";
//             else{
//                 return a[top];
//             }
//         }
//         bool isempty(){
//             if(top==-1) return true;
//             else{
//                 return false;
//             }
//         }
//         int size(){
//             return top+1;
//         }
// };

class mystack{
    vector<int> a;
    public:
        void push(int data){
            a.push_back(data);
        }
        int pop(){
            if(a.size()==0) cout<<"underflow";
            else{
                int x=a[a.size()-1];
                a.pop_back();
                return x;
            }
        }
        int get_top(){
            if(a.size()==0) cerr<<"underflow";
            else{
                return a[a.size()-1];
            }
        }
        bool isempty(){
            return a.size()==0;
        }
        int size(){
            return a.size();
        }
};

int main(){
    mystack st;
    st.push(100);
    st.push(200);
    st.push(300);
    cout<<st.pop()<<endl;
    cout<<st.get_top()<<endl;
    cout<<st.isempty()<<endl;
    cout<<st.size()<<endl;
}