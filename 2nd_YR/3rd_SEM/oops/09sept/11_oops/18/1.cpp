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

//     for(int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             cout<<arr[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
// }

int main(){

    cout<<"enter size of m,n";
    int x,y;
    cin>>x;
    cin>>y;

    int arr[x][y];

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }

    int element,flag=1;
    cout<<"enter the element to be searched";
    cin>>element;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(arr[i][j]==element){
                cout<<"element is present at "<<i<<" "<<j;
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"not found";
    }
}