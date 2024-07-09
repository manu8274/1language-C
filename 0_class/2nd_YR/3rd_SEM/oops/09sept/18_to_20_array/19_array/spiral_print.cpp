#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"enter the size of array";
    cin>>row>>col;

    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"simple array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    int left=0,right=col-1,top=0,bottom=row-1;
    cout<<"spiral rotated array"<<endl;
    //for i=left to i<=right then increament top++ as it is common arr[top][i]
    // for i=top  to bottom then right-- as right is common arr[i][right]
    // for i=right to left then bottom-- as it is common arr[bottom][i]
    //for i bottom to top then left-- as left is common arr[left][i]

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<"\t";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<"\t";
        }
        right--;
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<"\t";
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<"\t";
        }
        left++;
    }
}