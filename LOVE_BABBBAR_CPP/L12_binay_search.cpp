#include<iostream>
using namespace std;

int search(int a[],int n,int ele){
    
    int start=0,end=n-1,mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==ele){
            return mid;
        }
        else if(a[mid]>ele){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start + end )/2;
        mid=start + (end-start)/2; //another way to set mid
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    cout<<"ENTER THE SORTED ARRAY : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cout<<endl<<"ENTER THE ELE TO BE SEARCHED: ";
    cin>>ele;
    int in;
    in=search(arr,n,ele);
    cout<<"THE "<<ele<<" IS AT "<<in<<" INDEX."<<endl;
    return 0;
}