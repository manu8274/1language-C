/*diamond invisible*/
#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    printf("enter th eval of num:");
    scanf("%d",&num);
    
    for (int i=0;i<=num;i++)
    {
        for (int j=0;j<=num-i;j++)
        {
            printf("*");
        }
        for (int k=0;k<=i*2;k++)
        {
            printf(" ");
        }
        for (int l=0;l<=num-i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i=0;i<=num;i++)
    {
        for (int j=0;j<=i;j++)
        {
            printf("*");
        }
        for (int k=0;k<=(num-i)*2;k++)
        {
            printf(" ");
        }
        for (int l=0;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}