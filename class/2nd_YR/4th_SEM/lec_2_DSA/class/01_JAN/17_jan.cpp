#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// insertion sort :::::::::::::::::::::::::::::::::::
//we can dynamically sort array even after adding element dynamically
// //one var current = element to be placed cur=arr[i] which is to placed as we have to use curr at end
// //we shift array of previous to next until we get cur<prev and the we place curr

// void insertion(){}

// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=5;
//     int i=0;
    
// }



///SELECTION SORT :::::::::::::::::::::::::::;
///we have to use i loop for selecting a lenement for comparing it with j(i+1 to n) for min and then replace

void selection(int *arr,int n){
    for (int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])   min=j;
        }
        swap(arr[i],arr[min]);
    }
}

void display(int * arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    display(arr,n);
}