#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v(26,0);
    char ch ;
    string str = "mayyyyaaaanykay";
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        int ascii = (int)(ch);
        v[ascii-97]++;
    }
    int max = 0;
    char ch2;
    for(int i=0;i<26;i++){
        if(v[i]>max){
            max = v[i];
        }
    }
    for(int i=0;i<26;i++){
        if(v[i]==max){
            max = v[i];
            ch2 = (char)(97+i);
            cout<<ch2<<" "<<max<<endl;
        }
    }
}