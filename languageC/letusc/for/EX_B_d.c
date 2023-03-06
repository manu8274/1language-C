#include<stdio.h>
#include<math.h>

void main()
{
    float x;
    printf("enter the value of x:");
    scanf("%f",&x);

    float p;
    printf("enter the term upto sum is to be counted :");
    scanf("%f",&p);

    float sum;
    sum=(x-1)/2;
    for (float i=2;i<=p;i=i+1.0)
    {
        sum= sum + 0.5*(pow(((x-1)/2),i));
    }
    printf("the required  result is %0.0f.",sum);
}