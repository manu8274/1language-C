#include<stdio.h>
#include<string.h>

struct myinfo{
    long long int roll;
    char name[100];
    char section[];
};

int main(){
    struct myinfo manasvi;
    manasvi.roll=2210991876;
    strcpy(manasvi.name,"MANASVI");
    strcpy(manasvi.section,"G-25");
    printf("%lli\n",manasvi.roll);
    printf("%s\n",manasvi.name);
    printf("%s",manasvi.section);
}