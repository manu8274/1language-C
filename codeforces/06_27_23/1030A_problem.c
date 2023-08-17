#include<stdio.h>
int main(){
    int n;
    int t=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int d;
        scanf("%d",&d);
        if(d==1)    t=0;
    }
    if(t==0)   printf("HARD");
    else    printf("EASY");
}