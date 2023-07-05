#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,max,min;
    printf("\n enter number :");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    int range;
    range = max - min;
    printf("%d is the range between %d and %d .",range,a,b);
}