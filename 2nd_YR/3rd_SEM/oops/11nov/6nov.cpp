#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// let three point with object as their coordinates and names 
// what we want to do is that to assign the value of p1 point cordinates negative to the p2 point

class point{
    int x,y;
    public:
        point(){

        }

        point(int a,int b):x(a),y(b){

        }

        point operator -( point &obj){
            point temp;
            temp.x=-obj.x;
            temp.y=-obj.y;
            return temp;
            // return point(-x,-y);
        }
        void print(){
            cout<<"x : "<<x<<"\t"<<"y : "<<y<<endl;
        }
};

// int main(){
//     point p1(2,3);
//     point p2(4,5);
//     point p3;
//     p3=-p2;
//     p3.print();
// }

// #include<iostream>
// using namespace std;

// class pointminus{
//     int x,y;
//     public:
//         pointminus(){

//         }

//         pointminus(int a,int b){
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