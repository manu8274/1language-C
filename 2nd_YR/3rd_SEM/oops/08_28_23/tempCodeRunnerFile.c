#include<stdio.h>
#include<string.h>

union std{
    int a;
    char b[60];
    double x;
};

int main(){
    union std s1;
    printf("%d",sizeof(s1));
}