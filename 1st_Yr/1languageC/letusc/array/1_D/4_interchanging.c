#include<stdio.h>
/*interchange adjacent element of an array*/
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);

    int arr[size];
    printf("enter the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int t;
    for (int j=0;j<=size-1;j+=2){
        t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
    }

    printf("after interchanging:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}