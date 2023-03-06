#include<stdio.h>
#include<math.h>

int main()
{
    int a=1;
    for (int i=1;i<=4;i++)
    {
        for (int j=0;j<4-i;j++)
        {
            printf(" ");
        }
        for (int k=0;k<i;k++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
}