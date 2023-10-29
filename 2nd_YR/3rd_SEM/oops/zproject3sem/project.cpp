#include<iostream>
#include<math.h>
#include<string>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#include<windows.h>
using namespace std;
 
//:::::::::::::::::::::::::::::::::::::to ask about how to go back to a function outside the class using the function inside the class

class HOD{
    private:

    public:
        void mainHOD(){
            system("COLOR 0e");
            system("cls");
            cout<<"hello HOD";
        }
};

class teachers{
    private:

        void remove(){
            cout<<"remove";
            //to remove the required row from database;
        }

        void insert(){
            cout<<"insert";
            //to insert required row into databbase;
        }

        void change(){
            cout<<"change";
            //to change required row in database;
        }

        void teach(string name){
            system("COLOR 0e");
            system("cls");
            cout.width(70);
            cout<<"WELCOME TEACHER "<<name;
            cout<<"what would like to do (enter choice number) : "<<endl;
            cout<<"1.insert new student information"<<endl;
            cout<<"2.remove a student information"<<endl;
            cout<<"3.change a student information"<<endl;
            cout<<"4.back"<<endl;
            int choice;
            while(choice!=1 && choice!=2 && choice!=3 && choice!=4){
                cout<<"wrong choice !!!!";
                sleep(1);
                cout<<"\r                             \r";
                cout<<"enter the coice again";
                sleep(1);
                cout<<"\r                           \r";
                cin>>choice;
            }
            if(choice==1)   insert();
            else if(choice==2)  remove();
            else if(choice==3)  change();
            else if(choice==4)  mainteach();
        }
    public:
        void mainteach(){
            system("COLOR 0e");
            system("cls");
            cout<<"hello teacher"<<endl;
            string user,pass,name;
            cout<<"PLS enter your name : ";
            cin>>name;
            cout<<"PLS VERIFY YOUR ID"<<endl;
            cout<<"USERNAME : ";
            cin>>user;
            cout<<"PASSWORD : ";
            cin>>pass;
            string password=user+"@123";
            cout<<"CHECKING ";
            for(int i=0;i<5;i++){
                cout<<(char)219;
                sleep(1);
            }
            if(pass!=password){
                mainteach();
            }
            else{
                int ch;
                cout<<"1.Do you want to go head : ";
                cout<<"2.Do you want to go back : ";
                cout<<"3.Do you want to go exit : ";
                cin>>ch;
                if(ch==1) teach(name);
                else if(ch==2)    mainmain();
                else    return 0;
            }
        }
};

class students{
    private:

    public:
        void mainstudent(){
            system("COLOR 0e");
            system("cls");
            cout<<"hello stud";
        }
};


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
    if(proff=="Teacher" || proff=="teacher"){
        teachers t;
        t.mainteach();
    }
    else if(proff=="HOD" || proff=="hod"){
        HOD h;
        h.mainHOD();
    }
    else if(proff=="Student" || proff=="student"){
        students st;
        st.mainstudent();
    }
}



int main() 
{
    mainmain();
}