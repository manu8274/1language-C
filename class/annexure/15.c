#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int armstrong(int x)
{
    int y=x;
    int z=x;
    double i=0;
    int sum=0;
    while (x>0)
    {
        x%10;
        i=i+1;
        x=x/10;
    }
    while(y>0)
    {
        double d;
        d=y%10;
        sum = sum + pow(d,i);
        y=y/10;
    }
    if (sum==z)
    {
        printf("the number %d is armstrong.\n",z);
    }
    else
    {
        printf("the number %d is not armstrong.\n",z);
    }
}

int primeno(int x)
{
    int i;
    for (i=2;i<x;i++)
    {
        if (x%i==0)
        {
            break;
        }
    }
    if (i==x)
    {
        printf("the number %d is prime.\n",x);
    }
    else
    {
        printf("the number %d is not prime.\n",x);
    }
}

int perfectno(int x)
{
    int i=1,sum=0,y=x;
    while (i<x)
    {
        if (x%i==0)
        {
            sum+=i;
        }
        i++;
    }
    if (sum == y)
    {
        printf("the number %d is perfect number.\n",y);
    }
    else
    {
        printf("the number %d is not perfect number.\n",y);
    }
}

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    armstrong(num);
    primeno(num);
    perfectno(num);
    return 0;
}