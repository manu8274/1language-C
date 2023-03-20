#include<stdio.h>
int fact=1;
int facto(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return (x*facto(x-1));   
    }
}
int main(){
    int x;
    x=facto(5);
    printf("%d",x);
}