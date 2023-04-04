#include<stdio.h>
int main()
{
    int size;
    printf("enter size of array:");
    scanf("%d",&size);

    int arr[size];
    printf("enter element for array:");
    for (int  i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    printf("before insertion sort array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    } 
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            if (arr[i]>arr[j]){
                int t;
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
            
        }   
    }
    printf("\nafter insertion sort array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    } 
}