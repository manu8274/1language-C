#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    int b=a;
    char rem[100000];
    while (a>0)
    {
        
        char s[10];
        int d;
        d=a%8;
        sprintf(s ,"%d", d);
        strncat(rem , s , 1);
        a=a/8;
    }
    printf("\n%d in binary is %s",b,strrev(rem));
}