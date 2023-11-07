#include<stdio.h>
int sump(int *x,int *y){    return *x+*y; }    
int main(){
    int a,b,sum=0;
    printf("enter value of two number:");
    scanf("%d %d",&a,&b);
    sum=sump(&a,&b);
    printf("sum=%d",sum);
    return 0;}