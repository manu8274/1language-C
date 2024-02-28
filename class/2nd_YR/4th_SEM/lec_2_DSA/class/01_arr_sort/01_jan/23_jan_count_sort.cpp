#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//find largest element from given arr then make an array for max(arr)+1 with initial val as 0 then make 1 for the element in given arr
//then do commlulative sum then using given arr element decrease the val in commulative sum and then if the value in new arr is 0 then put the valse


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int max=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         max=fmax(max,arr[i]);
//     }
//     int arr1[max+1]={0};
//     for(int i=0;i<n;i++){
//         arr1[arr[i]]+=1;
//     }
//     int s=0;
//     for(int i=0;i<max+1;i++){
//         s+=arr1[i];
//         arr1[i]=s;
//     }
//     int sortedarr[n]={0};
//     for(int i=0;i<n;i++){
//         arr1[arr[i]]-=1;
//         sortedarr[arr1[arr[i]]]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<sortedarr[i]<<" ";
//     }
// }

// void bubblesortinc(int *arr,int n){
//     for(int i=1;i<n;i++){
//         bool swapped=false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false)  break;
//     }
// }


// void bubblesortdec(int *arr,int n){
//     for(int i=1;i<n;i++){
//         bool swapped=false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false)  break;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int flag;
//     cin>>flag;

//     if(flag==1) bubblesortinc(arr,n);
//     else    bubblesortdec(arr,n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Q2

void bubblesortinc(int *arr,int n){
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;

    int c=0;
    bubblesortinc(arr,n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                break;
            }
            if(arr[j]==arr[i+d]){
                c+=1;
            }
        }
    }
    cout<<c<<" ";
}