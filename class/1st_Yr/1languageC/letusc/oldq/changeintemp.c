/*conversion of temp from fahrenheit to celcius */

#include<stdio.h>

int main()
{
   float fah,cel,celc,fahe;
   printf("\nEnter temperature of city in fahrenheit:");
   scanf("%f",&fah);
   cel=((fah-32)*5)/9;
   printf("\n The temp in celcius of the city is : %f",cel);
   
   printf("\nEnter the temp of city in celcius:");
   scanf("%f",&celc);
   fahe=((9*celc)/5)+32;
   printf("temp in fahe is :%f",fahe);
   return 0;
}