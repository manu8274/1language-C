#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,c1,c2;
        scanf("%d",&n);
        c1=(n+1)/3;
        c2=n-2*c1;
        printf("%d %d\n",c2,c1);
    }
    return 0;
}