#include<stdio.h>

int facto(int x)
{
    int fact=1;
    for (int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int res;
    res = facto(num);
    printf("the factorial  is %d",res);
}