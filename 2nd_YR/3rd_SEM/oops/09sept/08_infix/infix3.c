#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define maxsize 1000

int py(char op){
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;    
    default:
        return -1;
    }
}

int operator(char op){
    return (op=='+' || op=='-' || op=='*' || op=='/' || op=='^');
}

char* infixtopostfix(char* infix){
    int i,j=0;
    int len=strlen(infix);
    char* postfix=(char*)malloc(sizeof(char) * (len+2));
    char stack[maxsize];
    int top=-1;

    for(i=0;i<len;i++){
        if(isalnum(infix[i])){
            postfix[j++]=infix[i];
        }
        else if(infix[i]=='('){
            stack[++top]=infix[i];
        }
        else if(infix[i]==')'){
            while(top>-1 && stack[top]!='('){
                postfix[j++]=stack[top--];
            }
            if(top>-1 && stack[top]!='('){
                return "invalid";
            }
            else{
                top--;
            }
        }
        else if(operator(infix[i])){
            while(top>-1 && (py(stack[top])>=py(infix[i]))){
                postfix[j++]=stack[top--];
            }
            stack[++top]=infix[i];
        }
        while(top>-1){
            if(stack[top]=='('){
                return "invalid";
            }
            postfix[j++]=stack[top--];
        }

        postfix[j]='\0';
        return postfix;
    }
}
int main(){
    char infix[maxsize];

    scanf("%[^\n]s",infix);
    char* postfix=infixtopostfix(infix);
    printf("%s",postfix);
    return 0;
}