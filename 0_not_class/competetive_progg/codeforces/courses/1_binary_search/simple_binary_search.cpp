#include<iostream>
#include<bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std;

void bs(vector<int>arr,int c,int n){
    int s=0;
    int e=n-1;
    int mid;
    int fin=0;
    while(s<=e){
        mid=(s+e)/2;
        if(c==arr[mid]){
            fin=1;
            break;
        }
        else if(c>arr[mid]){
            s=mid+1;
        }
        else if(c<arr[mid]){
            e=mid-1;
        }
    }
    if(fin==1)  cout<<"YES\n";
    else    cout<<"NO\n";
}


int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }
    auto beg = high_resolution_clock::now();
    for(int i=0;i<k;i++){
        int c;
        cin>>c;
        bs(arr,c,arr.size());
    //     int s=0;
    //     int e=n-1;
    //     int mid;
    //     int fin=0;
    //     while(s<=e){
    //         mid=(s+e)/2;
    //         if(c==arr[mid]){
    //             fin=1;
    //             break;
    //         }
    //         else if(c>arr[mid]){
    //             s=mid+1;
    //         }
    //         else if(c<arr[mid]){
    //             e=mid-1;
    //         }
    //     }
    //     if(fin==1)  cout<<"YES\n";
    //     else
    //     {
    //         cout<<"NO\n";
    //     }
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - beg);
    cout << "Elapsed Time: " << duration.count();
}//6645069
///6300460