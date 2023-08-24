#include<stdio.h>
union data
{
    int intval;
    float floatval;

};

int main(){
    union data data1;
    data1.intval=42;
    printf("int val %d\n",data1.intval);
    data1.floatval=19.4;
    printf("float val %d\n",data1.floatval);
}