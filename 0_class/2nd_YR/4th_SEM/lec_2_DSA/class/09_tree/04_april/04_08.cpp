#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    int data;
    public:
        node *left,*right;
        // node():data(NULL),left(nullptr),right(nullptr)
        // {}
        node(){
            right=left=nullptr;
        }
        node(int d): data(d), left(nullptr), right(nullptr) {}
        int get_data(){
            return data;
        }
};

void print(node *r){
    if(r==nullptr)  return;
    cout<<r->get_data()<<" ";
    print(r->left);
    print(r->right);
}

node* convert_from_arr(int * arr,int size){
    node *tree=new node(arr[0]);

}

int main(){
    node *tree=new node(1);
    tree->left=new node(2);
    tree->right=new node(3);
    tree->right->right=new node(200);
    tree->right->left=new node(100);
    tree->left->left=new node(1000);
    tree->left->right=new node(2000);
    print(tree);
    cout<<endl;
    node *t;
    print(t);
}