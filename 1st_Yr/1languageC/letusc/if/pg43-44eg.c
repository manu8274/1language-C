#include<stdio.h>
int main()
{
    float sal,hra,da,grsal;
    printf("Enter the salary:");
    scanf("%f",&sal);
    if (sal<1500)
    {
        hra=sal*10/100;
        da=sal*90/100;
    }
    else 
    {
        hra=500;
        da=sal*98/100;
    }
    grsal=sal+hra+da;
    printf("Total salary:%f\n",grsal);
    return 0;     
}