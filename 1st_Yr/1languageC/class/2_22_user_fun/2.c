#include<stdio.h>

void swap(int a, int b)
{
    int x;
    x=a;
    a=b;
    b=x;
    printf("\nreversed == %d %d",a,b);
}

int main()
{
    int n1,n2;
    printf("enter the numbers:");
    scanf("%d %d",&n1,&n2);
    printf("real == %d %d",n1,n2);
    swap(n1,n2);
}