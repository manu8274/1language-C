#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=0;i<n;i++){
        int p,q;
        scanf("%d %d",&p,&q);   
        if(q>p+1)   c++;
    }
    printf("%d",c);
}