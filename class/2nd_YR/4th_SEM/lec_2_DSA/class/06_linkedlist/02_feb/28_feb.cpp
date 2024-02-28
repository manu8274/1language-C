#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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