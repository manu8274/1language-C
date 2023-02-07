/*full diamond*/
#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    for (int i=1; i<=num ; i++)
    {
        int d1=num-i;
        while (d1>0)
        {
            printf(" ");
            d1--;
        }
        int d2=i*2 -1;
        while (d2>0)
        {
            printf("*");
            d2--;
        }
        printf("\n");
    }
    for (int j=1; j<=num; j++)
    {
        int d4=j;
        while (d4>0)
        {
            printf(" ");
            d4--;
        }
        int d3=(num-j)*2 -1;
        while (d3>0)
        {
            printf("*");
            d3--;
        }
        printf("\n");
    }
}