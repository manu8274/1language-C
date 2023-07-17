#include<stdio.h>
//sum using pointer
int sum(int *x,int *y){
    return *x + *y;
}
int main(){
    int a,b;
    printf("enter the val:");
    scanf("%d %d",&a,&b);
    int s;
    s=sum(&a,&b);
    printf("%d",s);
}