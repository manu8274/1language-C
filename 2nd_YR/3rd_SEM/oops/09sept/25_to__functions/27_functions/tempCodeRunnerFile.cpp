#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//pass by value and reference
// void inc(int arr[],int size){
//     for(int i=0;i<size;i++){
//         arr[i]++;//side effect due to pass by address/reference
//     }
// }

// void printarr(int arr[],int size){
//     cout<<"{";
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//         if(i<size-1){
//             cout<<",";
//         }
//     }
//     cout<<"}"<<endl;
// }
// int main(){
//     int a1[5]={1,2,3,4,5};
//     printarr(a1,5);
//     inc(a1,5);
//     printarr(a1,5);
// }

// int sqauarebyval(int n);//pass by val
// void squarebyref(int &n);//pass reference

// int sqauarebyval(int n){
//     return n*n;
// }
// void squarebyref(int &n){
//     n=n*n;
// }

// int main(){
//     int n1=8;
//     cout<<"before call by value "<<n1<<endl;
//     sqauarebyval(n1);
//     cout<<"after call by value "<<n1<<endl;
//     int n2=9;
//     cout<<"before call by reference "<<n2<<endl;
//     squarebyref(n2);
//     cout<<"before call by reference "<<n2<<endl;
// }

// int sumofrange(int mn,int mx){
//     if(mn>mx){
//         return 0;
//     }
//     else{
//         return mn+sumofrange(mn+1,mx);
//     }
// }

// int main(){
//     int mn,mx;
//     cin>>mn>>mx;
//     cout<<sumofrange(mn,mx);
// }

// bool isprime(int n){
//     int x=sqrt(n);
//     for(int i=2;i<=x;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     int x=isprime(n);
//     if(x)   cout<<"prime";
//     else    cout<<"not prime";
// }

int main(){
    string s;
    double i=0;
    cin>>s;
    int num=0;
    int j=s.size()-1;
    while(j>=0){
        if(s[j]=='1'){
            num+=pow(2,i);
            i++;
        }
        else{
            i++;
        }
        j--;
    }
    cout<<num;
}