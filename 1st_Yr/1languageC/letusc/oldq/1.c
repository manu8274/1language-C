/*distance conversion*/
#include<stdio.h>
int main()
{
    float km,m,cm,ft,inch;
    printf("enter numbers :");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("kilo:%f\n",km);
    printf("meter:%f\n",m);
    printf("cm:%f\n",cm);
    printf("inch:%f\n",inch);
    printf("feet:%f\n",ft);
}