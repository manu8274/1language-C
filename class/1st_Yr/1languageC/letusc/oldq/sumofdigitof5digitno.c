/* reverse 5 digit number */
#include<stdio.h>

int main()
{
    int n,d5,d4,d3,d2,d1,sum;
    printf("\n Enter a number upto five digit number:");
    scanf("%d",&n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    
    sum=d5+ d4+ d3 +d2 +d1;
    printf("\n sum of digit is:%d",sum);
    return 0;
}