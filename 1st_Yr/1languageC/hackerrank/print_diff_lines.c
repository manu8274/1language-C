#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    /*char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    char x[100];*/
    char s[100];
    gets(s);
    int len;
    len=strlen(s);
    for(int i=0;i<len;i++){
        if (s[i]==' ') printf("\n");
        else{
            printf("%c",s[i]);
        }
    }
}