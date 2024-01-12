#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//subarray and subsequence
//subarray ie to make a contigious array
//subsequence not necessorily contigious

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<<"\n";
    //     }
    // }
// }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=INT_MIN;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxsum=fmax(maxsum,sum);
        }
    }
    cout<<maxsum;
}