#include<stdio.h>
int main(){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int nd=0;
    for(int i=1;i<=w;i++){
        nd = nd + i*k;
    }
    int b;
    b=nd-n;
    if(b>0){
        printf("%d",b);
    }
    else{
        printf("%d",0);
    }
}