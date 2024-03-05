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


class linkedlist
{
    Node *head;
    Node *tail;
    public:
    linkedlist():head(nullptr),tail(nullptr){}

    Node *get_head(){
        return head;
    }

    //26feb
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

    //29feb
    void print_list(){
        Node *itr=head;
        while(itr!=nullptr){
            cout<<itr->get_data()<<"---->";
            itr=itr->next;
        }
        cout<<endl;
    }

    //01march
    void push_at_index(int data,int index){
        if(index==0){
            push_front(data);
            return;
        }
        Node *itr=head;
        int c=1;
        while(itr!=nullptr){
            if(c==index-1){
                Node *n=new Node(data);
                n->next=itr->next;
                itr->next=n;
                break;
            }
            itr=itr->next;
            c++;
        }
        if(itr==nullptr){
            cerr<<"error"<<endl;
        }
    }

    int search_by_val_iter(int val){
        Node *itr=head;
        int c=0;
        while(itr!=nullptr){
            if(itr->get_data()==val) return c;
            c++;
            itr=itr->next;
        }
        return -1;
    }

    bool search_by_val_recur(int val,Node *iter){
        if(iter==nullptr){
            return false;
        }
        if(val==iter->get_data()){
            return true;
        }
        return search_by_val_recur(val,iter->next);
    }
    // 04 march
    int search_by_val_recur_index(int val,Node *iter,int c){
        if(iter==nullptr){
            return -1;
        }
        if(val==iter->get_data()){
            return c;
        }
        return search_by_val_recur_index(val,iter->next,c+1);
    }
    //05 march
    int pop_index(int index){
        int i=0;
        Node *itr=head;
        int t=-1;
        while(itr!=nullptr){
            if(i==index){
                t=itr->get_data();
                itr=itr->next;
            }
            i++;
            itr=itr->next;
        }
        return t;
    }
};