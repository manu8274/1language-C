#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void main()
{
    int a,b;
    printf("enter a number b:");
    scanf("%d",&a);
    b=a;
    float dec=0;
    float i=0.0;
    while (a>0)
    {
        int d;
        d=a%10;
        if (d==1)
        {
            dec = dec + pow(2.0,i);
        }
        a=a/10;
        i+=1.0;
    }
    printf("%d converted to decimal is %f",b,dec);
}