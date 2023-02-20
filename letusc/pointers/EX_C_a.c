//alternate change in values
#include<stdio.h>
void change(int *a,int *b, int *c)
{
    int x;
    x=*a;
    *a=*c;
    *c=*b;
    *b=x;
}
void main()
{
    int x,y,z;
    printf("enter the values:");
    scanf("%d %d %d",&x,&y,&z);
    printf("%d %d %d\n",x,y,z);

    change(&x,&y,&z);
    printf("%d %d %d",x,y,z);
}