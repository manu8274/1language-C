#include<stdio.h>

int addmult(int x,int y)
{
    int u,v;
    u=x+y;
    v=x*y;
    return (u,v);
}
int main()
{
    int i=3,j=4,k,l;
    k=addmult(i,j);
    l=addmult(i,j);
    printf("%d  \n",k);
    printf("%d  \n",l);
}