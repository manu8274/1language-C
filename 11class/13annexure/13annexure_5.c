#include<stdio.h>
#include<math.h>

int main()
{
    float u,a,t,b,c,p,V,S,T,H;
    printf("enter the values of u,a,t,b,c,p:");
    scanf("%f %f %f %f %f %f",&u,&a,&t,&b,&c,&p);
    V=u + a*t;
    S=(u*t) +0.5*a*(pow(t,2));
    T=2*a + pow(b,0.5) + 9*c;
    H=pow(b*b+p*p,0.5);
    printf("the values entered are u=%.1f,a=%.1f,t=%.1f,b=%.1f,c=%.1f,p=%.1f",u,a,t,b,c,p);
    printf("\nthe final solutions are are \nV=%.2f,\nS=%.2f,\nT=%.2f,\nH=%.2f",V,S,T,H);
    return 0;
}