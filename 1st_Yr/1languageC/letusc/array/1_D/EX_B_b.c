#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("enter size:");
    scanf("%d",&size);

    printf("enter the values for array:");
    int arr[size],i;
    for (i = 0; i < size; i++)
    {    
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < (size/2); j++){
        int z=size-1-j;
        if (arr[j]==arr[z])
        {
            printf("arr[%d] element %d = arr[%d] element %d\n",j,arr[j],z,arr[z]);
        } 
    }
}