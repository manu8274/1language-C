#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            printf("%d",i+1);
            break;
        }
        if(i==n-2){
            printf("%d",0);
        }
    }
}