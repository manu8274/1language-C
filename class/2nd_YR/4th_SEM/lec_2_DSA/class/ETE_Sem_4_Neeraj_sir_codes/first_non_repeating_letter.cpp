#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    cin >>s;
    queue<char>q;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        q.push(s[i]);
        mp[s[i]]++;
        while(!q.empty() && mp[q.front()]>1)
        {
            q.pop();
        }
        if(q.empty())
        {
            cout  << "-1 ";
        }
        else
        {
            cout << q.front()<< " ";
        }
    }
    cout << endl;
}