#include<stdio.h>

void main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);

    if (num<=0) goto end;
    printf("num=%d.",num);
    if (num>100)
    {
        end:
            printf("\nbye");

    }
}