#include<stdio.h>
void power_fact(float x,int y, int num, float *power,int *fact)
{
    float res=1;
    int i;
    for(int i=1;i<=y;i++)
    {
        res=res*x;
    }
    *power=res;
    res=1;
    for(int i=1;i<=num;i++)
    {
        res=res*i;
    }
    *fact=res;
}
int main()
{
    float a;
    int b,number,fact;
    float pow;
    printf("enter the value on a and b:");
    scanf("%f %d",&a,&b);
    printf("enter the num whose factorial is  calculated:");
    scanf("%d",&number);
    power_fact(a,b,number,&pow,&fact);
    printf("power = %f \nFactorial=%d",pow,fact);
    return 0;
}
