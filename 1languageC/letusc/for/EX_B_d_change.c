#include<stdio.h>
#include<math.h>

int main()
{
    float x,not,sum;

    printf("enter the value:");
    scanf("%f %f",&x,&not);

    sum=(x-1)/2;
    for (int i=2;i<=not;i++)
    {
        sum = sum+ 0.5*(pow((x-1)/2,i));
    }
    printf("%f",sum);
}