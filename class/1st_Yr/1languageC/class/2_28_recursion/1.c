//write a c program to print first 50 naturral number using recursion

#include<stdio.h>
int num(int x)
{
    if (x<=50)
    {
        printf("%d ",x);
        return num(++x);
    }
}

int main()
{
    int n=1;
    num(n);
    return 0;
}