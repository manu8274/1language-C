/* to get least no. of notes for given money */
#include<stdio.h>
int main()
{ 
    int am,n100,n50,n10,n5,n2,n1;
    printf("\n Enter the amount:");
    scanf("%d",&am);
    n100=am/100;
    am=am%100;
    n50=am/50;
    am=am%50;
    n10=am/10;
    am=am%10;
    n5=am/5;
    am=am%5;
    n2=am/2;
    am=am%2;
    n1=am/1;
    
    printf("\ntotal number of 100 notes:%d",n100);
    printf("\ntotal number of 50 notes:%d",n50);
    printf("\ntotal number of 10 notes:%d",n10);
    printf("\ntotal number of 5 notes:%d",n5);
    printf("\ntotal number of 2 notes:%d",n2);
    printf("\ntotal number of 1 notes:%d",n1);
    printf("\ntotal number of notes:%d",n100+n50+n10+n5+n2+n1);
    return 0;
}