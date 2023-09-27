//shifting_2d_array_position_to_next_in_square_patt
#include<iostream>
using namespace  std;

int main(){
    int n,m;
    cout<<"enter the size of array";
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"original array:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    int left=0,right=m-1,top=0,bottom=n-1;

    while(left<=right && top<=bottom){
        int temp=arr[top][left];
        for(int i=left+1;i<=right;i++){
            int tem=arr[top][i];
            arr[top][i]=temp;
            temp=tem;
        }

        for(int i=top+1;i<=bottom;i++){
            int tem=arr[i][right];
            arr[i][right]=temp;
            temp=tem;
        }
        
        for(int i=right-1;i>=left;i--){
            int tem=arr[bottom][i];
            arr[bottom][i]=temp;
            temp=tem;
        }
        
        for(int i=bottom-1;i>=top;i--){
            int tem=arr[i][left];
            arr[i][left]=temp;
            temp=tem;
        }
            top++;left++;right--;bottom--;
    }
    cout<<endl;
    cout<<"required array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16