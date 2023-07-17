#include<Stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=4;i>=1;i--){
        arr[i]=arr[i-1];
        if (i==1)   arr[i]=10;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d  ",arr[i]);
    }
    
}