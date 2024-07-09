#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int c=0;
    int pos=0;
    for (int i=0;i<n;i++){
        int d;
        scanf("%d",&d);
        if(d!=0){
            arr[i]=d;
            pos++;
        }
        else{
            c++;
        }
    }
    for (int i=0;i<c;i++){
        arr[pos]=0;
        pos++;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}