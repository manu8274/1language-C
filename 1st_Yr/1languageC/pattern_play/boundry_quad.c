#include<stdio.h>

void main()
{
    int num;
    printf("enter the val num:");
    scanf("%d",&num);

    for (int i=0;i<=num;i++)
    {
        if (i==0 || i==num)
        {
            for (int j=0; j<=num;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (int k=0;k<1;k++)
            {
                printf("* ");
            }
            for (int l=0;l<=num-2;l++)
            {
                printf("  ");
            }
            for (int m=0;m<1;m++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}