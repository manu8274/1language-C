#include<stdio.h>

int main()
{
    int y;
    printf("\n Enter year:");
    scanf("%d",&y);
    if( y % 400==0 || y % 100!=0 && y % 4==0)
       printf("leap year\n");
    else
       printf("Not leap year\n");
    return 0;
}