/*factorial of a num*/
#include<stdio.h>
#include<math.h>

int main()
{
    int num,fact=1;
    printf("\nenter the number: ");
    scanf("%d", &num);
    while(num>=1)
    {
        fact=fact*num;
        num-=1;
    }
    printf("\nfactorial of number is: %d",fact);
    return 0;
}