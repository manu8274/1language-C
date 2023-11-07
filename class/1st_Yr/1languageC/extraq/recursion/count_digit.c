#include<stdio.h>
int c=0;
int count(int x)
{
    if (x>0)
    {
        c+=1;
        x=x/10;
        return (count(x));
    }
    else
    {
        printf("%d",c);
    }
}
int main()
{
    int num;
    printf("enter the val:");
    scanf("%d",&num);

    count(num);
}