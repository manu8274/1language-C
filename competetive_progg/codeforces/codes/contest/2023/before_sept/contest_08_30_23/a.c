#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int g=0;g<n;g++){
            scanf("%d",&arr[g]);
        }
        for(int d=0;d<k;d++){
            for(int j=0;j<n;j++){
                for(int z=0;z<n+1;z++){
                    int u=1;
                    for (int l=0;l<n;l++){
                        if(arr[l]==z){
                            u=0;
                            break;
                        }
                    }
                    if(u){
                            arr[j]=z;
                            break;
                        }
                }
            }
        }
        for (int p=0;p<n;p++){
            printf("%d ",arr[p]);
        }
        printf("\n");
    }
}