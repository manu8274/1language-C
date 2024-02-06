#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//for using bigger problem we use recursion 

int facto(int n){
    if(n==1)    return 1;
    else    return n*facto(n-1);
}

int main(){
    cout<<facto(5);
    return 0;
}