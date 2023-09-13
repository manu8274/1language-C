#include<stdio.h>
#include<string.h>

struct pokimon
{
    char name[100];
    char attack;
};

int main(){
    struct pokimon charizard;
    char z[100];
    scanf("%[^\n]s",z);
    scanf("%d",&charizard.attack);
    strcpy(charizard.name,z);
    printf("%s\n",charizard.name);
    printf("%d",charizard.attack);
}