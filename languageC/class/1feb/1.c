#include<stdio.h>

void  main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);

    int i=1;
    while (i<=num)
    {
        printf("%d\n",i);
        i++;
    }
}