#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>&v , int sum,int i,int sz){
    //base case
    if(i>=sz || i+1>=sz){
        if(i+1<=sz)    return sum+v[i];
        else    return sum;
    }
    //recurse
    else{
        int a,b;
        a=fun(v,sum+v[i],i+2,sz);
        b=fun(v,sum+v[i+1],i+3,sz);
        return max(a,b);
    }
}

int main(){
    vector<int>v={2,7,9,3,1};
    // vector<int>v={226,174,214,16,218,48,153,131,128,17,157,142,88,43,37,157,43,221,191,68,206,23,225,82,54,118,111,46,80,49,245,63,25,194,72,80,143,55,209,18,55,122,65,66,177,101,63,201,172,130,103,225,142,46,86,185,62,138,212,192,125,77,223,188,99,228,90,25,193,211,84,239,119,234,85,83,123,120,131,203,219,10,82,35,120,180,249,106,37,169,225,54,103,55,166,124};
    int sz=v.size();
    cout<<fun(v,0,0,sz);
}