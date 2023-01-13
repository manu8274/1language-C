/*armstrong number*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    long int i=1,len,sum=0,orignum;
    char num[0];
    printf("\n enter the number: ");
    scanf("%s",num);
    len=strlen(num);
    int num1=atoi(num);
    orignum=num1;
    while (i<=len)
    {
        int d;
        d=num1%10;
        num1=num1/10;
        sum=sum + (d*d*d);
        i+=1;
    }
    if (orignum==sum)
    {
        printf("True %d is armstrong number.",orignum);
    }
    else
    {
        printf("False %d is not armstrong number.",orignum);
    }
}