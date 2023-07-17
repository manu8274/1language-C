#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int d=a[i];
        int revd=0;
        while (d>0){
            int x;
            x=d%10;
            revd=revd*10 +  x;
            d=d/10;
        }
        while (revd>0){
            printf("%d ",revd%10);
            revd=revd/10;
        }
    }
}