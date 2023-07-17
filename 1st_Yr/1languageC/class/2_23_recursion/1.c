#include<stdio.h>
int fibo(int i)
{
    if (i==0 || i==1)
    {
        return i;
    }
    else
    {
        return (fibo(i-1)+fibo(i-2));
    }
}
int main()
{
    int n;
    printf("enter ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("%d \n",fibo(i));
    }
    return 0;
}