#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> arr={0,1,2,3,4,5,6,7,8};
//     sort(arr.begin(),arr.end());
//     vector<vector<int>>ans(14);
//     for(int i=0;i<arr.size();i++){
//         int c=0;
//         int temp=arr[i];
//         while(temp>0){
//             if(temp%2!=0)   c++;
//             temp=temp/2;
//         }
//         ans[c].push_back(arr[i]);
//     }
//     for (int i=0;i<ans.size();i++){
//         sort(ans[i].begin(),ans[i].end());
//     }
//     vector<int>res;
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             res.push_back(ans[i][j]);
//         }
//     }
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<"\t";
//     }
// }

int main() {
    int number = 42; // Your integer number
    bitset<sizeof(int) * 8> binary(number);

    cout << "Binary representation of " << number << " is: " << binary << std::endl;
    string ans=binary.to_string();
    cout<<count(ans.begin(),ans.end(),'1'); 
    return 0;
}