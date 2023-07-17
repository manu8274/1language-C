#include<stdio.h>
int main(){
    int size;
    printf("enter the size:");
    scanf("%d",&size);

    int arr[size];
    printf("enter the values for array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }  
    int pos=0,neg=0,even=0,odd=0;
    for (int i = 0; i <size; i++)
    {
        if (arr[i]>0)
        {
            pos++;
        }
        if (arr[i]<0)
        {
            neg++;
        }
        if (arr[i]%2==0)
        {
            even++;
        }
        if (arr[i]%2!=0)
        {
            odd++;
        }
    }
    printf("even no. %d\nodd no. %d\npositive no. %d\n negative no. %d",even,odd,pos,neg);
}