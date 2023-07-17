#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int i=1,sum=0;
    long int len;
    char num[1000];
    scanf("%s",num);
    len=strlen(num);
    int num1=atoi(num);
    while (i<=len)
    {
        int d;
        d=num1%10;
        num1=num1/10;
        sum=sum + (d);
        i+=1;
    }
    printf("%d",sum);
}