/*swapping number using temp var
#include<stdio.h>
int main(){
    int a,b,c;
    printf("\n Enter the numbers: ");
    scanf("%d %d", &a,&b);
    c=a;
    a=b;
    b=c;
    printf("new nmbers a=%d and b=%d",a,b);
    return 0;
}/*
/* swapping without temp*/
#include<stdio.h>

int main(){
    int a,b;
    printf("\n Enter the numbers a and b: ");
    scanf("%d %d", &a,&b);
    a=a + b;
    b=a-b;
    a=a-b;
    printf("new nmbers a=%d and b=%d",a,b);
    return 0;
}