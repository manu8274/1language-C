//a program to convert uppercase to lower case
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char uppr[92];
    printf("enter th eupper string:");
    gets(uppr);

    strlwr(uppr);
    printf("%s",uppr);
}