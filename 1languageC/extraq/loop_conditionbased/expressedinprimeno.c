#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    int n1=2,n2;
    int a=1;
    while (n1<num-1)
    {
        int x=2;
        while (x<n1)
        {
            if (n1%x==0)
            {
                a=0;
                break;
            }
            else
            {
                a=1;
            }
            x+=1;
        }
        if (a==1)
        {
            n2=num-n1;
            int y=2;
            while (y<n2)
            {
                if (n2%y==0)
                {
                    a=0;
                    break;
                }
                else
                {
                    a=1;
                }
                y+=1;
            }
        }
        if (a==1)
        {
            printf("Numbers are:%d and %d\n",n1,n2);
        }
        n1+=1;
    }
    return 0;
}