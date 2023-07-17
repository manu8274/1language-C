/* half dimond with spaces*/
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
        int d2=i;
        while (d2>0)
        {
            printf("* ");
            d2--;
        }
        printf("\n");
    }
}