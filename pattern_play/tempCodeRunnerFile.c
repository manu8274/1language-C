#include<stdio.h>
#include<math.h>

void main()
{
    int num=10;

    for (int i=1;i<((2*num));i++)
    {
        for (int j=1;j<2*num;j++)
        {
            if (i==1 || i== 2*num-1 || j==1 || j==2*num-1)
            {
                printf("%d ",num);
            }
            else if ((i==2 && j>=2 && j<=2*num-2) || (j==2 && i>=2 && i<=2*num-2) || (j==2*num-2 && i>=2 && i<=2*num-2) || (i==2*num-2 && j>=2 && j<=2*num-2))
            {
                printf("%d ",num-1);
            }
            else if ((i==3 && j>=3 && j<=2*num-3) || (j==3 && i>=3 && i<=2*num-3) || (j==2*num-3 && i>=3 & i<=2*num-3) || (i==2*num-3 && j>=3 && j<=2*num-3))
            {
                printf("%d ",num-2);
            }
            else
            {
                printf("%d ", num-3);
            }
        }
        printf("\n");
    }
}