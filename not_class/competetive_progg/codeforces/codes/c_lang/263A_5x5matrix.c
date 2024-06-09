#include<stdio.h>
#include<string.h>

int main(){
    int n[5][5];
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&n[i][j]);
            if(n[i][j]==1){
                a=i+1;
                b=j+1;
            }
        }
    }
    int op;
    if(a>3){
        a=a-3;
    }
    else{
        a=3-a;
    }
    if(b>3){
        b=b-3;
    }
    else{
        b=3-b;
    }
    op=a+b;
    printf("%d",op);
}