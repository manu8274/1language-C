#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string h;
//     getline(cin,h);
//     cout<<h;
// }


//sorted  pair sum get a sorte array and fin sum nearest to given int

// pair<int, int> closestSum(vector<int> arr, int x){ 
//     int res_l, res_r;   
//     int n = arr.size(); 
//     int l = 0, r = n-1, diff = INT_MAX; 
//     while (r > l) 
//     { 
//        if (abs(arr[l] + arr[r] - x) < diff) 
//        { 
//            res_l = l; 
//            res_r = r; 
//            diff = abs(arr[l] + arr[r] - x); 
//        } 
//        if (arr[l] + arr[r] > x) 
//            r--; 
//        else  
//            l++; 
//     } 
//     return {arr[res_l], arr[res_r]}; 
// }

// int main(){
//     int n=6;
//     // cin>>n;
//     vector<int> arr={1,2,3,4,5,6,7};
//     // for(int i=0;i<n;i,++){
//     //     int c;
//     //     cin>>c;
//     //     arr.push_back(c);
//     // }
//     int val=40;
//     // cin>>val;

//     pair<int,int>a;
//     a=closestSum(arr,val);
//     cout<<a.first<<" "<<a.second;
// }

// Given N sticks and an array length where each length[i] represents length of each stick. Your task is to make maximum number of pairs of these sticks such that the difference between the length of two sticks is at most D. A stick can't be part of more than one pair of sticks. 
// Input Format 
// In the function an integer vector length and number D is passed. 
// Output Format 
// Return an integer representing total number of such pairs. 

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    
}