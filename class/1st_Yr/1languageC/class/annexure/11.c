#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int count=0,rev=0;
    while (num>0)
    {
        int d;
        d=num%10;
        rev=rev*10 + d;
        count++;
        num=num/10;
    }
    printf("the number of digits = %d and reverse = %d.",count,rev);
}