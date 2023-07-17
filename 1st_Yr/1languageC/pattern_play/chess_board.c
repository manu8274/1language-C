#include<stdio.h>
#include<math.h>
void main()
{
    for (int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
            if (i%2!=0)
            {
                for (int k=0;k<=1;k++)
                {
                    printf("*");
                }
                for (int l=0;l<=1;l++)
                {
                    printf(" ");
                }
            }
            else
            {
                for (int k=0;k<=1;k++)
                {
                    printf(" ");
                }
                for (int l=0;l<=1;l++)
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}