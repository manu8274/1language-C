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