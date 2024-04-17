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
            // data=NULL;
            right=left=nullptr;
        }
        node(int d): data(d), left(nullptr), right(nullptr) {}
        int get_data(){
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


// formula are left=2*i+1 , right=2*i+2

node *build(int *arr, int i, int size,node *root){
    if(i<size){
        node *temp=new node(arr[i]);
        root=temp;
        root->left=build(arr,2*i+1,size,root->left);
        root->right=build(arr,2*i+2,size,root->right);
    }
    return root;
}

node *bst(){}

int main(){
    
    int arr[7]={1,2,3,4,5,6,7};
    node * tree=nullptr;
    tree=build(arr,0,7,tree);
    preorder(tree);
}