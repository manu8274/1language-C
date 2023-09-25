#include<iostream>
using namespace std;

//find min and max
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int min=INT32_MAX,max=INT32_MIN;

//     for(int i=0;i<n;i++){
//         if(arr[i]>max)  max=arr[i];
//         if(arr[i]<min)  min=arr[i];
//     }
//     cout<<"MIN AND MAX ELEMENT ARE ::"<<min<<"\t"<<max;
// }

//sum of array
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<"SUM OF ARRAY = "<<sum;
// }

//linear search
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int num;
//     cout<<"enter the number";
//     cin>>num;
//     bool bool1=false;
//     for(int i=0;i<n;i++){
//         if(arr[i]==num){
//             cout<<"YES IT IS PREENT AT "<<i<<" index."<<endl;
//             bool1=true;
//         }
//     }
//     if(!bool1){
//         cout<<num<<" ELEMENT IS NOT PRESENT IN ARRAY"<<endl;
//     }
// }

//reverse arrayy
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n/2;i++){
//         int temp=arr[i];
//         arr[i]=arr[n-1-i];
//         arr[n-i-1]=temp;
//     }
    // cout<<endl<<"NEW ARRAY IS "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"\t";
    // }
// }

//reverse array
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int start=0,end=n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
    
//     cout<<endl<<"NEW ARRAY IS "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\t";
//     }
// }

// pair swap
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int start=0,end=n-1;
//     while(start<end){
//         swap(arr[start],arr[start+1]);
//         start++;
//         start++;
//     }
    
//     cout<<endl<<"NEW ARRAY IS "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\t";
//     }
// }

//find unique
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ar[n],k=0;
//     for(int i=0;i<n;i++){
//         bool bol=true;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j] && i!=j){
//                 bol=false;
//                 break;
//             }
//         }
//         if(bol) ar[k++]=arr[i];
//     }
//     if(k>0){ 
//         cout<<endl<<"UNIQUE ELEMENNTS ARE : "<<endl;   
//         for(int l=0;l<k;l++){
//             cout<<ar[l]<<"\t";
//         }
//     }
//     else{
//         cout<<"NO UNIQUE ELEMENT"<<endl;
//     }
// }

//find duplicate
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ar[n],k=0;
//     for(int i=0;i<n;i++){
//         bool bol=false;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j] && i!=j){
//                 bol=true;
//                 break;
//             }
//         }
//         if(bol){
//             bool flag=true;
//             for(int u=0;u<k;u++){
//                 if(ar[u]==arr[i]){
//                     flag=false;
//                     break;
//                 }
//             }
//             if(flag)    ar[k++]=arr[i];
//         }
//     }
//     if(k>0){ 
//         cout<<endl<<"DUPLICATE ELEMENNTS ARE : "<<endl;   
//         for(int l=0;l<k;l++){
//             cout<<ar[l]<<"\t";
//         }
//     }
//     else{
//         cout<<"NO DUPLICATE ELEMENT"<<endl;
//     }
// }


//intersection
// int main(){
//     int n;
//     cin>>n;
//     int arr1[n],arr2[n];
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<"\t";
//                 break;
//             }
//         }
//     }
// }

//pair sum
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<endl<<"pairwise sum are : "<<endl;
//     for(int i=0;i<n-1;i++){
//         cout<<arr[i]+arr[i+1]<<"\t";
//     }
// }

//triplet sum
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<endl<<"pairwise sum are : "<<endl;
//     for(int i=0;i<n-2;i++){
//         cout<<arr[i]+arr[i+1]+arr[i+2]<<"\t";
//     }
// }

//sort 0 and 1
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int zero=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             swap(arr[i],arr[zero++]);
//         }
//     }
//     cout<<endl<<"sorted array is : "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\t";
//     }
// }

//sort 1 and 0 in reverse
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int one=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            swap(arr[i],arr[one++]);
        }
    }
    cout<<endl<<"sorted array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}