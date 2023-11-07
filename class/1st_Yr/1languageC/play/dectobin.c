#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

/*int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    int b=a;
    char rem[100];
    while (a>0)
    {
        
        char s[10];
        int d;
        d=a%2;
        sprintf(s ,"%d", d);
        strncat(rem , s , 1);
        a=a/2;
    }
    printf("\n%d in binary is %s",b,strrev(rem));
}*/
/*10100*/
int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    int b=a;
    char rem[10000];
    while (a>0)
    {
        int d;
        d=a%2;
        if (d==1)
        {
            char s='1';
            strncat(rem , &s , 1);
        }
        else
        {
            char s='0';
            strncat(rem , &s , 1);
        }
        a=a/2;
    }
    strrev(rem);
    printf("\n%d in binary is %s",b,rem);
}