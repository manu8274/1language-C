#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int operate(int a,int b){
    return (a*b);
}
float operate(float a,float b){
    return (a/b);
}
int main(){
    int x=5,y=6;
    float a=5.0,b=2.0;
    printf("%d",opearte(x,y));
    printf("%f",opearte(a,b));
}