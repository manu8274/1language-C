#include<stdio.h>
int gcd(int n,int m){
    if(n2!=0){
        return gcd(n2,n1%n2);
    }
    else{
        return n1;
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    x=gcd(n,m);
    printf("%d\n",x);
}