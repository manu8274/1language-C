#include<stdio.h>
int add(){
    int a,b;
    printf("enter val:");
    scanf("%d %d",&a,&b);
    return a+b;
}
void main(){
    int (*p)(),c;
    p=add;
    c=p();//function pointer value should be assigned to normall variable
    printf("sum of two num=%d",c);
}