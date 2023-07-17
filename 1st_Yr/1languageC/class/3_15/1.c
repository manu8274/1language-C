#include<stdio.h>
/*int main(){
    int arr[12]={[0]=1,[5]=2,[9]=3};
    for (int i = 0; i <10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("enter the cahnge in array at position %d",i);
        scanf("%d",&arr[i]);
    }
    printf("new array is:");
    for (int i = 0; i <10; i++)
    {
        printf("%d ",arr[i]);
    }       
}*/
int main(){
    int arr[5]={1,2,3,4,5};
    arr[2]=10;
    printf("%d",arr[2]);
}