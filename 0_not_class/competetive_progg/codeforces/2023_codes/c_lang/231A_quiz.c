#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            int a;
            scanf("%d",&a);
            sum=sum+a;
        }
        if(sum>=2)  c++;
    }
    printf("%d",c);
}