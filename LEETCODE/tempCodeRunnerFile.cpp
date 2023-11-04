#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int r,c;
    cout<<"enter the values of r(rows),c(cols) : ";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    int top=0,bottom=r-1,left=0,right=c-1;

    cout<<"Simple print of array : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"spiral print of an array : "<<endl;
    if(right==0){
        for(int i=0;i<=bottom;i++){
            cout<<arr[i][left];
        }
    }
    else if(bottom==0){
        for(int i=0;i<=right;i++){
            cout<<arr[top][i];
        }
    }
    else{
        cout<<arr[top][left]<<" ";
        left++;
        while(top<=bottom and left<=right){
            while(left>=0 && top<=bottom && left<=right && top>=0){
                cout<<arr[top][left]<<" ";
                left--;
                top++;
            }
            left++;
            if(top>bottom){
                top--;
                left++;
            }
            while(top>=0 && top<=bottom && left<=right && left+1>=0){
                cout<<arr[top][left]<<" ";
                top--;
                left++;
            }
            top++;
            if(left>right){
                left--;
                top++;
            }
        }
    }
}