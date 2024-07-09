#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void info(){
//     looks like a compelete binary tree but not a binary tree 
//     setting priority 
//     so we create a heap instead of sorting and getting ans O(nlog(n))
//     but using heap we get O(k log(n))
//             array   sorted_array   list    BST     Heap
//     push=   O(1)        O(N)       O(N)     O(N)    O(log(n))
//     pop=    O(N)        O(1)       O(1)     O(N)    O(log(n));
//     get=    O(N)        O(1)       O(1)     O(N)    O(1);
// }

class min_heap{
    public:
        vector<int>v;
        min_heap(int default_size=10){
            v.reserve(default_size+1);
            v.push_back(-1);
        }
        void push(int d){
            v.push_back(d);
            int idx=v.size()-1;
            int parent=idx/2;
            while(idx>1 && v[idx]<v[parent]){
                swap(v[idx],v[parent]);
                idx=parent;
                parent=parent/2;
            }
        }
        int get_min(){
            return v[1];
        }
        // int get_max(){

        // }
        void print(){
            for(int i=1;i<v.size();i++){
                cout<<v[i]<<"\t";
            }
            cout<<endl;
        }
        void heapify1(int i){
            if(2*i > v.size()){
                return ;
            }
            else if(2*i+1>v.size()){
                if(v[i]>v[2*i]){
                    swap(v[i],v[2*i]);
                    heapify1(2*i);
                }
            }
            else{
                int ind;
                if(v[2*i]>v[2*i+1]){
                    ind=2*i+1;
                }
                else{
                    ind=2*i;
                }
                swap(v[i],v[ind]);
                heapify1(ind);
            }
            return ;
        }
        void heapify(int i){
            int left=2*i;
            int right=2*i+1;
            int min=i;
            if(left<v.size() && v[left]<v[min]){
                min=left;
            }
            if(right<v.size() && v[right]<v[min]){
                min=right;
            }
            if(i!=min){
                swap(v[min],v[i]);
                heapify(min);
            }
        }

        void pop(){
            // step1 swap 1st and last element;
            // step2 popback
            // step3 heapify;
            // heapify:we check leftv and right index and swap with min untill recursive end;
            swap(v[1],v[v.size()-1]);
            v.pop_back();
            heapify(1);
        }
};

class max_heap{
    public:
        vector<int>v;
        max_heap(int default_size=10){
            v.reserve(default_size+1);
            v.push_back(-1);
        }
        void push(int d){
            v.push_back(d);
            int idx=v.size()-1;
            int parent=idx/2;
            while(idx>1 && v[idx]>v[parent]){
                swap(v[idx],v[parent]);
                idx=parent;
                parent=parent/2;
            }
        }
        // int get_min(){
        //     return v[1];
        // }
        int get_max(){
            return v[1];
        }
        void print(){
            for(int i=1;i<v.size();i++){
                cout<<v[i]<<"\t";
            }
            cout<<endl;
        }
        void heapify1(int i){
            if(2*i > v.size()){
                return ;
            }
            else if(2*i+1>v.size()){
                if(v[i]<v[2*i]){
                    swap(v[i],v[2*i]);
                    heapify1(2*i);
                }
            }
            else{
                int ind;
                if(v[2*i]<v[2*i+1]){
                    ind=2*i+1;
                }
                else{
                    ind=2*i;
                }
                swap(v[i],v[ind]);
                heapify1(ind);
            }
            return ;
        }
        void heapify(int i){
            int left=2*i;
            int right=2*i+1;
            int min=i;
            if(left<v.size() && v[left]>v[min]){
                min=left;
            }
            if(right<v.size() && v[right]>v[min]){
                min=right;
            }
            if(i!=min){
                swap(v[min],v[i]);
                heapify(min);
            }
        }

        void pop(){
            // step1 swap 1st and last element;
            // step2 popback
            // step3 heapify;
            // heapify:we check leftv and right index and swap with min untill recursive end;
            swap(v[1],v[v.size()-1]);
            v.pop_back();
            heapify(1);
        }
};

int main(){
    cout<<"MIN HEAP"<<endl;
    min_heap h1;
    h1.push(10);
    h1.push(20);
    h1.push(5);
    h1.push(2);
    h1.push(6);
    h1.push(16);
    h1.print();
    h1.pop();
    h1.print();
    cout<<"MAX HEAP"<<endl;
    max_heap h2;
    h2.push(10);
    h2.push(20);
    h2.push(5);
    h2.push(2);
    h2.push(6);
    h2.push(16);
    h2.print();
    h2.pop();
    h2.print();
}