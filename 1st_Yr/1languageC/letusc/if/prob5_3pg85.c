/*two number are entered find power*/
#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    float res;
    printf("\nenter the numbers:");
    scanf("%d %d", &x,&y);
    res=pow(x,y);
    printf("result is= %f",res);
}