#include<stdio.h>
#include<string.h>
void main()
{
    int d;
    char s[10];
    d=50875;
    sprintf(s,"%d",d);
    printf("value=:");
    printf("%s",s);
    char x='1';
    printf("%c",x);
}