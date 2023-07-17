#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char str[100];
    char str2[100];

    gets(str);

    gets(str2);
    strcat(str,str2);
    printf("%s",str);
}