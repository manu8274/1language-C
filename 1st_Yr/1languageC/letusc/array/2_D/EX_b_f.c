#include<stdio.h>
int main(){
    int r,c;
    printf("enter row and columns:");
    scanf("%d %d",&r,&c);

    printf("enter the values of 1st matrix:");
    int a1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("enter the values of 2nd matrix:");
    int a2[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    int a3[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a3[i][j]=a1[i][j]+a2[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",a3[i][j]);
        }
        printf("\n");
    }

}