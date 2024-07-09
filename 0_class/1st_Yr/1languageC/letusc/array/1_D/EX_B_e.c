#include<stdio.h>

int modify(int arr[], int *a){
    for (int i = 0; i < *a; i++)
    {
        arr[i]*=3;
    }
}

int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d",&size);

    int arr[size];
    printf("enter the elements of array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    modify(arr,&size);
    printf("\nnew array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }   
}