#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    arr[3]=10;
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}