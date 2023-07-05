#include<stdio.h>
#include<math.h>

int main()
{
    float l1,l2,g1,g2,d;
    printf("\n Enter the coordinate of 1st point:");
    scanf("%f%f",&l1,&g1);
    printf("\n Enter the coordinate of 2nd point:");
    scanf("%f%f",&l2,&g2);
    
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("\n Distance between the point in nautical mile is:%f",d);
    
    return 0;
}