#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class lib{
    public:
        int rp,cp;
        lib(int x=0,int y=0){
            rp=x;
            cp=y;
        }

        lib operator + (lib &obj){
            lib temp;
            temp.rp=rp + obj.rp;
            temp.cp=cp + obj.cp;
            return temp;
        }

        lib operator - (lib &obj){
            lib temp;
            temp.rp=rp - obj.rp;
            temp.cp=cp - obj.cp;
            return temp;
        }

        lib operator * (lib &obj){
            lib temp;
            temp.rp=rp * obj.rp - cp * obj.cp;
            temp.cp=rp * obj.cp + cp * obj.rp;
            return temp;
        }

        void print(){
            if(cp>0)    cout<<endl<<rp<<" + "<<cp<<"i"<<endl;
            else    cout<<endl<<rp<<" - "<<-cp<<"i"<<endl;
        }
};


int main(){
    lib obj1,obj2,obj3;
    cout<<"Enter the first complex number";
    cin>>obj1.rp>>obj1.cp;
    cout<<"Enter the second complex number";
    cin>>obj2.rp>>obj2.cp;
    obj3=obj1-obj2;
    obj3.print();
}