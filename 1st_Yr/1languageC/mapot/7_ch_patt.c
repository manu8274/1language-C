// pattern character for D
// A
// BB
// CCC
// DDDD
#include<stdio.h>
int main(){
    char x;
    printf("hello:");
    scanf("%c",&x);
    for(char i='A';i<=x;i++){
        for(char j='A';j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }
}
