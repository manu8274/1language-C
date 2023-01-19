#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,q;
    printf("\n Enter the coordinates of point:");
    scanf("%f %f",&x,&y);
    
    r=sqrt(x*x + y*y);
    q=atan(y/x);
    printf("\n polar coordinates of point are: %f %f",r,q);
    return 0;
}