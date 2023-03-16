#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};int y;
printf("enter value to be inserted:"); //to insert
scanf("%d",&y);
for (int i = 0; i < 6; i++){    if (i==5)   arr[i]=y;}
arr[1]=100;//to update
int pos;
printf("enter the position of element to be deleted:");//to delete
scanf("%d",&pos);
for(int i=pos;i<5;i++){    arr[i]=arr[i+1];}
int x;
printf("enter value to be searched:");scanf("%d",&x);
for (int i = 0; i < 5; i++){    if (arr[i]==x)    printf("position in array %d\n",i);} //to search
printf("after all changes:");
for (int i = 0; i < 5; i++){    printf("%d ",arr[i]);} //to display
}