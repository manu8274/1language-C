#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            for (int k=1;k<=3;k++)
            {
                if (i==3 && j==3 && k==3)
                {
                    goto out;
                }
                else{
                    printf("%d %d %d \n",i,j,k);
                }
            }
        }
    }
    out:
        printf("hello");
}*/
int main()
{
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            for (int k=1;k<=3;k++)
            {
                if (i==1 && j==3 && k==3)
                {
                    goto out;
                }
                else{
                    printf("%d %d %d \n",i,j,k);
                }
            }
        }
    }
    out:
        exit(1);
}