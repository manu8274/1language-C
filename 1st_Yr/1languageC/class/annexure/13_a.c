#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    for (int i=1; i<=num ; i++)
    {
        int d=i;
        while (d>0)
        {
            printf("*");
            d--;
        }
        printf("\n");
    }
}