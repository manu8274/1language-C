#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    queue<char>q;
    int start=0,end=0;
    int maxi=0;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        q.push(s[i]);
        mp[s[i]]++;
        while(mp[s[i]]>1){
            mp[q.front()]--;
            q.pop();
        }
        if(q.size()>maxi){
            maxi=q.size();
            end=i;
            start=i-q.size()+1;
        }
    }
    for(int i=start;i<=end;i++) {cout<<s[i];}
    cout<<endl;
}