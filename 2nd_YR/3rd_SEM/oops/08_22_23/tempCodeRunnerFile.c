//to make pointer structure
#include<stdio.h>
#include<string.h>
int main(){
    int *ptr1=NULL;
    int*ptr2,*ptr3=NULL;
    int x=10,y=20;
    printf("ptr2 size before initialise is : %d \n",sizeof(ptr2));
    ptr2=&y;
    printf("ptr2 size after initialise is : %d \n",sizeof(ptr2));
    ptr1=&x;
    printf("value of x : %d \n",x);
    printf("value of x variable memory address : %d \n",&x);
    printf("value of ptr1 : %d \n",ptr1);
    printf("value of ptr1 size : %d \n",sizeof(ptr1));
}