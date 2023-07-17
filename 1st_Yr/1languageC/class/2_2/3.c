#include<stdio.h>
void main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int i=1;
    do
    {
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    } while (i<=10);
    
}