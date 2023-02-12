#include<stdio.h>
int calcsum(int x,int y,int z)
{
    int d;
    d=x+y+z;
    return d;
}

int main()
{
    int a,b,c,sum;
    printf("enter the value of numbers:");
    scanf("%d %d %d",&a,&b,&c);
    sum=calcsum(a,b,c);
    printf("%d",sum);
}