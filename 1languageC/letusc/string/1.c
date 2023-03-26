#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char x[20];
    printf("enter the sentence:");
    gets(x);
    puts(x);
    char y[20];
    strcpy(y,x);
    puts(y);
}