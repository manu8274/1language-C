// #include<stdio.h>
// int main(){
//     int a1[3][4]={1,2,3,4,
//                   5,6,7,8,
//                   9,10,11,12};
//     int at[4][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             at[j][i]=a1[i][j];
//         }
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             printf("%d\t",at[i][j]);
//         }
//         printf("\n");
//     }
//}
#include<stdio.h>
int main(){
    int a1[3][4]={1,2,3,4,
                  5,6,7,8,
                  9,10,11,12};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a1[j][i]);
        }
        printf("\n");
    }
}