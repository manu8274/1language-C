#include<stdio.h>

void fun(int i , int j)
{
    i=i * i;
    j=j * j;
}
int main()
{
    int i=5,j=2;
    fun(i,j);
    printf("%d %d ",i,j);
}