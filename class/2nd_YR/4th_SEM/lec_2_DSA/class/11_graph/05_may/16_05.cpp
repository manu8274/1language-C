#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        int v;
        list<int>*l;
        graph(int d){
            v=d;
            l= new list<int>[v];
        }
        void edge(int i,int j,bool ud=true){
            l[i].push_back(j);
        }
        void adjacency_list(){
            for(int i=0;i<v;i++){
                cout<<i<<"-->";
                for(auto x:l[i]){
                    cout<<x<<"\t";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        bool keys_rooms(){
            queue<int>q;
            vector<bool>visited(v,0);
            q.push(0);
            while(!q.empty()){
                bool flag=true;
                for(auto x:visited){
                    if(x==0){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    return true;
                }
                int f=q.front();
                visited[f]=1;
                q.pop();
                for(auto x:l[f]){
                    if(!visited[x]){
                        q.push(x);
                    }
                }
            }
            return false;
        }
};

int main(){
    int n;
    cin>>n;
    graph g1(n);
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++){
        char c[100];
        cin>>c;
        while(c!="\n"){
            int t=stoi(c);
            g1.edge(i,t);
            cin>>c;
        }
    }
    g1.adjacency_list();
    return 0;
}