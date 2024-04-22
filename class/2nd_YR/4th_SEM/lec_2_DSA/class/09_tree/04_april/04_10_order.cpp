#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    char data;
    public:
        node *left,*right;
        // node():data(NULL),left(nullptr),right(nullptr)
        // {}
        node(){
            right=left=nullptr;
        }
        node(char d): data(d), left(nullptr), right(nullptr) {}
        char get_data(){
            return data;
        }
};


void inorder(node *r){
    if(r==nullptr)  return;
    inorder(r->left);
    cout<<r->get_data()<<" ";
    inorder(r->right);
}

void preorder(node *r){
    if(r==nullptr)  return;
    cout<<r->get_data()<<" ";
    preorder(r->left);
    preorder(r->right);
}

void postorder(node *r){
    if(r==nullptr)  return;
    postorder(r->left);
    postorder(r->right);
    cout<<r->get_data()<<" ";
}

void levelorder(node *r){
    if(r==nullptr)  return;
    cout<<r->get_data()<<" "<<r->left->get_data()<<" "<<r->right->get_data()<<" ";
    levelorder(r->left);
    levelorder(r->right);
}

// formula are left=2*i+1 , right=2*i+2

int main(){
    node *tree=new node('A');
    tree->left=new node('B');
    tree->left->left=new node('D');
    tree->left->right=new node('E');
    tree->right=new node('C');
    tree->right->left=new node('F');
    tree->right->right=new node('G');
    cout<<endl<<"inorder"<<"\t";
    inorder(tree);
    cout<<endl<<"preorder"<<"\t";
    preorder(tree);
    cout<<endl<<"postorder"<<"\t";
    postorder(tree);
    cout<<endl<<"level order"<<"\t";
    levelorder(tree);
}