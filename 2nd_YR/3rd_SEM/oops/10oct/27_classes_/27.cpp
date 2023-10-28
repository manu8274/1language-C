//classes and objects
#include<iostream>
#include<math.h>
#include<string>
#include<stdlib.h>
#include<string>

using namespace std;
////access public elements :::::::::::::::::::::::::::::::
// class Dog{
//     public:
//         string breed,color;
// };

// void main(){

// }

////access the private elements::::::::::::::::::::::::::::
// class Dog{
//     private:
//         string breed;
//     public:
//         string getbreed(){
//             return breed;
//         }

//         void setbreed(string s){
//             breed=s;
//         }
// };

// int main(){
//     Dog dog;
//     dog.setbreed("pug");
//     cout<<dog.getbreed()<<endl;
// }


// class Dog{
//     public:
//         string breed,color;
//         void printp();
// };

// void Dog::printp(){
//     cout<<"Breed: "<<breed<<" ,color: "<<color<<endl;
// }

// int main(){
//     Dog dog;
//     dog.breed="pug";
//     dog.color="black";
//     dog.printp();
// }

#include <iostream>
using namespace std;

class CDummy {
public:
    int isitme(CDummy& param);
};

int CDummy::isitme(CDummy& param) {
    if (&param == this) 
        return true;
    else 
        return false;
}

int main() {
    CDummy a;
    CDummy* b = &a;

    if (b->isitme(a)) {
        cout << "execute";
    } else {
        cout << "not execute";
    }

    return 0;
}
