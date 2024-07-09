#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;

class graph{
    public:
        int v;
        list<int>*l;
        graph(int d){
            this->v=d;
            l = new list<int>[v];
        }
        void edge(int i,int j,bool ud=true){
            l[i].push_back(j);
            if(ud){
                l[j].push_back(i);
            }
        }
        void print(){
            for(int i=0;i<v;i++){
                cout<<i<<"-->";
                for(auto x:l[i]){
                    cout<<x<<"\t";
                }
                cout<<endl;
            }
            cout<<endl;
        }
};


int main(){
    graph g1(6);
    g1.edge(0,1);
    g1.edge(0,2);
    g1.edge(1,3);
    g1.edge(2,3);
    g1.edge(2,4);
    g1.edge(2,5);
    g1.edge(4,5);
    g1.print();
}