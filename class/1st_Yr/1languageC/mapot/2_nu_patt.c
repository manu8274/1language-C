//number pattern
//      1
//     232
//    34543
//   4567654 
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int i=0;
    for(i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int j=0;
        for(j=0;j<n;j++){
            int k;
            for(k=0;k<n-j-1;k++){
                printf(" ");
            }
            for(k=n-1;k>=n-j-1;k--){
                printf("%d",n-k+j);
            }
            int p=1+j;
            for(k=n+j;k>n;k--){
                printf("%d",k-n+j);
            }
            printf("\n");
        }
    }
}