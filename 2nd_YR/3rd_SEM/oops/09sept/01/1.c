#include<stdio.h>
void A(){
    printf("value of");
}
void B(void(*q())){
    //to make a function pointer of function A
    q();
}
int main(){
    void (*p)()=A;
    B(p);
}