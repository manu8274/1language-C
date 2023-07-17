#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll=1876;
    s1.cgpa=9.7;
    strcpy(s1.name,"manasvi");
    printf("student name=%d\n",s1);
    printf("student roll=%d\n",s1.roll);
    printf("student cgpa=%f\n",s1.cgpa);
}