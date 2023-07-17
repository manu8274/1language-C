#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char str[100];
    char str2[100];

    gets(str);

    strcpy(str2,str);
    printf("%s",str2);
}