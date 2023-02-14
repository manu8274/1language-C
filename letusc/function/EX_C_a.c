#include<stdio.h>

int leapyear(int x)
{
    if ((x%100==0 && x%400==0 ) || (x%4==0 && x%100!=0))
    {
        printf("the year %d is leap year.",x);
    }
    else
    {
        printf("the year %d is not a leap year.",x);
    }
}

int main()
{
    int yr;
    printf("enter the year:");
    scanf("%d",&yr);
    leapyear(yr);
    return 0;
}