#include<stdio.h>

void main()
{
    int y;
    float x,i;
    for (y=1;y<=6;y++)
    {
        for (x=5.5;x<=12.5;x+=0.5)
        {
            int i;
            i=2 + (y + 0.5 * x);
            printf("value of i = %d \n",i);
        }
    }
}