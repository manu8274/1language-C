#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int sum=0;
        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
            sum=sum+arr[j];
        }
        printf("%d",sum-n);
    }
}
