#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
char stack[50];
char stackpop[50];
int popi=0;

int push(char g,int max){
    if(top==max){
        printf("\t\t\t\t----------------STACK OVERFLOW------------------");
        return 0;
    }
    else{
        top++;
        stack[top]=g;
    }
}

int pop(){
    if(top==-1){
        printf("\t\t\t\t----------------STACK UNDERFLOW-----------------");
        return 0;
    }
    else{
        stackpop[popi]=stack[top];
        popi++;
        top=top-1;
    }
}

void printstackpop(){
    printf("\n");
    for(int i=0;i<popi;i++){
        printf("%c",stackpop[i]);
    }
    printf("\n");
}

void printstack(){
    printf("\n");
    for(int i=0;i<=top;i++){
        printf("%c",stack[i]);
    }
    printf("\n");
}

int main(){
    int max;
    char str[50];
    printf("enter the string:");
    scanf("%[^\n]s",str);
    max=strlen(str);
    for(int i=0;i<max;i++){
        push(str[i],max);
    }
    printstack();
    for(int i=0;i<max;i++){
        pop();
    }
    printstackpop();
}