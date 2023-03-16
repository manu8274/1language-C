#include<stdio.h>
int *fun(int*num);
int main()
{
    int max,*p,i;
    p=fun(&max);
   
}

int *fun(int*num){
    static int arr[]={10,20,30,40,50};
    *num=sizeof(arr)/sizeof(arr[0]);
    printf("%d %d",sizeof(arr),sizeof(arr[0]));
}