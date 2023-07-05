#include<stdio.h>
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
    printf("enter the number:");
    scanf("%d",&x);
    int z=facto(x);
    printf("%d",z);
}