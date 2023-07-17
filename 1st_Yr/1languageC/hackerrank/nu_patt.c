#include<stdio.h>
int main(){
    int n;
    printf("enter num:");
    scanf("%d",&n);
    int len;
    len=2*n-1;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int min;
            min= i< j ? i:j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
}
/*#include <stdio.h>
int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}*/