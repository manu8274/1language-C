#include<stdio.h>
#include<string.h>
int main(){
    char x[20];
    printf("enter the sentence:");
    scanf("%[^n]c",&x);
    printf("%s",x);
}