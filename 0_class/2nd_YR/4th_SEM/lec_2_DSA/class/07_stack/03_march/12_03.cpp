#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// class Node
// {
//     int data;
//     public:
//     Node *next;//as it has to be the data type of next node data;
//     Node(int d):data(d),next(nullptr){}
//     int get_data(){//to gat data
//         return data;
//     }
// };

// class mystack{
//     Node *head;
//     int size=0;
//     public:
//         mystack():head(nullptr),size(0){}
//         void push(int data){
//             Node *temp =new Node (data);
//             temp->next=head;
//             size++;
//             head=temp;
//         }
//         int pop(){
//             if(head==nullptr)   cerr<<"underflow"<<endl;
//             int x=head->get_data();
//             head=head->next;
//             size--;
//             return x;
//         }
//         int top(){
//             if(head==nullptr)   cerr<<"underflow"<<endl;
//             return head->get_data();
//         }
//         int size(){
//             return size;
//         }
// };

// int main(){
//     mystack st;
//     st.pop();
// }

int main(){
    stack<int> st;
    vector<int> v={4,10,5,6,20,15,3,7};
    for(auto x:v){
        while(!st.empty() && st.top()>=x){
            st.pop();
        }
        if(st.empty())  cout<<-1<<"\t";
        else    cout<<st.top()<<"\t";
        st.push(x);
    }
}