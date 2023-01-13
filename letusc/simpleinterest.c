/*calculation of simple interest */
#include<stdio.h>
int main()
{
   int p,n;
   float r,si;

   printf("enter principle amount:");
   scanf("%d",&p);
   printf("enter time:");
   scanf("%d",&n);
   printf("enter rate:");
   scanf("%f",&r);
   /*formula for simple interest*/
   si=(p*r*n)/100;
   printf("your interest is: %f",si);
   printf("\ntotal amount=%f",si+p);
}