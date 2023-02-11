#include<stdio.h>
void main()
{
    for(int i=0;i<24;i++)
    {
        if (i==0)
        {
            printf("%d midnight\n",i);
        }
        else if (i>0 && i<=11)
        {
            printf("%d am\n",i);
        }
        else if(i==12)
        {
            printf("%d noon\n",i);
        }
        else
        {
            printf("%d pm\n",i);
        }
    }
}