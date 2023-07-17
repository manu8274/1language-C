#include<stdio.h>

void main()
{
    int n,i,sum=0;
    printf("enter the num:");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of %d natural number is %d :",n,sum);
}