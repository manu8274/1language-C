#include<stdio.h>

int romanise(int y,int k,char c)
{
    int j;
    j=y/k;
    for (int i=1;i<=j;i++)
    {
        printf("%c",c);
    }
    return (y%k);
}
int main()
{
    int yr;
    printf("enter the year:");
    scanf("%d",&yr);
    yr=romanise(yr,1000,'M');
    yr=romanise(yr,500,'D');
    yr=romanise(yr,100,'C');
    yr=romanise(yr,50,'L');
    yr=romanise(yr,10,'X');
    yr=romanise(yr,5,'V');
    yr=romanise(yr,1,'I');
}