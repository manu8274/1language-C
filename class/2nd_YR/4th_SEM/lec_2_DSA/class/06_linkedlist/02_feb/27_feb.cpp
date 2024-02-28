#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//vector wasting memory in a way
//any operation performed on array/vector is costly process as all address are recalculated
//so we use linked list
//::::::::::::::::::::::::::::::::::::linked list::::::::::::::::::
//it contains number of nodes which further contain data and next node address,
//two pointer linked with linked list :: 1)head - which contains top node address,2)

//operations to perform:insert,delete,update,searching,creating,printing,deleting whole linked list


class Node
{
    int data;
    public:
    Node *next;//as it has to be the data type of next node data;
    Node(int d):data(d),next(nullptr){}
};


class lindeklist
{
    Node *head;
    Node *tail;
    public:
    lindeklist():head(nullptr),tail(nullptr){}
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
};

int main(){

}