// #include <iostream>
// #include <string>
// int main() {
//   std::string str1 = "apple";
//   std::string str2 = "banana";
//   int result = str1.compare(str2);
//   if (result == 0) {
//     std::cout << "The strings are equal." << std::endl;
//   } else if (result < 0) {
//     std::cout << "The string str1 is less than str2." << result << std::endl;
//   } else {
//     std::cout << "The string str1 is greater than str2." << result << std::endl;
//   }
//   return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<stdlib.h>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   int l=0;
//   int arr1[l+1];
//   for(int i=0;i<n;i++){
//     string s = to_string(arr[i]);
//     for(int j=0;j<s.size();j++){
//       arr1[l++]=s[j]-'0';
//     }
//   }

//   for(int i=0;i<l;i++){
//     cout<<arr1[i]<<"\t";
//   }
// }
// int main(){
//   int j=127;
//   string str1 = to_string(j);
//   for(int i=0;i<str1.size();i++){
//     cout<<str1[i]<<"\t";
//   }
// }


#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
using namespace std;

class my{};

int main(){
  int n=INT32_MAX;
  char x[12];
  getline(cin,x);
  cout<<x;
}