#include<stdio.h>
int main()
{
    int count;
    printf("enter count:");
    scanf("%d",&count);
    printf("enter the values for array:");
    
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",arr[i]);
    }
    printf("hlo");
    for (int j = 0; j < (count/2); j++)
    {
        int z=count-1-j;
        if (arr[j]==arr[z])
        {
            printf("arr[%d] element %d = arr[%d] element %d",j,arr[j],z,arr[z]);
        } 
    }
}