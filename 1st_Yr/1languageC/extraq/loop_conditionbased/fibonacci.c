#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int a,b,c,d,e;
    a=0;
    b=1;
    e=0;
    printf("enter the term upto ;");
    scanf("%d",&c);
    d=1;
    while (d<c)
    {
        printf("\n%d",e);
        a=b;
        b=e;
        e=a+b;
        d+=1;
    }
}