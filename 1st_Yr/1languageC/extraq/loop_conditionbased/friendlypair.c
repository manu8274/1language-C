#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int num1,num2;
    printf("Enter the number :");
    scanf("%d %d",&num1,&num2);
    int orignum1,orignum2;
    orignum1=num1;
    orignum2=num2;
    int i=1,sum1=0;
    while (i<num1)
    {
        if (num1%i==0)
        {
            sum1+=i;
        }
        i++;
    }
    int j=1,sum2=0;
    while (j<num2)
    {
        if (num2%j==0)
        {
            sum2+=j;
        }
        j++;
    }

    if ((orignum1/sum1)==(orignum2/sum2))
    {
        printf("\n%d and %d are friendly pair.",num1,num2);
    }
    else
    {
        printf("\n%d and %d are not friendly pair.",num1,num2);
    }
}