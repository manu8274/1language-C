#include<stdio.h>
#include<math.h>

int main()
{
    long long int z;
    for(int i=0;i<=10;i+=1)
    {
        printf("\n %d",i);
        z=pow(i,i);
        printf(" %d",z);
    }
    return 0;
}