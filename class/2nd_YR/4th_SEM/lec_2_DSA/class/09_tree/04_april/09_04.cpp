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
    
}