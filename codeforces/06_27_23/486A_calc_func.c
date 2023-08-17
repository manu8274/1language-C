#include<stdio.h>
int main(){
    long long int n;
    scanf("%lli",&n);
    if(n%2==0)  printf("%lli",n/2);
    else    printf("%lli",-1-n/2);
}