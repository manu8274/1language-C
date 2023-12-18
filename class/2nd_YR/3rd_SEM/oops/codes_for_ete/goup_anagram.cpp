#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<string> v;
//     for(int i=0;i<n;i++){
//         string c;
//         cin>> c;
//         v.push_back(c);
//     }
//     vector<vector<string>> ans;
//     for(int i=0;i<n;i++){
//         if(v[i]=="0")    continue;
//         else{
//             string c=v[i];
//             vector<string> v1;
//             v1.push_back(c);
//             sort(c.begin(),c.end());
//             for(int j=i+1;j<n;j++){
//                 string x=v[j];
//                 sort(x.begin(),x.end());
//                 if(x==c){
//                     v1.push_back(v[j]);
//                     v[j]="0";
//                 }
//             }
//             ans.push_back(v1);
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<"\t";
//     }
// }

int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string c;
        cin>> c;
        v.push_back(c);
    }
    vector<string> sorted;
    for(int i=0;i<n;i++){
        string x;
        x=v[i];
        sort(x.begin(),x.end());
        sorted.push_back(x);
    }
    vector<vector<string>> ans;
    for (int i = 0; i < sorted.size(); i++)
    {
        if(sorted[i]!="0"){
            vector <string> s;
            s.push_back(v[i]);
            for(int j=i+1;j<n;j++){
                if(sorted[i]==sorted[j]){
                    s.push_back(v[j]);
                    sorted[j]="0";
                }
            }
            ans.push_back(s);
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\t";
    }
    
}