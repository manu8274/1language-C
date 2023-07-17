/*area of triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,ar,area;
    printf("\n ENTER THE SIDES OF TRIANGLE:");
    scanf("%d %d %d", &a,&b,&c);
    s=(a+b+c)/2;
    ar=(s*(s-a)*(s-b)*(s-c));
    area=pow(ar,0.5);
    printf("\n AREA OF TRIANGLE:%f",area);
}