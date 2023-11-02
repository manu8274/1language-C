#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string rev;
    int start=0,end=0,sz=str.size();
    for(int i=0;i<sz;i++){
        if(str[i]==32 || i==sz-1){ 
            if(i==sz-1) end=i;
            else    end=i-1;
            string rev1="";
            for(int j=end;j>=start;j--){
                rev1+=str[j];
            }
            rev+=rev1 +" ";
            start=i+1;
        }
    }
    cout<<rev;
}