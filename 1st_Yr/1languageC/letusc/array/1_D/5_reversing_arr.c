#include<stdio.h>
//to copy the reverse of an arr
int main(){
    int size;
    printf("enter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter value for array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr_rev[size],j=0;
    for (int i = size -1; i >=0; i--){
        arr_rev[j]=arr[i];
        j++;
    }
    printf("reversed array is:");
    for (int i = 0; i < size; i++){
        printf("%d ",arr_rev[i]);
    }  
}