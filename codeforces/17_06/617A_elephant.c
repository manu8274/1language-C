#include<stdio.h>
int main(){
    int d;
    scanf("%d",&d);
    int s1,s2,s3,s4,s5;
    s1=d/5;d=d%5;
    s2=d/4;d=d%4;
    s3=d/3;d=d%3;
    s4=d/2;d=d%2;
    s5=d;
    printf("%d",s1+s2+s3+s4+s5);
}