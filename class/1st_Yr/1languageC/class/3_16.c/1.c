#include<stdio.h>
int main(){
    int a[9]={10,20,30,40,50,60,70,80,90};
    int i;
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for (int i = 8; i >=0; i--)
    {
        printf("%d ",a[i]);
    }
        
}