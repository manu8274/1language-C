#include<stdio.h>
int sod(int x){
    if(x>0){
        int t;
        t=x%10;
        return(t+sod(x/10));
    }
    else{   return 0;}
}
int main(){
    int x,z;
    printf("enter the val:");
    scanf("%d",&x);
    z=sod(x);
    printf("sum of digit of %d =%d",x,z);
}