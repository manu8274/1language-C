#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<t;i++){
        int d=a[i];
        int x=0,y=1,z=1;
        for(int j=0;j<=d;j++){
            x=y;y=z;z=x+y;
            if (d==x || d==0){
                printf("true\n");
                break;
            }
            if(j==d){
                printf("false\n");
            }
        }
    }
}
