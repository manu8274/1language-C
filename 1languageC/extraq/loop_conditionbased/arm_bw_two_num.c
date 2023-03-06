#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter the range of numbers: ");
    scanf("%d %d",&num1,&num2);

    while (num1<num2)
    {
        int i=num1;
        float count=0.0;
        while (i>0)
        {
            count+=1.0;
            i=i/10;
        }
        int j=num1;
        float sum=0.0;
        while (j>0)
        {
            float d;
            d=j%10;
            d=pow(d,count);
            sum=sum + d;
            j=j/10;
        }
        if (sum==num1)
        {
            printf("\n%d is armstrong",num1);
        }
        num1=num1+1;
    }
    return 0;
}