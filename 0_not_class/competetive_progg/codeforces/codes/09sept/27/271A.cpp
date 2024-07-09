#include<iostream>
using namespace std;

int main(){
    int yr;
    cin>>yr;
    while(1){
        yr++;
        int y=yr;
        int lst[4];
        int k=0;
        while(y>0){
            int z=y%10;
            lst[k++]=z;
            y=y/10;
        }
        bool flag=1;
        int i=0;
        while(i<3 && flag){
            for(int j=i+1;j<4;j++){
                if(lst[i]==lst[j]){
                    flag=0;
                    break;
                }
            }
            i++;
        }
        if(flag){
            cout<<yr;
            break;
        }
    }
}