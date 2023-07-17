#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    float x,y;
    printf("enter the coordinates:");
    scanf("%f %f",&x,&y);

    if (x>0)
    {
        if (y>0)
        {
            printf("%f,%f lie in first quadrant.",x,y);
        }
        else
        {
            printf("%f,%f lie in fourth quatrant.",x,y);
        }
    }
    else
    {
        if (y>0)
        {
            printf("%f,%f lie in second quadrant.");
        }
        else
        {
            printf("%f,%f lie in third quadrant.");
        }
    }
}