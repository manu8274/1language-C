#include<stdio.h>

int evenodd(int a)
{
    if (a%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}

int main()
{
    for (int i=1;i<=10;i++)
    {
        int num;
        printf("enter the number:");
        scanf("%d",&num);
        evenodd(num);
    }
}