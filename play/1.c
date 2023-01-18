#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a;
    scanf("entr a number %d",&a);
    char rem[100]="0";
    int b=a;
    while (a>0)
    {
        
        char s[2];
        int d;
        d=a%2;
        itoa(d,s,1);
        printf("\n%s",s);
        strncat(rem , s , 1);
        a=a/2;
    }
    printf("%s",rem);
    printf("%d in binary is %s",b,rem);
}