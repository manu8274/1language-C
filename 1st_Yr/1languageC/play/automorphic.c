#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int a,b;
    printf("enter number to check automorphic");
    scanf("%d",&a);
    b=a*a;
    int c;
    c=b%10;
    if (a==c)
    {
        printf("%d is automorphic.",a);
    }
    else
    {
        printf("%d is not automorphic.",a);
    }
}