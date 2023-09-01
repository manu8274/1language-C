#include<stdio.h>
//to swap elements
int swap(int*a,int*b){
    int t=*a;
    *a=*b;
    *b=t;
}

//partition the element using last element as favourate
int part(int arr[],int l,int r){
    //to select favourate
    int fav=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        //if current element is smaller than fav
        if(arr[j]<fav){
            //increase  the index of smaller element
            i++;
            swap(&arr[i],&arr[j]);//to swap the element
        }
    }
    swap(&arr[i+1],&arr[r]);
    return (i+1);
}

void qs(int arr[],int l,int r){
    if(l<r){
        //to make pi as partioning index at right place
        int pi=part(arr[],l,r);
        //to perform quick sort for less than pi index;
        qs(arr[],l,pi-1);
        //to perform quick sort for greater than pi index;
        qs(arr[],pi+1,r);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qs(arr[],0,n-1);
    for (int i=0;i<n;i++){
        print("%d ",arr[i]);
    }
    return 0;
}