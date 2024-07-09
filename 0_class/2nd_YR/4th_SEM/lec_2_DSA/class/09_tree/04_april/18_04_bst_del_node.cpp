#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
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

node *bst(node * root,int val){
    if(root==nullptr){
        root=new node(val);
        return root;
    }
    else if(val>=root->get_data()){
        root->right=bst(root->right,val);
    }
    else{
        root->left=bst(root->left,val);
    }
    return root;
}

node *search(node *root,int val){
    if(root->get_data()==val){
        return root;
    }
    // #recursion
    if(root->get_data()<val){
        root=search(root->left,val);
    }
    else{
        root=search(root->right,val);
    }
    return root;
}

node *search_min(node *root){
    if(root->left==nullptr){
        return root;
    }
    // #recursion
    return search_min(root->left);
}

node *del_ele_bst(node *root,int val){
    if(root->get_data()==val){
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr;
        }
        else if(root->left==nullptr && root->right!=nullptr){
            node * temp=root->right;
            delete root;
            return temp;
        }
        else if(root->left!=nullptr && root->right==nullptr){
            node * temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left!=nullptr && root->right!=nullptr){
            node *x=search_min(root->right);
            swap(root->data,x->data);
            del_ele_bst(root->right,x->data);
        }
    }
    else{
        if(root->data<val){
            del_ele_bst(root->left,val);
        }
        else{
            del_ele_bst(root->right,val);
        }
    }
    return root;
}

int main(){
    int arr[6]={12,16,200,15,1,-31};
    node *tree=new node(arr[0]);
    for(int i=1;i<6;i++){
        tree=bst(tree,arr[i]);
    }
    inorder(tree);
    cout<<endl;
    preorder(tree);
    cout<<endl;
    postorder(tree);
    cout<<endl;
}