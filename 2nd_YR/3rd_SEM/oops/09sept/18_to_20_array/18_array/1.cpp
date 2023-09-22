#include<iostream>
using namespace std;

// int main(){
//     int marks[4] = {23,45,56,89};
//     int marks_in_eng[6];
//     marks_in_eng[0]=35;
//     marks_in_eng[1]=76;
//     marks_in_eng[2]=67;
//     marks_in_eng[3]=89;
//     marks_in_eng[4]=45;
//     marks_in_eng[5]=78;
    
//     cout<<marks_in_eng[0]<<endl;
//     cout<<marks_in_eng[1]<<endl;
//     cout<<marks[0]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;

//     for(int i=0;i<4;i++){
//         cout<<"the value of marks are = "<<marks[i]<<endl;
//     }
//     return 0;
// }

// int main(){

//     cout<<"enter size of m,n";
//     int x,y;
//     cin>>x;
//     cin>>y;

//     int arr[x][y];

    // for(int i=0;i<x;i++){
    //     for(int j=0;j<y;j++){
    //         cin>>arr[i][j];
    //     }
    // }

//     for(int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             cout<<arr[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
// }

// int main(){

//     cout<<"enter size of m,n";
//     int x,y;
//     cin>>x;
//     cin>>y;

//     int arr[x][y];

//     for(int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             cin>>arr[i][j];
//         }
//     }

//     int element,flag=1;
//     cout<<"enter the element to be searched";
//     cin>>element;
//     for(int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             if(arr[i][j]==element){
//                 cout<<"element is present at "<<i<<" "<<j;
//                 flag=0;
//                 break;
//             }
//         }
//     }
//     if(flag==1){
//         cout<<"not found";
//     }
// }

// int main(){
//     int arr[10][11];
//     for(int i=0;i<10;i++){
//         for(int j=0;j<=10;j++){
//             cout<<i*10 +j<<"\t";
//         }
//         cout<<endl;
//     }
// }

int main(){
    int n,m;
    cout<<"enter the value of m,n";
    cin>>m>>n;
    int arr[m][n];
    bool seen[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            seen[i][j]=false;
        }
    }
    int spiral[m][n];
    cout<<"spiral print of array";

    int x=0,y=0,di=0;
    int dr[]={0,1,0},dc[]={0,-1,0};
    for (int i=0;i<m*n;i++){
        cout<<arr[x][y]<<"\t";
        seen[x][y]=true;
        int newx=x+dr[di];
        int newy=y+dc[di];

        if(0<=newx && newx<m && 0<=newy && newy<n && !seen[newx][newy]){
            x=newx;
            y=newy;
        }
        else{
            di=(di+1)%m;
            x+= dr[di];
            y+=dc[di];
        }
    }
}