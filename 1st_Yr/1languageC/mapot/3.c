#include<stdio.h>
int main(){
    int n,j;
    scanf("%d %d",&n,&j);
    int arr[n][n];
    int i,k;
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            scanf("%d",&arr[i][k]);
        }
    }
    
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(k==j-i){
                printf("%d ",arr[i][k]);
            }
        }
    }
}