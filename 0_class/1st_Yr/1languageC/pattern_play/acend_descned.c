/*pattern descending + ascending */
#include<stdio.h>

void main()
{
    int num;
    printf("enter the value of num:");
    scanf("%d",&num);
    helo();
    int orignum=num;
    for (int j=0;j<num;j++)
    {
        int num1=num;
        while (j<num1)
        {
            printf("* ");
            num1--;
        }
        printf("\n");
    }
    for (int i=2;i<=num;i++)
    {
        for (int d=1; d<=i ; d++)
        {
            printf("* ");
        }
        printf("\n");
    }
}