#include<stdio.h>
int main(){
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the values in array:");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int num;
    printf("enter the number whose frequency you want to find out:");
    scanf("%d",&num);
    int freq=0;
    for (int i = 0; i <size; i++)
    {
        if (num==arr[i])
        {
            freq+=1;
        }
    }
    printf("Number %d occurrs %d times.",num,freq);
}