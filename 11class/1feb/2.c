#include<stdio.h>

void main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);

    int i=1;
    while (i<=num)
    {
        if (i%2==0) printf("\n%d is even.",i);
        else    printf("\n%d is odd.",i);
        i++;
    }
}