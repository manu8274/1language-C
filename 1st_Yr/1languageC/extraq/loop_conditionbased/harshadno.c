#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
    int num,orignum;
    printf("Enter the number:");
    scanf("%d",&num);
    int sum=0;
    orignum=num;
    while (num>0)
    {
        int d;
        d=num%10;
        sum+=d;
        num=num/10;
    }
    if (orignum%sum==0)
    {
        printf("\n%d is harshad number.",orignum);
    }
    else
    {
        printf("\n%d is not harshad number.",orignum);   
    }
}