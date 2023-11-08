#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n>>i;
    int x=n & (1 << i);
    if(x)   cout<<"True";
    else    cout<<"False";
}