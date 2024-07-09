#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int d;
        node *next;
        node(int data){
            d=data;
            next=nullptr;
        }
};

class qu{
    node *front,*rear;
    public:
        void enq(int d){
            node *n =new node(d);
            if(front==nullptr){
                front = rear = n;
            }
            else{
                rear->next=n;
                rear=n;
            }
        }
        int deq(){
            if(front==nullptr)  cerr<<UNDERFLOW<<endl;
            else{
                front=front->next;
            }
        }
        int sz(){
            node *itr=front;
            int c=0;
            while(itr){
                itr=itr->next;
                c++;
            }
            return c;
        }

};
int main(){

}

//by array
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int front=0;
//     int rear=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         rear++;
//     }
//     // but in simple we need O(n) time to perform a dequeue function so we need to make CIRCULAR ARRAYS
//     //then we use modular operation
// }