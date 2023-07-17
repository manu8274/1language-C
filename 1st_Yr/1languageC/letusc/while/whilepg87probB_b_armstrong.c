/*armstrong number*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void main(){
    long int i=1,orignum;
    float len,sum=0;
    char num[100];
    printf("\n enter the number: ");
    scanf("%s",num);
    len=strlen(num);
    int num1=atoi(num);
    int x;
    x=(int)len;
    orignum=num1;
    while (i<=x)
    {
        float d;
        d=num1%10;
        num1=num1/10;
        d=pow(d,len);
        sum=sum + d;
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