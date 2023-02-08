#include<stdio.h>

int main()
{
    for (int num=1;num<=300;num++)
    {
        int c=0,i=2;
        for ( i ;i<num;i++)
        {
            if (num%i==0)
            {
                c++;   
            }
        }
        if (c==0)
        {
            printf("prime number is %d\n",num);
        }
    }
    return 0;
    
}