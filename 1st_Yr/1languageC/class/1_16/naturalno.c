#include<stdio.h>
#include<stdlib.h>

int main()
{
    float i;
    scanf("%f",&i);
    int x;
    x=(int)i;
    if (i==x && i>0)
    {
        printf("natural number");
    }
    else{
        printf("not an natural no.");
    }
}