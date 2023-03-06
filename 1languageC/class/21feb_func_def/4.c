#include<stdio.h>
#include<string.h>

void main()
{
    char ch[200];
    gets(ch);

    strupr(ch);
    printf("%s",ch);
}