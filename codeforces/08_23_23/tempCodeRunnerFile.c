#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        for( int j=0;j<n;j++){
            if(arr[j]%x==0){
                for(int k=0;k<x;k++){
                    n++;
                    arr[n-1]=arr[i]/x;
                }
            }
            else{
                break;
            }
        }
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[j];
        }
        printf("%d\n",sum);
    }
}