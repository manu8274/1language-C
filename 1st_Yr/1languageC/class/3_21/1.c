#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter the vals:");
    scanf("%d %d",&n1,&n2);

    for(int i=n1;i<n2;i++){
        for(int j=1;j<i;j++){
            if (j*j == i){
                printf("%d ",i);
            }
        }
    }
}