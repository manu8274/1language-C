#include<Stdio.h>
int main(){
    int r,c;
    printf("enter the val of row and col:");
    scanf("%d %d",&r,&c);

    int a[r][c];
    printf("enter the val of array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        int x,y;
        x=a[i][0];y=a[i][1];
        for(int j=2;j<c;j++){
            a[i][j-2]=a[i][j];
        }
        a[i][c-2]=x;a[i][c-1]=y;
    }

    printf("new array:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}