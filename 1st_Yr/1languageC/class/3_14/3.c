//pointer to pointer i.e. double pointer
#include<stdio.h>
int main(){
    int **ptr;
    int *p;
    int num;
    scanf("%d",&num);
    p=&num;
    ptr=&p;
    printf("address of num %u\n",&num);
    printf("address of p %u\n",&p);
    printf("address of ptr %u\n",&ptr);
    printf("value of p %u\n",p);
    printf("value of *p %u\n",*p);
    printf("value of ptr %u\n",ptr);
    printf("value of *ptr %u\n",*ptr);
    printf("value of **ptr %u\n",**ptr);
}