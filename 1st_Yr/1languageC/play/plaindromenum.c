#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    long long int a,b;
    printf("enter valus of a:");
    scanf("%d",&a);
    b=a;
    long long int i=1,revnum=0;

    while (a>0)
    {
        int d;
        d=a%10;
        a=a/10;
        revnum = revnum + d*i;
        i=i*10;
    }
    if (b==revnum)
    {
        printf("%d is a palindrome number.",b);
    }
    else
    {
        printf("%d is not a palindrome number.");
    }
}