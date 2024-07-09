#include<iostream>
#include<string>
#include<math.h>
using namespace std;



// class g25{
//     public:
//         g25(int a){
//             int marks=a;
//         }
//         g25(const g25 *obj){//pass by reference ,  as int value has no ref so we use const 
//             return obj.marks;
//         }
// };

// int main(){
//     g25 st1(10);
//     // g25 st1=st2;//not allowed to do direct passing , so we have to make copy constructor 
//     // g25 st2(st1);//not allowed to do direct passing , so we have to make copy constructor

//     cout<<st1.x;
// }

// int main(){
//     // int *ptr=NULL;//null pointer
//     // int a=10;
//     // cout<<&a<<endl;
//     // cout<<"val of ptr "<<ptr<<endl;
//     // cout<<"val of *ptr"<<*ptr<<endl;


//     void *ptr=NULL;//void pointer , cannot print directly so to type cast as cout<<*ptr; does not work
//     int a=10;
//     float b=10.2;
//     ptr=&a;
//     cout<<"address of a "<<&a<<endl;
//     cout<<"val of ptr "<<ptr<<endl;
//     cout<<"val of *ptr "<<*((int*)ptr)<<endl;

//     ptr=&b;
//     cout<<"address of b "<<&b<<endl;
//     cout<<"val of ptr "<<ptr<<endl;
//     cout<<"val of *ptr "<<*((float*)ptr)<<endl;
// }


// int main(){
//     string str;
//     cout<<"enter the string : ";
//     cin>>str;
//     cout<<"enter our coice of left or right rotation : ";
//     string choice;
//     cin>>choice;
//     int s=str.size();
//     if(choice=="left"){
//         for(int i=1;i<s;i++){
//             cout<<str[i];
//         }
//         cout<<str[0];
//     }
//     else{
//         string temp;
//         cout<<str[s-1];
//         for(int i=0;i<s-1;i++){
//             cout<<str[i];
//         }
//     }
// }



int main(){
    int n;
    cout<<"enter size of arr : ";
    cin>>n;
    int arr[n][n];
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<"simple print "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<endl;
    int k=0;
    cout<<"required print : ";
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(j%2==0){
                cout<<arr[i][j]<<"\t";
                k+=1;
            }
            else{
                k-=1;
                cout<<arr[k][j]<<"\t";
            }
        }
    }
}