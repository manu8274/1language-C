#include<stdio.h>
int main(){
    int n;
    printf("enter:");
    scanf("%d",&n);

    float sum=0;
    for(float i=1;i<n+1;i++){
        int x=i;
        if (x%2==0){
            sum = sum - (1/i);
        }
        else{
            sum = sum + (1/i);
        }
    }
    printf("%f",sum);
}