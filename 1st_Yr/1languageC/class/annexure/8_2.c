#include<stdio.h>
void main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    switch (num>0)
    {
        case 1: 
            printf("%c is positive.",num);
            break;
        case 0:
            switch (num<0)
            {
                case 1:
                    printf("%d is negative.",num);
                    break;
                case 0:
                    printf("%d is zero.",num);
                break;
            }  
    }
}