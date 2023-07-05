#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    for (int i=1;i<=num;i++)
    {
        for (int j=num;j>i;j--)
        {
            printf(" ");
        }
        for (int k=i*2 -1;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}