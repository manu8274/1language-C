#include<stdio.h>

void main()
{
    int num;
    int c=0;
    printf("enter va;:");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if (num%i==0)
        {
            c++;   
        }
    }
    if (c==0)
    {
        printf("prime");
    }
}