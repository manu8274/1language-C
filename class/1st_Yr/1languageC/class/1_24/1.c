#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    char o;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("enter the operator:");
    scanf("%c",&o);
    switch (o)
    {
        case '+':
            printf("sum of %d and %d is:%d",a,b,a+b);
            break;
        case '-':
            printf("diff of %d and %d is:%d",a,b,a-b);
            break;
        case '*':
            printf("product of %d and %d is:%d",a,b,a*b);
            break;
        case '/':
            printf("quotient of %d and %d is:%d",a,b,a/b);
            break;
    }
    return 0;
}