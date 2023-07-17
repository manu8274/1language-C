#include<stdio.h>
#include<stdlib.h>

void primefactor(int x)
{
    int y=x;
    int j;
    while (y>1)
    {
        for (int i=2;i<x;i++)
        {
            for (j=2;j<i;j++)
            {
                if (i%j==0)
                {
                    break;
                }
            }
            if (j==i)
            {
                while (y%j==0)
                {
                    int a;
                    a=y/j;
                    printf("%d\n",j);
                    y=y/j;
                }
                
            }
        }
    }
}

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    primefactor(num);
    return 0;
}