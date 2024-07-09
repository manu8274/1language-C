#include<stdio.h>
int smll(int arr[],int *a){
    int size;
    for (int i = 0; i < *a; i++)
    {
        if (size>=arr[i])
        {
            size=arr[i];
        }
    }
    return size;    
}
int main(){
    int size;
    printf("enter the size of arr:");
    scanf("%d",&size);

    int arr[size];
    printf("enter array values:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int smlst;
    smlst=smll(arr,&size);
    printf("smallest is =%d",smlst);
}