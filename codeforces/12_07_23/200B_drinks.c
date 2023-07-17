#include<stdio.h>
int main(){
    float x,sum=0;
    scanf("%f",&x);
    for(int i=0;i<x;i++){
        float d;
        scanf("%f",&d);
        sum=sum+d;
    }
    float a;
    a=sum/x;
    printf("%f",a);
}