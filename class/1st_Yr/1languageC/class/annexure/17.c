#include<stdio.h>
// using call by value
/*int swapv(int x,int y){
    int t;
    t=x;
    x=y;y=t;
    printf("%d %d",x,y);
}
int main(){
    int a=10,b=20;
    swapv(a,b);
    return 0;
}*/
//using call by reference
int swapv(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int a=10,b=20;
    swapv(&a,&b);
    printf("%d %d",a,b);
    return 0;
}