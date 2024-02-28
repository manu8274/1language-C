#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     // char a[]={'a','b','c','\0'};
//     // cout<<a<<endl;
//     char b[100];
//     char c;
//     int  n=0,ws=0,dg=0,ab=0;
//     // cout<<"enter length : ";
//     // cin>>n;
//     while(c!='\n'){
//         c=cin.get();
//         b[n++]=c;
//         if((c>='a' && c<='z')||(c>='A' && c<='Z'))  ab++;
//         else if(c<='9' && c>='0')   dg++;
//         else if(c==' ' || c=='\t')
//         {
//             ws++;
//         }
        
//     }
//     // gets(b);
//     // cout<<b<<endl;
//     // cout<<n;
//     cout<<"number of whitespaces : "<<ws<<endl;
//     cout<<"number of digit : "<<dg<<endl;
//     cout<<"number of alphabet : "<<ab<<endl;
// }

int main(){
    char dt[100];
    char c;
    int i=0;
    int north=0,east=0;
    int n=0,s=0,e=0,w=0;
    while(c!='\n'){
        c=cin.get();
        dt[i++]=c;
        if(c=='N' || c=='n'){
            north++;
            n++;
        }
        else if(c=='S' || c=='s'){
            north--;
            s++;
        }
        else if(c=='E' || c=='e'){
            east++;
            e++;
        }
        else if(c=='W' || c=='w'){
            east--;
            w++;
        }
    }
    cout<<"number of north steps : "<<n<<endl;
    cout<<"number of south steps : "<<s<<endl;
    cout<<"number of east  steps : "<<e<<endl;
    cout<<"number of west  steps : "<<w<<endl;
    char dp[abs(north)+abs(east)];
    int l=0;
    if(north>0){
        for(int j=0;j<north;j++){
            dp[l++]='N';
        }
    }
    else{
        north=abs(north);
        for(int j=0;j<north;j++){
            dp[l++]='S';
        }
    }
    if(east>0){
        for(int j=0;j<east;j++){
            dp[l++]='E';
        }
    }
    else{
        east=abs(east);
        for(int j=0;j<east;j++){
            dp[l++]='W';
        }
    }
    dp[l]='\0';
    cout<<dp;
}