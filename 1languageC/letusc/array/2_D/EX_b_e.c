#include<stdio.h>
int main(){
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int a[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("enter value:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("given matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int at[size][size];
    for(int j=0;j<size;j++){
        for(int i=0;i<size;i++){
            at[i][j]=a[j][i];
        }
    }
    printf("transpose of given matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d\t",at[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if (a[i][j]!=at[i][j]){
                printf("not symmetric");
                return 0;
            }
            
        }
    }
    printf("symmetric");
}