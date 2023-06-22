#include <iostream>
#include<string>
using namespace std;

// int main() {
//   cout << "Hello World!"<<endl;
//   cout<<"kuyglefawi\n";
//   cout<<"liueaghlifr";
// }
/*int main(){
  int num=10;
  num=12;                      //integer no
  double myFloatNum = 5.99;    // Floating point number (with decimals)
  char myLetter = 'DAn';         // Character
  string myText = "Hello";     // String (text)
  bool myBoolean = true;
  cout<<num<<endl;
  cout<<myFloatNum<<endl;
  cout<<myLetter<<endl;
  cout<<myBoolean<<endl;
  cout<<myText<<endl;
}
int main(){
  int x,y,z;
  cin>>x;
  cin>>y;
  cin>>z;
  cout<<x+y+z;
}

int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string middlename="merry";
  string fullName = firstName.append(middlename);
  fullName= fullName +" " + lastName;
  cout << fullName<<endl;
  cout<<"length of fullname="<<fullName.length()<<endl;
  cout<<"length of fullname="<<fullName.size()<<endl;
  return 0;
}*/

int main(){
  string firstname,fullname;
  cout<<"enter name fullname but only 1st word will count"<<endl;
  cin>>firstname;
  cout<<firstname<<endl;
  
  cout<<"enter name fullname but now all word will count"<<endl;
  getline(cin,fullname);
  cout<<fullname;
}