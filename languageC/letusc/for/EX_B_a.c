#include<stdio.h>

void main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    for (int i=1;i<=10;i++)
    {
        printf("%d X %d = %d \n",num,i,num*i);
    }
}