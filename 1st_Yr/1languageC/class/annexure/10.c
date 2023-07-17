#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    printf("enter the num");
    scanf("%d",&num);
    float digit=0.0;
    for (int i= num;i>0;i=i/10)
    {
        digit+=1.0;
    }
    int sum=0;
    for (int j=num;j>0;j=j/10)
    {
        float d;
        d=j%10;
        sum = sum + pow(d,digit);        
    }
    if (sum==num)
    {
        printf("the number is armstrong.");
    }
    else
    {
        printf("h");
    }
}