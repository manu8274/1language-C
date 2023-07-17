#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int num1,num2;
    printf("enter the numbers :");
    scanf("%d %d",&num1,&num2);
    int i=1;
    int flag=1;
    while ((i<=num2) && (flag==1))
    {
        long int num11=num1*i;
        int j=1;
        while (j<=num1)
        {
           long int num22=num2*j;
            if (num22==num11)
            {
                printf("%d is the LCM",num22);
                flag=0;
                break;
            }
            j+=1;
        }
        i+=1;
    } 
}