#include<iostream>
#include<string>
#include<stdlib>
using namespace std;
int main(){
    string x,y;
    cin >> x;
    cin >> y;
    int z=size(x);
    int i=0;
    for(i=0;i<z;i++){
        if (x[-i] == y[i]){
            continue;
        }
        else{
            break;
        }
    }
    if(i==z){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}