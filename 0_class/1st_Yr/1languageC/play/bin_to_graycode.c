#include<stdio.h>
#include<string.h>
char gc[1000];
void main()
{
    int bin;
    printf("enter the number in binary:");
    scanf("%d",&bin);
    int binorg;
    binorg = bin;
    while (bin>1)
    {
        int d1,d2;
        d1=bin%10;
        bin=bin/10;
        d2=bin%10;

        if (( d1==1 && d2==1 ) || (d1==0 && d2==0))
        {
            strcat(gc,"0");
        }
        else if ((d1==0 && d2==1) || (d1==1 && d2==0 ))
        {
            strcat(gc,"1");
        }
    }
    if (bin==1)
    {
        strcat(gc,"1");
    }
    else
    {
        strcat(gc,"0");
    }
    strrev(gc);
    printf("%s",gc);
}