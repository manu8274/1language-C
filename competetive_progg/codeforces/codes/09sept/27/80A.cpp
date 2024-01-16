#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n){
    int x=sqrt(n);
    for(int i=2;i<=x;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    if(!isprime(b)){
        cout<<"NO";
        return 0;
    }
    else{
        for(int i=a+1;i<b;i++){
            if(isprime(i)){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
}