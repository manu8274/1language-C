#include<iostream>
using namespace std;

// int main(){
//     int n,m;
//     cout<<"array size";
//     cin>>n>>m;

//     int arr[n][m];

//     cout<<"enter the elements of array"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int sum=0,sum1=0,sum2=0;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i==j)    sum+=arr[i][j];
//             if(i+j==m-1)    sum2+=arr[i][j];
//             if(j==m-1)  sum1+=arr[i][j];
//         }
//     }
//     cout<<"the required simple diagonal sum is"<<sum<<endl;
//     cout<<"the required sum reverted diagonal is"<<sum2<<endl;
//     cout<<"the required sum last column is"<<sum1<<endl;
//     return 0;
// }

// int main(){
//     int n,m;
//     cout<<"enter the size of array";
//     cin>>n>>m;

//     int arr[n][m];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"simple array"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"-90 degree rotated array"<<endl;
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<n;j++){
//             cout<<arr[j][i];
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n,m;
//     cout<<"enter the size of array";
//     cin>>n>>m;

//     int arr[n][m];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"simple array"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"90 degree rotated array"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=n-1;j>=0;j--){
//             cout<<arr[j][i];
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n,m;
//     cout<<"enter the size of array";
//     cin>>n>>m;

//     int arr[n][m];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"simple array"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"transpose"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[j][i];
//         }
//         cout<<endl;
//     }
// }

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