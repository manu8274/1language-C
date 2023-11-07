#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int n,r;
    printf("Enter the number of people and seats: ");
    scanf("%d %d",&n,&r);

    int x=n-r;
    long int factn=1;
    int i=1;
    while (i<=n)
    {
        factn = factn*i;
        i++;
    }
    long int factr=1;
    int j=1;
    while (j<=r)
    {
        factr=factr*j;
        j++;
    }
    long int factx=1;
    int k=1;
    while (k<=x)
    {
        factx=factx*k;
        k++;
    }
    long int den=factr*factx;
    printf("%d %d %d",factn,factr,factx);
    printf("\nThe final result is %d.",factn/den);
}