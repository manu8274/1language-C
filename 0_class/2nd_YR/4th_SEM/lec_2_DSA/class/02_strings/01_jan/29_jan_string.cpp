#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     char a[]="apple";
//     char b[100]="orange";
//     // strcpy(b,a);//copy from a to and delete all beforehand
//     cout<<b<<endl;
//     cout<<strcmp(a,b)<<endl;//a-b
//     cout<<strcmp(b,a)<<endl;//b-a
//     cout<<strcat(a,b)<<endl;// to concatenate
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"enter number of strings : ";
//     cin>>n;
//     cin.get();//if we do not use this then we might not get whole n input but n-1 input as first enter after 5 will be considered as input
//     int lgl=0;
//     char newsen[1000];
//     for(int i=0;i<n;i++){
//         char c[1000];
//         cin.getline(c,1000);
//         if(lgl<strlen(c)){
//             lgl=strlen(c);
//             strcpy(newsen,c);
//         }
//     }
//     cout<<lgl<<"\t"<<newsen<<endl;
// }

// int main(){
//     string ch;
//     getline(cin,ch,'.');//3rd attribute is for ternary operator by default it is newline character
//     cout<<ch;
//     return 0;
// }

///////////check palindrome :::::::::::::::::::
// string checkpal(string s){
//     int start=0;
//     int end=s.length()-1;
//     while (start<end)
//     {
//         if(s[start]!=s[end])    return "false";
//         start++;
//         end--;
//     }
//     return "true";
    
// }

// int main(){
//     int n;
//     cin>>n;
//     cin.get();
//     for(int i=0;i<n;i++){
//         string s;
//         getline(cin,s);
//         // string x=checkpal(s)==1?"true":"false";
//         cout<<checkpal(s)<<endl;
//     }
// }


/////////strign compresssss::::::::::
// int main(){
//     string str;
//     getline(cin,str);
//     string res="";
//     int c=0;
//     char prev;
//     for(int i=0;i<str.length();i++){
//         if(i==0){
//             prev=str[0];}
//         else if(i==str.length()-1 && c!=0){

//         }
//         else{
//             if()
//         }
//     }
// }