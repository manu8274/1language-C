#include<stdio.h>
#include<math.h>

int main()
{
    for (int i=1;i<=4;i++)
    {
        for (int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for (int k=4-i;k<4;k++)
        {
            printf("%d ",4+i-k);
        }
        printf("\n");
    }
}