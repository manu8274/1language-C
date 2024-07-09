#include<iostream>
#include<bits/stdc++.h>
#include"05_03_header.h"
using namespace std;

Node *merge(Node * h1,Node *h2){
    Node *a,*b;
    a=h2;
    // int i=0;
    while(h1 || h2){
        if(!h1->next){
            h1->next=h2;
            return h1;
        }
        else if(!h2->next){
            
            
            return h1;
        }
        else if(h2){
            b=h2->next;
            h2->next=h1->next;
            h1->next=a;
            a=b;
        }
        h1->next=h1->next->next;
        h2->next
    }
    return h1;
}

void print(Node*h){
    while(h){
        cout<<h->get_data()<<"\t";
        h=h->next;
    }
    cout<<endl;
}

int main(){
    linkedlist ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    print(ll.get_head());
    linkedlist ll1;
    ll1.push_back(6);
    ll1.push_back(7);
    ll1.push_back(8);
    ll1.push_back(9);
    ll1.push_back(10);
    print(ll1.get_head());
    Node *h=merge(ll.get_head(),ll1.get_head());
    print(h);
}