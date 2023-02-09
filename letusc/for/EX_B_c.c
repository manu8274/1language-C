#include<stdio.h>
#include<math.h>

int main()
{
    int principle,time;
    float amount,rate;
    printf("enter the value of principle, time period and rate:");
    scanf("%d %d %f",&principle,&time,&rate);

    amount=0.0;
    for (int i=1;i<=time;i++)
    {
        amount=principle*(pow((1+rate/100),time));
    }
    printf("final amount is %f.",amount);
}