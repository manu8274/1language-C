#include<stdio.h>
int main(){
    int n[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,*ptr;
    ptr=&n[0][0];
    for(int i=0;i<=8;i++){
        printf("%d\t",*(ptr+i));
    }   
}