/*enter number untill user wants and display how many entered are positive,negative or zero*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
        int i=0,times,pos=0,neg=0,zero=0;
        printf("\n Enter the number of times you want to enter the number:");
        scanf("%d",&times);
        while (i<times)
        {
            int num;
            printf("\n Enter the number:");
            scanf("%d",&num);
            if (num==0)
            {
                zero+=1;
            }
            else if (num<0)
            {
                neg+=1;
            }
            else
            {
                pos+=1;
            }
            i+=1;
        }
        printf("number of positive number entered: %d \n number of negative numbers entered: %d \n number of zeroes entered:%d",pos,neg,zero);
}