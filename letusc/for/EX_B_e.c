//pythagorean triplet
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            for (int k=1;k<=n;k++)
            {
                if ((i*i)==((j*j)+k*k))
                {
                    printf("the pythagorean triplet:%d %d %d\n",i,j,k);
                }
            }
        }
    }
}