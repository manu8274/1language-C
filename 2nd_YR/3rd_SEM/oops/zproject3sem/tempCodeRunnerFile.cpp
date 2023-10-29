#include<iostream>
#include<math.h>
#include<string>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#include<windows.h>
using namespace std;

class HOD{

};

class teacherss{

};

class students{

};

void mainteach(){
    system("COLOR 0e");
    system("cls");
    cout<<"hello teacher";
    string user,pass;
    cout<<"PLS VERIFY YOUR ID"<<endl;
    cout<<"USERNAME : ";
    cin>>user;
    cout<<endl<<"PASSWORD : ";
    cin>>pass;

}

void mainstudent(){
    system("COLOR 0e");
    system("cls");
    cout<<"hello stud";
}

void mainHOD(){
    system("COLOR 0e");
    system("cls");
    cout<<"hello HOD";
}

void mainmain(){
    system("COLOR 0e");
    system("cls");
    cout.width(55);
    cout<<right<<"HELLO"<<endl<<endl;;
    cout.width(72);
    sleep(1);
    cout<<"WELCOME TO SCHOOL MANAGEMENT SYSTEM"<<endl;
    sleep(1);
    cout<<"PLS ENTER YOUR PROFESSION"<<endl;
    sleep(1);
    cout<<"1. HOD "<<endl;
    cout<<"2. TEACHER "<<endl;
    cout<<"3. STUDENT "<<endl;
    string proff;
    cin>>proff;
    while(proff!="Teacher" && proff!="teacher" && proff!="HOD" && proff!="hod" && proff!="Student" && proff!="student"){
        cout<<"WRONG INPUT !!!!!!!";
        sleep(1);
        cout<<"\r                                            \r";
        cout<<"WRITE AGAIN";
        sleep(1);
        cout<<"\r                                             \r";
        cin>>proff;
    }
    cout<<"Accessing "<<proff<<" window ";
    for(int i=0;i<5;i++){
        cout<<(char)219;
        sleep(1);
    }
    sleep(1);
    cout<<"\r                                       \r";
    if(proff=="Teacher" || proff=="teacher")    mainteach();
    else if(proff=="HOD" || proff=="hod")   mainHOD();
    else if(proff=="Student" || proff=="student")   mainstudent();
}



int main() 
{
    mainmain();
}