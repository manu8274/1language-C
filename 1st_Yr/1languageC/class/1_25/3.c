#include<stdio.h>

void main()
{
    int i,num;
    printf("enter the num");
    scanf("%d",&num);
    for (i=1; i<11; i++)
    {
        printf("\n%d",num*i);
    }
}