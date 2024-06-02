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
        vector<int> bfs(int src){
            queue<int> q;
            vector<int>ans;
            bool *visited =new bool[v]{0};
            q.push(src);
            visited[src]=true;
            while(!q.empty()){
                int f=q.front();
                ans.push_back(f);
                q.pop();
                for(int n:l[f]){
                    if(!visited[n]){
                        q.push(n);
                        visited[n]=true;
                    }
                }
            }
            return ans;
        }
        void bfs1(int src){
            queue<int> q;
            // vector<int>ans;
            bool *visited =new bool[v]{0};
            q.push(src);
            visited[src]=true;
            while(!q.empty()){
                int f=q.front();
                // ans.push_back(f);
                cout<<f<<"\t";
                q.pop();
                for(int n:l[f]){
                    if(!visited[n]){
                        q.push(n);
                        visited[n]=true;
                    }
                }
            }
        }
        vector<int> dfs(int src){
            vector<int>ans;
            bool *vis=new bool [v]{0};
            stack<int>st;
            st.push(src);
            vis[src]=true;
            while(!st.empty()){
                int f=st.top();
                st.pop();
                ans.push_back(f);
                for(int n:l[f]){
                    if(!vis[n]){
                        st.push(n);
                        vis[n]=true;
                    }
                }
            }
            return ans;
        }
        
};
// depth first - first go in depth and write
// breadth first-with line wise like level order

int main(){
    graph g1(7);
    g1.edge(1,0);
    g1.edge(1,2);
    g1.edge(2,3);
    g1.edge(0,4);
    g1.edge(3,4);
    g1.edge(3,5);
    g1.edge(4,5);
    g1.edge(5,6);
    // vector<int> breadth;
    // breadth = g1.bfs(1);
    // for(int i:breadth){
    //     cout<<i<<"\t";
    // }
    // cout<<endl;
    vector<int>ans=g1.dfs(1);
    for(auto x:ans){
        cout<<x<<"\t";
    }
    cout<<endl;
    // g1.print();
}