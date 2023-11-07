#include<iostream>
using namespace std;

int operate(int a,int b){
    return (a*b);
}
float operate(float a,float b){
    return (a/b);
}
int main(){
    int x=5,y=6;
    float a=5.0,b=2.0;
    cout<<operate(x,y)<<endl;
    cout<<operate(a,b);
}