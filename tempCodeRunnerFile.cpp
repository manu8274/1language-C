#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int arr1[5]=arr[:5];
    for (int i=0;i<5;i++){
        cout<<arr1[i];
    }
}