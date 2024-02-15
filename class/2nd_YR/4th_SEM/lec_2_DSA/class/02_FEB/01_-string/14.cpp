#include<istream>
#include<bits/stdc++.h>
using namespace std;

// int power(int a,int b){
//     if(b==1)    return a;
//     return  a*power(a,b-1);
// }
// int power(int a,int b){
//     if(b==1)    return a;
//     if(b%2==0){
//         return power(a,b/2)*power(a,b/2);
//     }
//     else{
//         return a*power(a,b/2)*power(a,b/2);
//     }
// }

// int main(){
//     cout<<power(2,5);
// }


// void fun(int n){
//     if(n==0)    return;
//     else{
//         int c=n%10;
//         fun(n/10);
//         if(c==0)    cout<<"ZERO"<<"\t";
//         else if(c==1)    cout<<"ONE"<<"\t";
//         else if(c==2)    cout<<"TWO"<<"\t";
//         else if(c==3)    cout<<"THREE"<<"\t";
//         else if(c==4)    cout<<"FOUR"<<"\t";
//         else if(c==5)    cout<<"FIVE"<<"\t";
//         else if(c==6)    cout<<"SIX"<<"\t";
//         else if(c==7)    cout<<"SEVEN"<<"\t";
//         else if(c==8)    cout<<"EIGHT"<<"\t";
//         else if(c==9)    cout<<"NINE"<<"\t";
//     }
// }

// int main(){
//     int n=2021;
//     fun(n);
// }

int bitr(int n){
    if(n==0)    return 1;
    else if(n==1)   return 2;
    else
    {
        return bitr(n-2)+bitr(n-1);
    }
    
}

int main(){
    int n=3;
    cout<<bitr(n);
}