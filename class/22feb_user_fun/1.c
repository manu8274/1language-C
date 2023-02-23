//func to add two num
#include<stdio.h>
int sum1(int a,int b)
{
    return a+b;
}

int main()
{
    int n1,n2,sum;
    printf("enter the value:");
    scanf("%d %d",&n1,&n2);
    sum=sum1(n1,n2);
    printf("%d",sum);
}