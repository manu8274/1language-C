#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int num;
    printf("enter the  number");
    scanf("%d",&num);
    int i=1;
    while (i<=num)
    {
        if (num%i==0)
        {
            printf("%d\n",i);
        }
        i+=1;
    }
}