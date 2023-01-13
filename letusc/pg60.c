#include<stdio.h>

int main()
{
    char sex,ms;
    int age;
    printf("enter age,sex,marital status:");
    scanf("%d %c %c",&age,&sex,&ms);
    if((ms=='m')||(ms=='u'&& sex=='m'&& age>30)||(ms=='u'&& sex=='f'&& age>25))
        printf ("\n driver should be insured");
    else
        printf("\driver should be not insured");
        
    return 0;
}