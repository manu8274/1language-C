#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;

// int main(){
//     string ch,ch2;
//     cout<<"enter the first string : ";
//     getline(cin,ch);
//     cout<<"enter the second string : ";
//     getline(cin,ch2);

//     for(int i=0;i<ch2.size();i++){
//         for(int j=0;j<ch.size();j++){
//             if(ch[j]==ch2[i]){
//                 ch.erase(j,1);
//             }
//             else{
//                 continue;
//             }
//         }
//     }
//     cout<<ch;
// }

// int main(){
//     string str1;
//     cout<<"enter the str1 : ";
//     getline(cin,str1);
//     string str2;
//     cout<<"enter str2 : ";
//     getline(cin,str2);
//     string str3="";
//     for(int i=0;i<str1.size();i++){
//         int j=0;
//         for(j=0;j<str2.size();j++){
//             if(str1[i]==str2[j])    break;
//         }
//         if(j==str2.size())  str3+=str1[i];
//     }
//     cout<<str3;
// }

// #include<iostream>
// #include<algorithm>
// #include<stdlib.h>
// using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int l=0;
  int arr1[l+1];
  for(int i=0;i<n;i++){
    string s = to_string(arr[i]);
    for(int j=0;j<s.size();j++){
      arr1[l++]=s[j]-'0';
    }
  }

  for(int i=0;i<l;i++){
    cout<<arr1[i]<<"\t";
  }
}