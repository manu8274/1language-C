#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    int a=1,b=0,c=0;
    int i=0;
    while (i<n)
    {
        printf("%d\n",c);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}