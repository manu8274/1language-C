#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    public:
    Node *next;//as it has to be the data type of next node data;
    Node(int d):data(d),next(nullptr){}
    int get_data(){//to gat data
        return data;
    }
};


class lindeklist
{
    Node *head;
    Node *tail;
    public:
    lindeklist():head(nullptr),tail(nullptr){}

    Node *get_head(){
        return head;
    }

    void push_front(int x){//two cases when head is null then ll is empty else head is not null and ll is not empty
        if(head==nullptr)
        {
            Node *n=new Node(x);
            head = tail = n;
        }
        else{
            Node *n=new Node(x);
            n->next=head;//(*n).next=head;
            head=n;
            
        }
    }

    void push_back(int x){
        if(head==nullptr){
            Node *n=new Node(x);
            head=tail=n;
        }
        else{
            Node *n=new Node(x);
            tail->next=n;
            tail=n;
        }
    }

    void push_at_index(int data,int index){
        Node *itr=head;
        int c=0;
        while(itr!=nullptr){
            if(c==index-1){
                Node *n=new Node(data);
                n->next=itr->next;
                itr->next=n;
            }
            itr=itr->next;
            c+=1;
        }
    }

    void print_list(){
        Node *itr=head;
        while(itr!=nullptr){
            cout<<itr->get_data()<<"\t";
            itr=itr->next;
        }
        cout<<endl;
    }
};