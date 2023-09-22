#include<iostream>
using namespace  std;

int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"before change:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"changed array:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}