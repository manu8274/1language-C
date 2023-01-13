#include<stdio.h>
#include<math.h>

int main()
{
    float t,v,v1,wcf;
    printf("\nEnter the temp and wind velocity of wind:");
    scanf("%f %f",&t,&v);
    v1=pow(v,0.16);
    
    wcf=35.74 + 0.6215*t +(0.4275*t - 35.75) *v1;
    printf("\nfor temp andvelocity:%f%f",t,v);
    printf("\nthe wcf=%f",wcf);
    return 0;
}