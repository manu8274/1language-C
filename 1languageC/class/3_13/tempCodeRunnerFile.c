#include<stdio.h>

int main()
{
    int num=8;
    int *ptr=&num;
    printf("%d\n",num);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);

    *ptr=20;
    printf("%d\n",num);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);
}