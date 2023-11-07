#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int i=1,sum=0;
    int orignum=num;
    while (i<num)
    {
        if (num%i==0)
        {
            sum+=i;
        }
        i+=1;
    }
    if (sum==orignum)
    {
        printf("%d is perfect number.",orignum);
    }
    else
    {
        printf("%d is not perfect number.",orignum);
    }
}