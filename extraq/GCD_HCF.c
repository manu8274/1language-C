#include<stdio.h>
#include<math.h>

void main()
{
    int num1,num2;
    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);
    int i=1,GCD=1;
    while (i<=num1)
    {
        if ((num1%i==0) && (num2%i==0))
        {
            GCD=i;
        }
    i+=1;
    }
    printf("GCD=%d",GCD);
}