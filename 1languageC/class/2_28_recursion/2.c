//to print sum
#include<stdio.h>
int sumno =0;
int sum(int x)
{
    if (x>0)
    {
        sumno = sumno + x;
        return sum(--x);
    }
    else
    {
        printf("%d",sumno);
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    sum(num);
    return 0;
}
//method 2
/*#include<stdio.h>
int sor(int x);
int main()
{
    int n1;
    int sum;
    printf("intput the number:");
    scanf("%d",&n1);

    sum=sor(n1);
    printf("%d",sum);
}
int sor(int n1)
{
    int res;
    if (n1==1)
    {
        return (1);
    }
    else
    {
        res =n1+sor(n1-1);
    }
    return res;
}*/