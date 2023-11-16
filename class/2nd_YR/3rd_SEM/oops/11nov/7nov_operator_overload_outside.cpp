#include<iostream>
using namespace std;

// class pointminus{
//     int x,y;
//     public:
//         pointminus(){

//         }

//         pointminus(int a=0,int b=0){
//             x=a;
//             y=b;
//         }

//         pointminus operator -(pointminus &obj){
//             pointminus temp;
//             temp.x = abs(x - obj.x);
//             temp.y = abs(y - obj.y);
//             return temp;
//         }
//         void print(){
//             cout<<"x : "<<x<<"\t"<<"y : "<<y<<endl;
//         }
// };

// int main(){
//     pointminus p1(10,20);
//     pointminus p2(5,10);
//     pointminus p3;
//     p3=p2-p1;
//     p3.print();
// }

class test{
    int x;
    public:
        test(int x=0):x(x)
        {

        }
        friend istream& operator >>(istream& input,test& obj);
        friend ostream& operator <<(ostream& output,test& obj);

};
istream& operator >>(istream& input,test& obj){
            input>>obj.x;
            return input;
}//needs to be ceclared as a friend of class

ostream& operator <<(ostream& output,test& obj){
    output << obj.x;
    return output;
}

int main(){
    test t;
    cin>>t;//not allowed need to be overloaded
    cout<<t;//not allowed need to be overloaded
    return 0;
}