#include<stdio.h>
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x1,x2,sum=n;
    for(int i=0;i<n/2;i++){
        if(n%i==0){
            int a1=i;
            int a2=n/i;
            if(sum<(a1+a2)){
                x1=a1;
                x2=a2;
                sum=a1+a2;
            }
        }
    }
    printf("%d,%d",x1,x2);
}