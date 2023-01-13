#include<stdio.h>
int main()
{
    int i;
    printf("\nEnter the integer:");
    scanf("%d",&i);
    if(i%2==0)
        printf("\nThe number u entered is even.");
    else
        printf("\nThe number u entered is odd.");
    return 0;   
}