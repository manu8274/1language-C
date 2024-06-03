#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count=1;
    char last=s[0];
    string ans="";
    for(int i=1;i<s.size();i++){
        if(last==s[i])count++;
        else{
            ans.push_back(last);
            if(count>1) ans+=to_string(count);
            count=1;
            last=s[i];
        }
    }
    ans.push_back(last);
    if(count>1) ans+=to_string(count);
    cout << ans<<endl;
}