#include<stdio.h>
void change(int *kg,int*g,int*t,int*p)
{
    *g=*kg *1000;
    *t=*kg /907;
    *p=*kg *2.204;
}

int main()
{
    int kg,g,t,p;
    printf("enter the value in kg:");
    scanf("%d",&kg);
    change(&kg,&g,&t,&p);
    printf("kg=%d \ngram=%d \nton=%d \npound=%d",kg,g,t,p);
    return 0;
}