#include<iostream>
#include<bitset>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=n & 1;
    cout<<"using and :  "<<!(x)<<endl;
    int y=n ^ 1;
    cout<<"using xor : "<<y<<endl;
    int z=n | 0;
    cout<<"using or : "<<!(z)<<endl;
}