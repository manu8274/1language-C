// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long int n,m;
//         cin>>n>>m;
        
//         long long int v[n];
        
//         long long int pro=1;

//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             pro=pro*v[i];
//         }
        
//         char s[n];
//         for(int i=0;i<n;i++){
//             cin>>s[i];
//         }

//         cout<<pro%m<<" ";
        
//         long long int l=0,r=n-1;
        
//         for(int i=0;i<n-1;i++){
//             if(s[i]=='L'){
//                 pro=pro/v[l];
//                 cout<<pro%m<<" ";
//                 l++;
//             }
//             else{
//                 pro=pro/v[r];
//                 r--;
//                 cout<<pro%m<<" ";
//             }
//         }

//         cout<<"\n";
//     }
// }


#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int l[n];
        int x = 1;
        for (int i = 0; i < n;i++) {
            cin>>l[i];
            l[i]=l[i]/m;
            x=x*l[i];
        }
        string s;
        cin >> s;
        cout << x%m << " ";
        int li = 0, ri = n - 1;
        for (int i = 0; i < n - 1; i++) {
            cout<<"hello"<<endl;
            if (s[i] == 'L') {
                x = (x / l[li]);
                li++;
            }
            if (s[i] == 'R') {
                x = (x / l[ri]);
                ri--;
            }
            cout << x%m << " ";
        }
        cout << endl;
        cout<<s;
    }
    return 0;
}
