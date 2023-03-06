#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int i=1;
    while (i<=num)
    {
        for (int j=1 ; j<=num ; j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
        i++;
    }
    
}