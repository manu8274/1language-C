#include<stdio.h>
#include<string.h>

char bin[100];
void dectobin(int a)
{
    if (a>0)
    {
        int d;
        d=a%2;
        if (d==1)
        {
            strcat(bin,"1");
        }
        else
        {
            strcat(bin,"0");
        }
        a=a/2;
        dectobin(a);
    }
}

void main()
{
    int x;
    printf("enter the val:");
    scanf("%d",&x);
    dectobin(x);
    strrev(bin);
    printf("%s",bin);
}