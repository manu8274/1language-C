/*circumference aand area of circle*/
#include<stdio.h>

int main()
{
    float r,ar,circumference;
    printf("\nEnter the radius of circle");
    scanf("%f",&r);
    ar=3.14*r*r;
    circumference=2*3.14*r;
    printf("\narea of circle %f and circumference of circle is %f",ar,circumference);
}