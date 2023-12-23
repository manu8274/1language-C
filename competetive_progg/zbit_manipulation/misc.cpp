#include<iostream>
using namespace std;
int main(){
    int n;
    n=1;
    long int x= n | (~n);
    cout<<x;
}