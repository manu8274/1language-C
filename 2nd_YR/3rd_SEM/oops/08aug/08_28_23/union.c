#include<stdio.h>
#include<string.h>

union std{
    int a;
    char b;
    double x;
};

int main(){
    union std s1;
    printf("%d",sizeof(s1));
}