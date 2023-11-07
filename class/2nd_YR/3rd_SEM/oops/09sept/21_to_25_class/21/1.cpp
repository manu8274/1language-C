#include<iostream>
using namespace std;

// class student{
//     public:
//         string name;
//         int rol;
    
// };

// int main(){
//     student std;
//     std.name="rahul";
//     std.rol=28;
//     cout<<"HI HOW R U "<<std.name<<endl;
//     cout<<"YOUR ROLL NO. IS "<<std.rol<<endl;
// }

// class Car {
//   public:
//     string brand;   
//     string model;
//     int year;
// };

// int main() {
//   Car carObj1;
//   carObj1.brand = "BMW";
//   carObj1.model = "X5";
//   carObj1.year = 1999;

//   Car carObj2;
//   carObj2.brand = "Ford";
//   carObj2.model = "Mustang";
//   carObj2.year = 1969;

//   cout << carObj1.brand << "\t" << carObj1.model << "\t" << carObj1.year << "\n";
//   cout << carObj2.brand << "\t" << carObj2.model << "\t" << carObj2.year << "\n";
//   return 0;
// }

class calculator{
    public:
        int a,b;
        int add(int a,int b){
            return a+b;
        }
        int sub(int a,int b){
            return abs(a-b);
        }
        int mul(int a,int b){
            return a*b;
        }
        int div(int a, int b){
            return a/b;
        }
};

int main(){
    while(true){
        int c;
        cout<<"Enter your choice(1 for addition , 2 for subtraction , 3 for multiplication , 4 for division , 5 for exit)";
        cin>>c;
        calculator cal;
        switch (c)
        {
        case 1:
        int a,b;
            cout<<"enter the numbers";
            cin>>a>>b;
            cout<<cal.add(a,b)<<endl;
            break;
        case 2:
            cout<<"enter the numbers";
            cin>>a>>b;
            cout<<cal.sub(a,b)<<endl;
            break;
        case 3:
            cout<<"enter the numbers";
            cin>>a>>b;
            cout<<cal.mul(a,b)<<endl;
            break;
        case 4:
            cout<<"enter the numbers";
            cin>>a>>b;
            cout<<cal.div(a,b)<<endl;
            break;
        case 5:
            return 0;
        }
    }
}