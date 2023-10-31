#include<iostream>
#include<math.h>
#include<string>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#include<windows.h>
using namespace std;
 
//:::::::::::::::::::::::::::::::::::::to ask about how to go back to a function outside the class using the function inside the class

class db{
    public:
        
};

class HOD{
    private:

        void teacherdatabase(){
            cout<<"teacher database";
            //use the connected teacher database
        }

        void studentdatabase(){
            cout<<"student database";
            //use the connected student data base
        }
        
        int power(string name){
            system("cls");
            cout.width(70);
            cout<<"WELCOME HOD "<<name;
            cout<<"what would like to do (enter choice number) : "<<endl;
            cout<<"1. ACCESS STUDENT DATABASE"<<endl;
            cout<<"2. ACCESS TEACHER DATABASE"<<endl;
            cout<<"3. back to main"<<endl;
            cout<<"4. exit"<<endl;
            int choice;
            cin>>choice;
            while(choice!=1 && choice!=2 && choice!=3 && choice!=4){
                cout<<"wrong choice !!!!";
                sleep(1);
                cout<<"\r                             \r";
                cout<<"enter the coice again";
                sleep(1);
                cout<<"\r                           \r";
                cin>>choice;
            }
            if(choice==1)   teachedatabase();
            else if(choice==2)  studenntdatabase();
            else if(choice==3) mainHOD();
            else if(choice==4)  return 0;;
            else    return 0;
        }


    public:
        void mainHOD(){
            system("COLOR 0e");
            system("cls");
            cout<<"hello HOD";
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
                mainHOD();
            }
            else{
                int ch;
                cout<<endl<<"1.Do you want to fetch records : ";
                cout<<endl<<"2.Do you want to go back to main : ";
                cout<<endl<<"3.Do you want to go exit : "<<endl;
                cin>>ch;
                if(ch==1) power(name);
                // else if(ch==2)    mainmain();
                else    return 0;
            }
        }
};

class teachers{
    private:

        void remove(){
            cout<<"remove";
            //use the connected database 
            //to remove the required row from database;
        }

        void insert(){
            cout<<"insert";
            //use the connected database
            //to insert required row into databbase;
        }

        void change(){
            cout<<"change";
            //use the connected database
            //to change required row in database;
        }

        int teach(string name){
            system("cls");
            cout.width(70);
            cout<<"WELCOME TEACHER "<<name;
            cout<<"what would like to do (enter choice number) : "<<endl;
            cout<<"1. INSERT A NEW STUDENT INFORMATION"<<endl;
            cout<<"2. REMOVE A STUDENT INFORMATION"<<endl;
            cout<<"3. CHANGE A STUDENT INFORMATION"<<endl;
            cout<<"4. BACK TO MAIN "<<endl;
            cout<<"5. EXIT "<<endl;
            int choice;
            cin>>choice;
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
            else    return 0;
        }
    public:
        int mainteach(){
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
                cout<<endl<<"1.Do you want to ACCESS STUDENT DATABASE : ";
                cout<<endl<<"2.Do you want to GO BACK TO MAIN : ";
                cout<<endl<<"3.Do you want to EXIT  : "<<endl;
                cin>>ch;
                if(ch==1) teach(name);
                // else if(ch==2)    mainmain();
                else    return 0;
            }
        }
        
};

class students{
    private:

        void details(){
            cout<<"details";
            //use the connected database
            //to fetch details from database
        }

        int stud(string name){
            // system("COLOR 0f");
            system("cls");
            cout.width(70);
            cout<<"WELCOME STUDENT "<<name<<endl;
            details();
        }

    public:
        int mainstudent(){
            system("COLOR 0b");
            system("cls");
            cout<<"hello student"<<endl;
            string user,pass,name;
            cout<<"PLS enter your name : ";
            cin>>name;
            string clas;
            cout<<"pls enter your class : ";
            cin>>clas;
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
                mainstudent();
            }
            else{
                int ch;
                cout<<endl<<"1.Do you want to ACCESS STUDENT DATABASE : ";
                cout<<endl<<"2.Do you want to go BACK TO MAIN : ";
                cout<<endl<<"3.Do you want to go EXIT : "<<endl;
                cin>>ch;
                if(ch==1) stud(name);
                // else if(ch==2)    mainmain();
                else    return 0;
            }
        }
};


void mainmain(){
    system("COLOR 0f");
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