#include<stdio.h>

void test(){
    return;
}
int main()
{
    int a=5;
    printf("address of var:%d\n",&a);
    test();
    printf("address of test:%d\n",test);

}