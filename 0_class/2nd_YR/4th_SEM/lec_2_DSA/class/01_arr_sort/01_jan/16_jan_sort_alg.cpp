#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//bubble sort time , keyword==pass,iteration,times ::::::::::::::::::::
//for passes we use a[i]<a[j] the we swap a[i] and a[j]
//if more number are adding then not efficient
void bubblesort(int *arr,int n){
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)  break;
    }
}

int main(){
    int arr[]={1,5,4,3,2};
    int n=5;
    int i=0;
    bubblesort(arr,5);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// insertion sort :::::::::::::::::::::::::::::::::::
//we can dynamically sort array even after adding element dynamically
//one var current = element to be placed cur=arr[i] which is to placed as we have to use curr at end
//we shift array of previous to next until we get cur<prev and the we place curr

// void insertion(){}

// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=5;
//     int i=0;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }