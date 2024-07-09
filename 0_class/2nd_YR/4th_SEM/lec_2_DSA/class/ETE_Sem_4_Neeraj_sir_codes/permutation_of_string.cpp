#include<iostream>
#include<vector>
#include<string>
using namespace std;

void rec(string &s,int i){
    if(i>=s.size()){
        cout << s<< endl;
        return;
    }
    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);
        rec(s,i+1);
        swap(s[i],s[j]);
    }
}


int main(){
    string s;
    cin >> s;
    rec(s,0);

}