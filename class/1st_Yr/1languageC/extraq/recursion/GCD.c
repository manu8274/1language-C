#include<stdio.h>
int i=0,hcf=0;
int gcd(int x1,int x2)
{

    if (i<x1)
    {
        if (x1%i==0 && x2%i==0)
        {
            GCD=i;
        }
        i=i+1;
        return gcd(x1,x2);
    }
    else
    {
        printf("%d",hcf);
    }
}
int main()
{
    int num1,num2;
    printf("enter the val:");
    scanf("%d %d",&num1,&num2);

    gcd(num1,num2);
}
