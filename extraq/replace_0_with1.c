#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);

    int nnum=0;
    int orignum=num;

    while (num>0)
    {
        int d;
        d=num%10;
        
        if (d==0)   
        {
            nnum=1*10 +d;
        }
        else if (d==1)
        {
            nnum=nnum*100;
        }
        else
        {
            nnum=nnum*10+d; 
        }
        num=num/10;
    }
    printf("for the num %d new number is %d.",orignum,nnum);
}