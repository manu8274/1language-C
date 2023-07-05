/* calculate Ramesh gross salary */
#include<stdio.h>
int main()
{
   float bp,da,hra,gp;
   printf("\n enter basic salary ");
   scanf("%f",&bp);
   da=0.4*bp;
   hra=0.2*bp;
   gp=bp+da+hra;
   printf("basic salary of Ramesh:%f\n",bp);
   printf("da,hra :%f,%f\n",da,hra);
   printf("total pay:%f\n",gp);
   return 0;
}
