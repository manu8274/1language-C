// #include<iostream>
// #include<bits/stdc++.h>
// #include "05_03_header.h"
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node * next;
//         Node(int d):data(d),next(nullptr){}
// };

// Node *create(int n){
//     Node *head=nullptr,*tail=nullptr;
//     while(n--){
//         int val;
//         cin>>val;
//         Node *n=new Node(val);
//         if(head==nullptr){
//             head=tail=n;
//         }
//         else{
//             tail->next=n;
//             tail=n;
//         }
//     }
//     return head;
// }

// void print (Node *head){
//     while(head!=nullptr){
//         cout<<head->data<<"--->";
//         head=head->next;
//     }
//     cout<<endl;
// }

// Node *deletetail(Node *head){
//     Node *sl=head;
//     while(sl->next->next!=nullptr){
//         sl=sl->next;
//     }
//     delete sl->next;//to delete last node
//     sl->next=nullptr;
//     return head;
// }

// Node *delete_index(Node *head,int index){
//     Node *nl=head;
//     int i=1;
//     while(nl){
//         if(i==index){
//             Node *temp=nl->next;
//             nl->next=nl->next->next;
//             delete temp;
//             break;
//         }
//         i++;
//         nl=nl->next;
//     }
//     return head;
// }

// Node *push_front(Node *head,int data){
//     Node *n = new Node(data);
//     n->next=head;
//     head=n;
//     return head;
// }

// Node * push_back(Node *head,int data){
//     while(head->next!=nullptr){
//         head=head->next;
//     }
//     Node * n=new Node(data);
//     head->next=n;
//     n->next=nullptr;
//     return head;
// }

// int main(){
//     int n;
//     cin>>n;
//     Node *head=create(n);
//     print(head);
//     // deletetail(head);
//     // print(head);
//     delete_index(head,1);
//     print(head);
//     return 0;
// }

///////////////homework : to  mergee two linked as in leetcode question

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

    Node *create(int n){
        while(n--){
            int val;
            cin>>val;
            Node * n =new Node(val);
            if(head==nullptr){
                head=tail=n;
            }
            else{
                tail->next=n;
                tail=n;
            }
        }
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
    // int pop_index(int index){
    //     int i=0;
    //     Node *itr=head;
    //     int t=-1;
    //     while(itr!=nullptr){
    //         if(i==index){
    //             t=itr->get_data();
    //             itr=itr->next;
    //         }
    //         i++;
    //         itr=itr->next;
    //     }
    //     return t;
    // }
};

Node *merge(Node *h1,Node*h2){
    int i=0;
    linkedlist nl;
    while(h1 || h2){
        if(i%2==0){
            if(h1){
                nl.push_back(h1->get_data());
                h1=h1->next;
            }
            else if(h2){
                nl.push_back(h2->get_data());
                h2=h2->next;
            }
        }
        else{
            if(h2){
                nl.push_back(h2->get_data());
                h2=h2->next;
            }
            else if(h1){
                nl.push_back(h1->get_data());
                h1=h1->next;
            }
        }
        i+=1;
    }
    return nl.get_head();
}

void print_ml(Node *head){
    while (head)
    {
        cout<<head->get_data()<<"--->";
        head=head->next;
    }
    cout<<endl;
    
}

int main(){
    linkedlist l1,l2;
    int n,m;
    cin>>n;
    l1.create(n);
    cin>>m;
    l2.create(m);
    Node *head=merge(l1.get_head(),l2.get_head());
    print_ml(head);
}