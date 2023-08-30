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
            int w=0;
            for (int y=0;y<n+1;y++){
                int m=0;
                for(m=0;m<n;m++){
                    if(arr[m]==y){
                        break;
                    }
                }
                if(m==n){
                    w=arr[0];
                    arr[0]=y;
                    break;
                }
            }
            int q;
            for (int o=1;o<n;o++){
                q=arr[o];
                arr[o]=w;
                w=q;
            }
        }
        for (int p=0;p<n;p++){
            printf("%d ",arr[p]);
        }
        printf("\n");
    }
}