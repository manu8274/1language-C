#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for( int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int x=n;
        for(int j=n-1;j>=0;j--){
            x= x & j;
            if(x==0){
                printf("%d\n",j);
                break;
            }
        }
    }
}