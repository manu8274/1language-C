#include<stdio.h>

int main()
{
    float p,roi,t;
    printf("enter th population of town and rate of increase per year and time period:");
    scanf("%f %f %f",&p,&roi,&t);
    int yr;
    printf("enter your present year:");
    scanf("%d",&yr);
    float newpop=p;
    for (int i=1;i<=t;i++)
    {
        newpop = newpop + newpop*(roi/100);
        printf("new population by %d  year is %.0f \n",yr+i,newpop);
    }
}