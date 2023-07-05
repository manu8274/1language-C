#include<stdio.h>
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){    sum=sum+arr[i];}
    printf("sum of array = %d",sum);}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    sum(arr,10);}