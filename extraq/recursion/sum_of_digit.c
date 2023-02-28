#include<stdio.h>
int c=0,sod=0;
int sum(int x)
{
    if (x>0)
    {
        c+=1;
        int d=x%10;
        sod+=d;
        x=x/10;
        return (sum(x));
    }
    else
    {
        printf("%d",sod);
    }
}
int main()
{
    int num;
    printf("enter the val:");
    scanf("%d",&num);

    sum(num);
}