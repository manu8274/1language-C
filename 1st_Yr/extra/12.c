#include<stdio.h>
#include<unistd.h>

int main(){
    int p1,p2,i=0;
    p1=fork();
    printf("p1=%d\n",i);
    p2=fork();
    printf("p2=%d\n",i);
}