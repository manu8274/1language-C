#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//////////////backtracking steps means that when coming back from last recursion to the our first calling function is called backtracking:::::::::::::::::

/////////////classical problem ::: N-QUEEN , SUDOKU , PHONE KEYPAD , RAT IN MAZE , KNIGHT'S TOUR
/////////////CATOGARIES ::: DECISION PROBLEM , ENUMERATION PROBLEM , OPTIMISATION PROBLEM
////////////eg we can make a n-quuen problem as all three catogaries
////////////how to identify which type of problem is it 
////////////decisive problem (result are TRUEOF FALSE) to find whether we can do it or not ,,,, first we have to find all constrints
////////////optimisation problem we have to find min value cost to find we can go from 1 to 2nd point
////////////enumeration problem we have to find number of ways to find we can go from 1 to 2nd point

//Q1)make an array with some length , start from start and place a var value at start and then make a recursive function to fill the array when we reach base and then we print the array.print another array whose elements are all negative of the previous array elements

// void print(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void fill(int *arr,int n,int i,int val){
//     if(i==n){//base case
//         print(arr,n);
//         return ;
//     }
//     arr[i]=val;
//     //recursive call
//     fill(arr,n,i+1,val+1);
//     //backtrack call
//     arr[i]=-arr[i];
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     fill(arr,n,0,11);
//     print(arr,n);
//     return 0;
// }

//////////////////////when paasing stl container we have to use container
// void print(vector<int> arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void fill(vector<int> &arr,int n,int i,int val){
//     if(i==n){//base case
//         cout<<"base case"<<endl;
//         print(arr,n);
//         return ;
//     }
//     arr[i]=val;
//     //recursive call
//     fill(arr,n,i+1,val+1);
//     //backtrack call
//     arr[i]=-arr[i];
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n,0);
//     fill(arr,n,0,11);
//     print(arr,n);
//     return 0;
// }


void print(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> fill(vector<int> arr,int n,int i,int val){
    if(i==n){//base case
        print(arr,n);
        return arr;
    }
    arr[i]=val;
    //recursive call
    vector<int> ar=fill(arr,n,i+1,val+1);
    //backtrack call
    ar[i]=-ar[i];
    return ar;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    vector<int>v=fill(arr,n,0,11);
    print(v,n);
    return 0;
}