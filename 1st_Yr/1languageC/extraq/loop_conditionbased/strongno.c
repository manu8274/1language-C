#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    int orignum=num,sum=0;
    while (num>0)
    {
        int d;
        d=num%10;
        int i=1,fact=1;
        while (i<=d)
        {
            fact = fact * i;
            i+=1;
        }
        sum+=fact;
        num=num/10;
    }
    if (sum==orignum)
    {
        printf("%d is a strong number.",orignum);
    }
    else
    {
        printf("%d is not a strong number.",orignum);
    }
}