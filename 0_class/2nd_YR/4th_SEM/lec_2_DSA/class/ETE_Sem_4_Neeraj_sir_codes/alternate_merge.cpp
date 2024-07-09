#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);
    for(int i=0;i<n;i++) cin >> arr1[i];
    for(int i=0;i<m;i++) cin >> arr2[i];
    vector<int>ans;
    int i=0,j=0;
    while(i<n && j<m){
        ans.push_back(arr1[i]);
        i++;
        ans.push_back(arr2[j]);
        j++;
    }
    while(i<n){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }
    for(int i=0;i<ans.size();i++) cout << ans[i]<< " ";
    cout << endl;
}