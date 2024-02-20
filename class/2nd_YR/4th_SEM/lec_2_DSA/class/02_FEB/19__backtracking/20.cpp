#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//to find the subset::::::::::::::::
//we have abc  output===a,b,c,ab,ac,bcabc,\0
// we have input array(i element) and output array(j element)
//we have to either include "a" or exclude " "


// void subset(char in[],char out[],int i,int j)
// {
//     //base case
//     if(in[i]=='\0')
//     {
//         out[j]='\0';
//         cout<<out<<endl;
//         return;
//     }
//     //operation
//     out[j]=in[i];
//     //recursive
//     //including element
//     subset(in,out,i+1,j+1);
//     //excluding element
//     subset(in,out,i+1,j);
// }

// int main(){
//     int n=3;
//     cin>>n;
//     char in[n];
//     cin>>in;
//     char out[n];
//     vector<string>st;
//     subset(in,out,0,0);
// }


// void subset(char in[],char out[],int i,int j,vector<string> &st)
// {
//     //base case
//     if(in[i]=='\0')
//     {
//         out[j]='\0';
//         st.push_back(out);
//         return;
//     }
//     //operation
//     out[j]=in[i];
//     //recursive
//     //including element
//     subset(in,out,i+1,j+1,st);
//     //excluding element
//     subset(in,out,i+1,j,st);
// }

// int main(){
//     int n=3;
//     cin>>n;
//     char in[n];
//     cin>>in;
//     char out[n];
//     vector<string>st;
//     subset(in,out,0,0,st);

//     sort(st.begin(),st.end());
//     for(int i=0;i<st.size();i++){
//         if(st[i][0]=='\0')  cout<<"NULL"<<endl;
//         else    cout<<st[i]<<endl;
//     }
// }


vector<string> subset(char in[],char out[],int i,int j)
{
    //base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        vector<string>v;
        v.push_back(out);
        return v;
    }
    //operation
    out[j]=in[i];
    //recursive
    //including element
    vector<string> v1=subset(in,out,i+1,j+1);
    //excluding element
    vector<string> v2=subset(in,out,i+1,j);
    for(auto x:v2){
        v1.push_back(x);
    }
    return v1;
}

int main(){
    int n=3;
    cin>>n;
    char in[n];
    cin>>in;
    char out[n];
    vector<string>st=subset(in,out,0,0);
    for(int i=0;i<st.size();i++){
        if(st[i][0]=='\0')  cout<<"NULL"<<endl;
        else    cout<<st[i]<<endl;
    }
}