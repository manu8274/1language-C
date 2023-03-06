//fibonacci using recursion
#include<stdio.h>
int a=0,b=1,c;
int fibo(int x)
{
    int y=a,z=b;
    if (x>0)
    {
        printf("%d ",a);
        a=b;
        c=y+z;
        b=c;
        return fibo(x-1);
    }
}

int main()
{
    int num;
    printf("enter the val:");
    scanf("%d",&num);
    fibo (num);
}