#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5;
    float per;
    printf("\n enter the marks:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    printf("yours percentage is:%f",per);
    if(per>=80)
        printf("\nfirst division");
    else if(per>=60)
        printf("\nsecond division");
    else if(per>=40)
        printf("\nthird division");
    else
        printf("\nfail");
    return 0;
}