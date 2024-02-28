#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int _=0;_<t;_++){
        int n;
        cin>>n;
        vector<int> lst;
        for(int i=0;i<n;i++){
            int o;
            cin>>o;
            lst.push_back(o);
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            int mc=0;
            if(x<y){
                x=x-1;
                y=y-1;
                for(int j=x;j<=y;j++){
                    if(i==0)    mc++;
                    else{
                        if(abs(lst[i]-lst[i-1])>abs(lst[i+1]-lst[i])){
                            mc+=1;
                        }
                        else{
                            mc=mc+abs(lst[i+1]-lst[i]);
                        }
                    }
                }
            }
            if(y<x){
                x=x-1;
                y=y-1;
                for(int j=x;j=y;j--){
                    if(j==n-1)  mc+=1;
                    else{
                        if(abs(lst[i-1]-lst[i])>abs(lst[i+1]-lst[i]))   mc++;
                        else{
                            mc+=abs(lst[i-1]-lst[i]);
                        }
                    }
                }
            }
            cout<<mc<<endl;
        }
    }
}