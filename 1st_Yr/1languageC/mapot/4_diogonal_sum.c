//dio sum
#include<stdio.h>
int main(){
    int j,i,n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        int sum=0;
        for(j=0;j<n;j++){
            sum+=arr[j][i];
        }
        printf("%d ",sum);
    }
}