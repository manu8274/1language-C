#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i ,*p;
    printf("Enter number of elements:");
    scanf("d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p == NULL)
    {
    printf("memory cannot be allocated n");
    }
    else{   printf("%d",&p);}
}