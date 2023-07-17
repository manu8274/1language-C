//class topper and loser
// eg 3 6 11 5 7 ans=7(2nd max) -5(2nd min) =2 
#include<stdio.h>
int main(){
    int n;
    printf("enter :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if (arr[i]>arr[j]){
                int t;
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
            
        }   
    }
    int min,max;
    min=arr[1];
    max=arr[n-2];
    printf("%d",max-min);
}