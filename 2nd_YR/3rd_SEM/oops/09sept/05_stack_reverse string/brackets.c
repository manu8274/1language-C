#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top=-1;
char stack[500];
char stackpop[500];
int popi=0;

int push(char n,int max){
    if(top==max){
        printf("------------------------STACK OVERFLOW---------------------");
        return 0;
    }
    else{
        top++;
        stack[top]=n;
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

int main(){
    int max;
    printf("enter the size of expression:");
    scanf("%d",&max);
    char arr[max];
    scanf("%s",arr);
    for(int i=0;i<max;i++){
        if(arr[i]=='{' || arr[i]=='[' || arr[i]=='('){
            push(arr[i],max);
        }
        else{
            if(stack[top]==arr[i]){
                pop();
            }
            else{
                printf("---------------------------------STACK UNDERFLOW-----------------------------");
                return 0;
            }
        }
    }
    
}