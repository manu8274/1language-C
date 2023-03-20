#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int marks[10];
    for (int i=0;i<5;i++)
    {
        printf("enter a num:");
        scanf("%d",&marks[i]);
    }

    for (int i=0;i<5;i++){
        printf("%d\n",marks[i]);
    }

    for (int i=5;i<6;i++){
        printf("enter val:");
        scanf("%d",marks[i]);
    }   
    for (int i=0;i<6;i++){
        printf("%d\n",marks[i]);
    }
}