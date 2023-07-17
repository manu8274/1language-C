#include<stdio.h>
int main(){
    int number=50; int *p;
    p=&number;
    printf("%u\n",p);
    p+=3;
    printf("%u",p);
}