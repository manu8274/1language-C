#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
class graph{
public:
    int v;
    list<int> *l;
    graph(int d)
    {
        this->v = d;
        l = new list<int>[v];
    }
    void edge(int i, int j, bool ud = true)
    {
        l[i].push_back(j);
        if (ud)
        {
            l[j].push_back(i);
        }
    }
    void kahns()
    {
        vector<int> indegree(v, 0);
        for (int i = 0; i < v; i++)
        {
            for (auto nbr : l[i])
            {
                indegree[nbr]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < v; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int node = q.front();
            cout << node << "\t";
            q.pop();
            for (auto nbr : l[node])
            {
                indegree[nbr]--;
                if (indegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};
