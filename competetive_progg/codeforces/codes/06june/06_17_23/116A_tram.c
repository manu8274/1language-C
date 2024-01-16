#include<stdio.h>
int main(){
    int  n;
    scanf("%d",&n);
    int sum=0,temp=0;
    for(int i=0;i<n;i++){
        int ao,ai;
        scanf("%d %d",&ao,&ai);
        int sum1;
        sum1=(temp-ao) + ai;
        if(sum1>sum)    sum=sum1;
        temp=sum1;
    }
    printf("%d",sum);
}