#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>A,int val,int n){
    if(A[0]>val)    return -1;
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<=e){
        if(A[mid]==val){
            return A[mid];
        }
        else if(A[mid]>val){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return A[mid];
}

int main(){
    vector<int>A;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    int val;
    cin>>val;
    cout<<fun(A,val,n);
}