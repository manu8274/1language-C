#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

bool  safe(int i,int j,int n,vector<vector<int>>&arr,vector<vector<bool>>&vis){
    if((i>=0 && i<n) && (j>=0 && j<n) && (vis[i][j]!=1) && arr[i][j]!=0){
        return true;
    }
    return false;
}

void fun(int i,int j,vector<vector<int>> &arr,int n,vector<string> &ans,vector<vector<bool>>&vis,string path){
    //base case
    if(i==n-1 && j==n-1){
        ans.push_back(path);
        return;
    }
    //four movements D L R U
    vis[i][j]=1;
    if(safe(i+1,j,n,arr,vis)){
        fun(i+1,j,arr,n,ans,vis,path+'D');
    }
    if(safe(i,j+1,n,arr,vis)){
        fun(i,j+1,arr,n,ans,vis,path+'R');
    }
    if(safe(i-1,j,n,arr,vis)){
        fun(i-1,j,arr,n,ans,vis,path+'U');
    }
    if(safe(i,j-1,n,arr,vis)){
        fun(i,j-1,arr,n,ans,vis,path+'L');
    }
    vis[i][j]=0;
    return;
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string>ans;
    vector<vector<bool>> vis(n,vector<bool>(n,0));
    string path="";
    if(arr[0][0]==0){
        return ans;
    }
    fun(0,0,arr,n,ans,vis,path);
    return ans;
}

int main(){
    int n=3;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<string>ans=searchMaze(arr,n);
    for(auto x:ans){
        cout<<x<<" ";
    }
}