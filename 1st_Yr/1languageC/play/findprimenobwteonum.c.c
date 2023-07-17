#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int n1,n2;
    printf("enter the range of numbers");
    scanf("%d %d",&n1,&n2);

    int z=n1,div=2;
    while (z>=n1 && z<n2)
    {
        while (div<z)
        {
            if (z%div==0)
            {
                z+=1;
                break;
            }
            else
            {
                div+=1;
            }
        }
        printf("\n%d is prime no.",z);
        z+=1;
    }
}