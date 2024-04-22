#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void info(){
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
};

int main(){
    min_heap h1;
    h1.push(10);
    h1.push(20);
    h1.push(5);
    h1.push(2);
    h1.push(6);
    h1.push(16);
    h1.print();
    max_heap h2;
    h2.push(10);
    h2.push(20);
    h2.push(5);
    h2.push(2);
    h2.push(6);
    h2.push(16);
    h2.print();
}