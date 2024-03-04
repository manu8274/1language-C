#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
        bitset<14> a1(a);
        bitset<14> b1(b);
        cout<<a1<<"\t"<<b1<<endl;
        string a2=a1.to_string(),b2=b1.to_string();
        if(count(a2.begin(),a2.end(),'1')>=count(b2.begin(),b2.end(),'1')){
            cout<<"in if"<<endl;
            return a<b;
        }
        else{
            cout<<"in else"<<endl;
            return a>b;
        }
}

bool compare(int a,int b){
    int a1=0,b1=0;
    while(a>0){
        if(a%2==1)  a1++;
        a=a/2;
    }
    while(b>0){
        if(b%2==1)  b1++;
        b=b/2;
    }
    if(a1>=b1)  return a>b;
    else    return a1<b1;
}
vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
        // sort(arr.begin(),arr.end());
        // vector<vector<int>>ans(14);
        // for(int i=0;i<arr.size();i++){
        //     int c=0;
        //     int temp=arr[i];
        //     while(temp>0){
        //         if(temp%2!=0)   c++;
        //         temp=temp/2;
        //     }
        //     ans[c].push_back(arr[i]);
        // }
        // for (int i=0;i<ans.size();i++){
        //     sort(ans[i].begin(),ans[i].end());
        // }
        // vector<int>res;
        // for(int i=0;i<ans.size();i++){
        //     for(int j=0;j<ans[i].size();j++){
        //         res.push_back(ans[i][j]);
        //     }
        // }
        // return res;
}

int main(){
    vector<int> v={0,1,2,3,4,5,6,7,8};
    vector<int> v1=sortByBits(v);
    cout<<v1.size()<<endl;
    for(auto x:v1){
        cout<<x<<"\t";
    }
    return 0;
}