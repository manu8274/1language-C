#include<stdio.h>
int num;
void main()
{
    num=10;
    printf("%d\n",num);
    fun();
}
void fun()
{
    num=20;
    printf("%d\n",num);
    fun2();
}
void fun2()
{
    num=40;
    printf("%d\n",num);
}