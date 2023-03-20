x#include<stdio.h>
int main(){
    int a1[3][3]={1,2,3,
                  4,5,6,
                  7,8,9};

    int a2[3][3]={1,2,3,
                  4,5,6,
                  7,8,9};
    int a3[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a3[i][j]=0;
            for(int k=0 ;k<3;k++){
                a3[i][j]+= a1[i][k] *  a2[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a3[i][j]);
        }
        printf("\n");
    }
}