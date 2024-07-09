#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    while(s!="" && s.back()=='0') s.pop_back();
    if(s==""){
        cout << "0"<<endl;
        return 0;
    }
    reverse(s.begin(),s.end());
    if(s.back()=='-'){
        cout << "-";
        s.pop_back();
        cout << s<<endl;
    }else cout << s<<endl;
}