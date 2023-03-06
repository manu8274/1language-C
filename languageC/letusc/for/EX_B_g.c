#include<math.h>
#include<stdio.h>

void  main()
{
    float n;
    printf("enter th limit:");
    scanf("%f",&n);
    for (int l=1;l<=n;l++)
    {
        for(int i=1;i<=l;i++)
        {
            for (int j=1;j<=l;j++)
            {
                if ((pow(i,3))+pow(j,3)==l)
                {
                    printf("the %d and %d cube sum is = %d\n",i,j,l);
                }
            }
        }
    }
}