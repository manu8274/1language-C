#include<stdio.h>
int main()
{
    float x,pow;
    int y,i;
    printf("\nenter two numbers:");
    scanf("%f %d", &x,&y);
    pow=i=1;
    while(i<=y)
    {
        pow=pow*x;
        i+=1;
    }
    printf("\n%f to the power %d is =%f",x,y,pow);
    return 0;
}