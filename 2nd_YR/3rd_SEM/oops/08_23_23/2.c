#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Emp{
    char name[10];
    int id;
};

void display(struct Emp *e,int totalemp){
    for (int i=0;i<totalemp;i++){
        printf("emp id:%d\temp name:%s\n",(e+i)->id,(e+i)->name);
    }
}


int main(){
    struct Emp *e;
    int totalemp;
    printf("Enter Total Employee: ");
    scanf("%d",&totalemp);
    e=(struct Emp*) malloc(totalemp*sizeof(struct Emp));// to make pointer structure
    for (int i=0;i<totalemp;i++){
        printf("\nEnter emp name:");
        scanf("%s",(e+i)->name);//its an character array so no use &
        printf("\nEnter emp id:");
        scanf("%d",&(e+i)->id);//->is pointing the number to its variable
        
    }
    display(e,totalemp);
}