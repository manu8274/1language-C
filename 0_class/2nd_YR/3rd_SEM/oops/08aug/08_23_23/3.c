#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Emp{
    int id;
    char name[10];
};

void display(struct Emp arr[],int totalemp){
    for (int i=0;i<totalemp;i++){
        printf("%d\t%s\n",(arr[i]).id,(arr[i]).name);
        }
}

int main(){
    struct Emp e4arr[3];//array of total employee
    int totalemp = sizeof(e4arr)/sizeof(e4arr[0]);
    for (int i=0;i<totalemp;i++){
        printf("\nEnter emp name:");
        scanf("%s",(e4arr[i]).name);//its an character array so no use &
        printf("\nEnter emp id:");
        scanf("%d",&(e4arr[i]).id);
    }
    display(e4arr,totalemp);
}