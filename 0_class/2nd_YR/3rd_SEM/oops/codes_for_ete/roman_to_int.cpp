#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    string c;
    cin>>c;
    int res=0;
    for(int i=0;i<c.size();i++){
        char cc=c[i];
        char nc=(i<c.size() -1 )? c[i+1]:'\0';
        switch (cc)
        {
        case 'I':
        res+=(nc=='V' ||  nc =='X') ? -1:1;
        break;
        case 'V':
        res+=5;
        break;
        case 'X':
        res+=(nc=='L' ||nc=='C') ?-10:10;
        break;
        case 'l':
        res+=50;
        break;
        case 'C':
        res+=(nc=='M' || nc =='D') ? -100:100;
        break;
        case 'D':
        res+=500;
        break;
        case 'M':
        res+=1000;
        break;
        }
    }
    cout<<res;
}