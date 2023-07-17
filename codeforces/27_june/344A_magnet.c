#include<stdio.h>
int main(){
    int n;
    int a=0;
    int c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int d;
        scanf("%d",&d);
        if(a!=d)    c++;
        a=d;
    }
    printf("%d",c);
}