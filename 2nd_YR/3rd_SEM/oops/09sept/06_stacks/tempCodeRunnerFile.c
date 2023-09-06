#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int top=-1;
int stack[50];
int stackpop[50];
int popi=0;
char orig[500];
int push(int n,int max){
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
    stackpop[popi]=stack[top];
    top=top-1;
}

int stringrev(char arr[],int n){
    orig[n];
    int tops=n-1;
    for (int i=0;i<n;i++){
        orig[i]=arr[tops];
        tops--;
    }
}

int main(){
    int max;
    printf("enter the length of expression:");
    scanf("%d",&max);
    char arr[max];
    printf("enter the expression:");
    scanf("%s",arr);
    
    stringrev(arr,max);
    
    for(int i=0;i<max;i++){
        arr[i]=orig[i];
    }
    for (int i=0;i<max;i++){
        int y;
        y=-1*(48 - arr[i]);
        if(y>=0 && y<=9){
            push(y,max);
        }
        else{
            int k;
            if(arr[i]=='+'){
                k=stack[top-1]+stack[top];
            }
            else if(arr[i]=='*'){
                k=stack[top-1]*stack[top];
            }
            else if(arr[i]=='-'){
                k=stack[top-1]-stack[top];
            }else if(arr[i]=='/'){
                k=stack[top-1]/stack[top];
            }
            pop();
            pop();
            push(k,max);
        }
    }
    printf("\nThe final answer id = %d.",stack[0]);
}