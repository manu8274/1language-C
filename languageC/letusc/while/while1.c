/*calculation of simple interest for n sets*/
#include<stdio.h>
int main()
{
    int p,t,n,count;
    float r,si;

    count=1;
    printf("enter the number of times to calculate si:");
    scanf("%d", &n);
    while (count<=n)
    
    {
        printf("\nenter principle amount:");
        scanf("%d", &p);
        printf("enter time period:");
        scanf("%d", &t);
        printf("enter rate of interest:");
        scanf("%f", &r);
        si=(p*n*r)/100;
        printf("\nyour simple interest is :%f",si);
        printf("\nyour total amount:%f",si+p);
        count=count+1;
    }
    return 0;
}