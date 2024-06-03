#include<iostream>
#include<string>
#include<vector>
using namespace std;

void rec(string &s,int i,string cur){
    if(i>=s.size()){
        if(cur=="") cout << "NULL"<<endl;
        else cout << cur<<endl;
        return;
    }
    rec(s,i+1,cur);
    rec(s,i+1,cur+s[i]);

}

int main(){
    string s;
    cin >>s;
    rec(s,0,"");
}