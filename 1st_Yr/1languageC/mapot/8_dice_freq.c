//dice freq
#include<stdio.h>
int main(){
    int n;
    printf("enter :");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int x=0,j;
    int arr2[x];
    for(int i=0;i<n;i++){
        for(j=0;j<x;j++){
            if (arr1[i]==arr2[j]){
                break;
            }
        }
        if (j==x){
            arr2[j]=arr1[i];
            x++;
        }
    }

    for(int i=0;i<x;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr2[i]==arr1[j]){
                count++;
            }
        }
        printf("%d:%d\n",arr2[i],count);
    }
}