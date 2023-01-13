#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char num[],rem[];
    int i=0,d,len;
    printf("\n Enter the number:");
    scanf("%s",&num);
    len=strlen(num);
    int num1=atoi(num);
    while (d!=0)
    {
        d=num1%8;
        num1=num1/8;
        rem.append(d);
    } 
}